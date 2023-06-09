#include <windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <gl/glut.h>
#include <stdio.h>

void DoDisplay();
void pressKeys(int value);
void playPiano(int value);

GLfloat x;
GLboolean is = GL_TRUE;
GLint a[] = { 0,0,1,0,0,0 };
void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(1000, 800);
	//glutInitWindowPosition(100, 100);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	
	x = 0.0;
	glutCreateWindow("OpenGL");
	glutDisplayFunc(DoDisplay);

	glutTimerFunc(40, pressKeys, 0.01f);

	glutMainLoop();
	return 0;
}

void playPiano(int value)
{

}

void pressKeys(int value)
{
	//printf("%f", x);
		
	if (value < 10)
		x -= 0.01f;
	else if (value < 20)
		x += 0.01f;
	else
		//return;
		value = -1;

	glutPostRedisplay();
	glutTimerFunc(40, pressKeys, ++value);
}

void DoDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);

	for (int i = 0; i < 6; i++)
	{
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_POLYGON);
		glVertex2f(0 - (i * 0.14), (x * a[i]) + 0.2 - (i * 0.1));
		glVertex2f(0 - (i * 0.14), (x * a[i]) + 0 - (i * 0.1));
		glVertex2f(0.6 - (i * 0.14), (x * a[i]) - 0.08 - (i * 0.1));
		glVertex2f(0.6 + 0.14 - (i * 0.14), (x * a[i]) - 0.08 + 0.1 - (i * 0.1));
		glVertex2f(0.6 + 0.14 - (i * 0.14), (x * a[i]) - 0.08 + 0.1 + 0.2 - (i * 0.1));
		glVertex2f(0.14 - (i * 0.14), (x * a[i]) + 0.2 + 0.1 - (i * 0.1));
		glEnd();

		glColor3f(0.0, 0.0, 0.0);
		glBegin(GL_LINE_LOOP);
		glVertex2f(0 - (i * 0.14), (x * a[i]) + 0.2 - (i * 0.1));
		glVertex2f(0 - (i * 0.14), (x * a[i]) + 0 - (i * 0.1));
		glVertex2f(0.6 - (i * 0.14), (x * a[i]) - 0.08 - (i * 0.1));
		glVertex2f(0.6 + 0.14 - (i * 0.14), (x * a[i]) - 0.08 + 0.1 - (i * 0.1));
		glVertex2f(0.6 + 0.14 - (i * 0.14), (x * a[i]) - 0.08 + 0.1 + 0.2 - (i * 0.1));
		glVertex2f(0.14 - (i * 0.14), (x * a[i]) + 0.2 + 0.1 - (i * 0.1));
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(0.6 - (i * 0.14), (x * a[i]) + 0.2 - 0.08 - (i * 0.1));
		glVertex2f(0 - (i * 0.14), (x * a[i]) + 0.2 - (i * 0.1));
		glVertex2f(0.6 - (i * 0.14), (x * a[i]) + 0.2 - 0.08 - (i * 0.1));
		glVertex2f(0.6 - (i * 0.14), (x * a[i]) - 0.08 - (i * 0.1));
		glVertex2f(0.6 - (i * 0.14), (x * a[i]) + 0.2 - 0.08 - (i * 0.1));
		glVertex2f(0.6 + 0.14 - (i * 0.14), (x * a[i]) - 0.08 + 0.1 + 0.2 - (i * 0.1));
		glEnd();
	}

	glutSwapBuffers();
}