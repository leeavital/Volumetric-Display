#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <glut.h>

using namespace std;

void keyboard(unsigned char key, int x, int y);
void display(void);


int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutCreateWindow("GLUT Test");
  glutKeyboardFunc(&keyboard);
  glutDisplayFunc(&display);
  glutMainLoop();

  return EXIT_SUCCESS;
}


void keyboard(unsigned char key, int x, int y)
{
  printf("key: %c at %d, %d\n", key, x, y);
  switch (key)
  {
    case '\x1B':
      exit(EXIT_SUCCESS);
      break;
  }
}


void display()
{
  glClear(GL_COLOR_BUFFER_BIT);

  glColor3f(0.0f, 1.0f, 0.0f);

  glBegin(GL_POLYGON);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f( 0.5f, -0.5f);
    glVertex2f( 0.5f,  0.5f);
    glVertex2f(-0.5f,  0.5f);
  glEnd();

  glFlush();
}