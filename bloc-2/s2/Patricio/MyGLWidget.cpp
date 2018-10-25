#include "MyGLWidget.h"

#include <iostream>

MyGLWidget::MyGLWidget (QWidget* parent) : QOpenGLWidget(parent), program(NULL)
{
  setFocusPolicy(Qt::StrongFocus);  // per rebre events de teclat
  scale = 1.0f;
}

MyGLWidget::~MyGLWidget ()
{
  if (program != NULL)
    delete program;
}

void MyGLWidget::initializeGL ()
{
    // Cal inicialitzar l'ús de les funcions d'OpenGL
    initializeOpenGLFunctions();
    glClearColor(0.5, 0.7, 1.0, 1.0); // defineix color de fons (d'esborrat)
    glEnable(GL_DEPTH_TEST);
    carregaShaders();
    createBuffers();
    ini_camera ();
}

void MyGLWidget::ini_camera ()
{
	FOV = M_PI/2;
	iniFOV = FOV;
	ra = 1.0;
	znear = 0.4;
    zfar = 3.0;
    projectTransform();
    
	OBS = glm::vec3(0,0,1);
	VRP = glm::vec3(0,0,0);
	UP = glm::vec3(0,1,0);	  
	viewTransform();
}

void MyGLWidget::paintGL () 
{
	glViewport (0, 0, width(), height()); // Aquesta crida no caldria perquè Qt la fa de forma automàtica amb aquests paràmetres

	// Esborrem el frame-buffer
	glClear (GL_COLOR_BUFFER_BIT);

	// Carreguem la transformació de model
	modelTransform ();

	// Activem el VAO per a pintar la caseta 
	glBindVertexArray (VAO_Homer);

	// pintem
	glDrawArrays(GL_TRIANGLES, 0, homer.faces().size()*3);
	
	glBindVertexArray (0);
}

void MyGLWidget::modelTransform () 
{
	// Matriu de transformació de model
	glm::mat4 transform (1.0f);
	transform = glm::rotate(transform, angle, glm::vec3(0.0,1.0,0.0));
	transform = glm::scale(transform, glm::vec3(scale));
	glUniformMatrix4fv(transLoc, 1, GL_FALSE, &transform[0][0]);
}

void MyGLWidget::projectTransform () 
{
	glm::mat4 Proj = glm::perspective (FOV, ra, znear, zfar);
	glUniformMatrix4fv (projLoc, 1, GL_FALSE, &Proj[0][0]);
}

void MyGLWidget::viewTransform ()
{
	glm::mat4 View = glm::lookAt (OBS, VRP, UP);
	glUniformMatrix4fv (viewLoc, 1, GL_FALSE, &View[0][0]);
}

void MyGLWidget::resizeGL (int w, int h) 
{
	if(w/h > 1){
		c
	}
}

void MyGLWidget::keyPressEvent(QKeyEvent* event) 
{
	makeCurrent();
	switch (event->key()) 
	{
		case Qt::Key_S: { // escalar a més gran
			if(scale+ 0.05 < 2.15) scale += 0.05;
			break;
		}
		case Qt::Key_D: { // escalar a més petit
			if(scale - 0.05 >= 0) scale -= 0.05;
			break;
		}
		case Qt::Key_R: { // escalar a més petit
			angle += float(M_PI/4);
			break;
		default: 
			event->ignore(); 
			break;
		}
	}
	update();
}

void MyGLWidget::createBuffers () 
{
	// Dades de la caseta
	// Dos VBOs, un amb posició i l'altre amb color

	// Creació del Vertex Array Object per pintar
	homer.load("./models/HomerProves.obj");

	glGenVertexArrays(1, &VAO_Homer);
	glBindVertexArray(VAO_Homer);

	glGenBuffers(1, &VBO_HomerPos);
	glBindBuffer(GL_ARRAY_BUFFER, VBO_HomerPos);
	glBufferData(GL_ARRAY_BUFFER, sizeof(GLfloat)*homer.faces().size()*3*3, homer.VBO_vertices(), GL_STATIC_DRAW);

	// Activem l'atribut vertexLoc
	glVertexAttribPointer(vertexLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(vertexLoc);

	glGenBuffers(1, &VBO_HomerCol);
	glBindBuffer(GL_ARRAY_BUFFER, VBO_HomerCol);
	glBufferData(GL_ARRAY_BUFFER,sizeof(GLfloat)*homer.faces().size()*3*3, homer.VBO_matdiff(), GL_STATIC_DRAW);

	// Activem l'atribut colorLoc
	glVertexAttribPointer(colorLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(colorLoc);

	// Dades del terra
	// Dos VBOs, un amb posició i l'altre amb color
	glm::vec3 posterra[4] = {
		glm::vec3(-1.0, -1.0, -1.0),
		glm::vec3(-1.0, -1.0, 1.0),
		glm::vec3(1.0, -1.0, -1.0),
		glm::vec3(1.0, -1.0, 1.0)
	}; 
	glm::vec3 colterra[4] = {
		glm::vec3(1,0,1),
		glm::vec3(1,0,1),
		glm::vec3(1,0,1),
		glm::vec3(1,0,1)
	};

	// Creació del Vertex Array Object per pintar
	glGenVertexArrays(1, &VAO_Terra);
	glBindVertexArray(VAO_Terra);

	glGenBuffers(1, &VBO_TerraPos);
	glBindBuffer(GL_ARRAY_BUFFER, VBO_TerraPos);
	glBufferData(GL_ARRAY_BUFFER, sizeof(posterra), posterra, GL_STATIC_DRAW);

	// Activem l'atribut vertexLoc
	glVertexAttribPointer(vertexLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(vertexLoc);

	glGenBuffers(1, &VBO_TerraCol);
	glBindBuffer(GL_ARRAY_BUFFER, VBO_TerraCol);
	glBufferData(GL_ARRAY_BUFFER, sizeof(colterra), colterra, GL_STATIC_DRAW);

	// Activem l'atribut colorLoc
	glVertexAttribPointer(colorLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(colorLoc);

	glBindVertexArray (0);
}

void MyGLWidget::carregaShaders()
{
	// Creem els shaders per al fragment shader i el vertex shader
	QOpenGLShader fs (QOpenGLShader::Fragment, this);
	QOpenGLShader vs (QOpenGLShader::Vertex, this);
	// Carreguem el codi dels fitxers i els compilem
	fs.compileSourceFile("shaders/fragshad.frag");
	vs.compileSourceFile("shaders/vertshad.vert");
	// Creem el program
	program = new QOpenGLShaderProgram(this);
	// Li afegim els shaders corresponents
	program->addShader(&fs);
	program->addShader(&vs);
	// Linkem el program
	program->link();
	// Indiquem que aquest és el program que volem usar
	program->bind();

	// Obtenim identificador per a l'atribut “vertex” del vertex shader
	vertexLoc = glGetAttribLocation (program->programId(), "vertex");
	// Obtenim identificador per a l'atribut “color” del vertex shader
	colorLoc = glGetAttribLocation (program->programId(), "color");
	// Uniform locations
	transLoc = glGetUniformLocation (program->programId(), "TG");
	projLoc = glGetUniformLocation (program->programId(), "proj");
	viewLoc = glGetUniformLocation (program->programId(), "view");
}

