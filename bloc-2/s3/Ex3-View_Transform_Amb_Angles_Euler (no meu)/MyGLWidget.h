#define GLM_FORCE_RADIANS
#include <QGLWidget>
#include <QGLShader>
#include <QGLShaderProgram>
#include <QKeyEvent>
#include "model.h"
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

class MyGLWidget : public QGLWidget {
  Q_OBJECT

  public:
    MyGLWidget (QGLFormat &f, QWidget *parent=0);

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
    void createBuffers ();
    void carregaShaders ();
    void modelTransform ();
    void projectTransform ();
    void viewTransform ();
    void paintTerra();
    void paintPatricio();
    // attribute locations
    GLuint vertexLoc, colorLoc;
    // uniform locations
    GLuint transLoc,projLoc,viewLoc;
    // VAO i VBO names
    GLuint VAO_Patricio, VBO_Patricio, VBO_PatricioCol;
    GLuint VAO_Terra, VBO_TerraPos, VBO_TerraCol;
    // Program
    QGLShaderProgram *program;
    // Internal vars
    float scale, rotateP,rotate;
    double ra;
    double sx,sy;
    double fov;

    glm::vec3 pos,patrMin,patrMax;
    Model patricio;
};


