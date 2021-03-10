#include<glut.h>
#include<GLU.H>

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 1.0, 0.0);		glVertex3f(-1.0, 0.5, 0.0);
	glVertex3f(-1.0, -0.5, 0.0);	glVertex3f(0.0, -1.0, 0.0);
	glVertex3f(1.0, -0.5, 0.0);		glVertex3f(1.0, 0.5, 0.0);
	glEnd();
	glFlush();

	GLUquadricObj* qobj = gluNewQuadric();
}
 
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("glOrtho");
	glClearColor(1.0, 1.0, 1.0, 1.0);
	
	// 전체 무대의 크기
	glOrtho(-2.0, 2.0, 2.0, -2.0, -2.0, 2.0);
	
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}