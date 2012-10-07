// http://www.transmissionzero.co.uk/computing/using-glut-with-mingw/

#include <stdlib.h>
#include <stdio.h>
#include <glut.h>
#include <GL/glu.h>
#include <GL/gl.h>

using namespace std;


// forward declarations
void renderScene();
void resizeFunc(int w, int h);


float angle = 0.0;

int main(int argc, char** argv)
{
  

  // init, this needs to the be first call to a glutFunction
  glutInit(&argc, argv);

  // set the position of the window we will create--using -1 allows the window manager to decide
  glutInitWindowPosition(-1, -1);


  // set the window size.
  glutInitWindowSize(300, 300);


  // set the display mode
  //  use RGB color
  //  use double buffering
  glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);


 

  // create the window itself
  glutCreateWindow("GLUT Test");

  // register a function to call every time the window has to render.
  glutDisplayFunc(&renderScene);


  // register a window resize function
  glutReshapeFunc(&resizeFunc);


  glutIdleFunc(&renderScene);
  
  glutMainLoop();

  return EXIT_SUCCESS;

}




void renderScene(){
  
  printf("rendering with angle = %f\n", angle);
  // clear
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);  


  // get rid of any transforations
  glLoadIdentity();


  glRotatef(angle, 0.0f, 1.0f, 0.0f);
  glRotatef(angle, 2.0f, 0.0f, 0.0f);



  // render a triangle
  glBegin(GL_TRIANGLES);
    glVertex3f(-0.5,-0.5,0.0);
    glVertex3f(0.5,0.0,0.0);
    glVertex3f(0.0,0.5,0.0);
  glEnd();
 

  angle += 1;
  

  glutSwapBuffers();
}


void resizeFunc(int w, int h){

  // if height is 0, set it to one.
  h = (h == 0) ? 1 : w;

  double ratio = (1.0 * w) / h;

  // Use the Projection Matrix
  glMatrixMode(GL_PROJECTION);

  // Reset Matrix
  glLoadIdentity();

  // Set the viewport to be the entire window
  glViewport(0, 0, w, h);

  // Set the correct perspective.
  // gluPerspective(45,ratio,1,1000);

  // Get Back to the Modelview
  glMatrixMode(GL_MODELVIEW);

}