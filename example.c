// Simple OpenGL graphics program

#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>

void display(){

	glClear(GL_COLOR_BUFFER_BIT);

	glPointSize(10.0);

	glBegin( GL_POLYGON );
	  glVertex2f( 0.0, 0.0);
	  glVertex2f( 0.5, 0.5);
	  glVertex2f( 0.5,-0.5);
	  glVertex2f(-0.5,-0.5);
	  glVertex2f(-0.5, 0.5);
	glEnd();

	glBegin( GL_POINTS );
	  glVertex2f( 0.0, 0.0);
	  glVertex2f( 0.5, 0.5);
	  glVertex2f( 0.5,-0.5);
	  glVertex2f(-0.5,-0.5);
	  glVertex2f(-0.5, 0.5);
	glEnd();

	glFlush();

}

int main(int argc, char** argv){

	glutInit( &argc, argv );
	glutCreateWindow("Hello graphics!");
	glutDisplayFunc( display );
	glutMainLoop();

	return 0;
}