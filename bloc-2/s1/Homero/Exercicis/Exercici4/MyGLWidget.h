#define GLM_FORCE_RADIANS
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLWidget>
#include <QOpenGLShader>
#include <QOpenGLShaderProgram>
#include <QKeyEvent>
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "./Model/model.h"

class MyGLWidget : public QOpenGLWidget, protected QOpenGLFunctions_3_3_Core 
{
	Q_OBJECT

	public:
		MyGLWidget (QWidget *parent=0);
		~MyGLWidget ();
	protected:
		// initializeGL - Aqui incluim les inicialitzacions del contexte grafic.
		virtual void initializeGL ( );
		// paintGL - Mètode cridat cada cop que cal refrescar la finestra.
		// Tot el que es dibuixa es dibuixa aqui.
		virtual void paintGL ( );
		// resizeGL - És cridat quan canvia la mida del widget
		virtual void resizeGL (int width, int height);
		// keyPressEvent - Es cridat quan es prem una tecla
		virtual void keyPressEvent (QKeyEvent *event);

	private:
		// functions
		void createBuffers ();
		void carregaShaders ();
		void modelTransform ();
		void ini_camera ();
		void projectTransform ();
		void viewTransform ();
		// attribute locations
		GLuint vertexLoc, colorLoc;
		// uniform locations
		GLuint transLoc, projLoc, viewLoc;
		// VAO names
		GLuint VAO_Homer, VBO_HomerPos, VBO_HomerCol;
		//VBO names
		GLuint VAO_Terra, VBO_TerraPos, VBO_TerraCol;
		// Program
		QOpenGLShaderProgram *program;
		// Internal vars
		Model homer;
		float scale;
		glm::vec3 pos;
		
		// Added vars
		GLfloat FOV;
		GLfloat ra;
		GLfloat znear;
		GLfloat zfar;
		
		glm::vec3 OBS;
		glm::vec3 VRP;
		glm::vec3 UP;

};

