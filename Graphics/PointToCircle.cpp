#include<glut.h>
#include<math.h>
#define PI 3.1415

void MyDisplay() {
	GLfloat size[2], Angle;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	glGetFloatv(GL_POINT_SIZE_RANGE, size);
	glPointSize(size[0] * 4);
	glBegin(GL_POINTS);
	for (Angle = 1.5*PI; Angle <= 2.0*PI; Angle += PI / 20.0) {
		glVertex3f(0.5 * cos(Angle), 0.5 * sin(Angle), 0.0);
		
	}

	glEnd();
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Points to Circle");

	glClearColor(1.0, 1.0, 1.0, 1.0);
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}