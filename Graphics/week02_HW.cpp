#include<glut.h>
#include<math.h>
#define PI 3.1415

void Face() {
	GLfloat Angle;

	glBegin(GL_LINE_LOOP);
	for (Angle = 0.0; Angle <= 2.0 * PI; Angle += PI / 20.0) {
		glVertex3f(0.5 * cos(Angle), 0.35 * sin(Angle), 0);
	}

	glEnd();
	glFlush();
}

void Eyes() {
	GLfloat Angle;

	glBegin(GL_LINE_LOOP);
	for (Angle = 0.0; Angle <= 2.0 * PI; Angle += PI / 20.0) {
		glVertex3f(0.12 * cos(Angle) - 0.17, 0.17 * sin(Angle) + 0.15, 0);
	}
	glEnd();
	glFlush();
	
}

void Mouth() {
	glBegin(GL_LINE_STRIP);
	glVertex3f(0.4, -0.1, 0);
	glVertex3f(0.05, -0.1, 0);
	glVertex3f(0.2, -0.23, 0);
	glVertex3f(0.3, -0.1, 0);
	glEnd();
	glFlush();
}
void MyDisplay() {
	GLfloat size[2];
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);

	glGetFloatv(GL_POINT_SIZE_RANGE, size);
	glPointSize(size[0] * 4);

	glLineWidth(4);

	Face();
	Eyes();
	Mouth();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(1024, 1024);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("ŸÓŸÓÀÌ");
	glClearColor(1.0, 1.0, 1.0, 1.0);
	
	glutDisplayFunc(MyDisplay);

	glutMainLoop();
	return 0;
}