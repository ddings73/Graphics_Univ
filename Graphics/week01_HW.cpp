#include<glut.h>



void drawing(double x, double y, double size, double R, double G, double B) {

	double dist = size / 3;

	glColor3f(R, G, B);

	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
		glVertex3f(x, y, 0);
		glVertex3f(x + dist, y - 0.75 * dist, 0.0);
		glVertex3f(x + 0.5 * dist, y - 2 * dist, 0.0);
		glVertex3f(x + 1.5 * dist, y - 1.25 * dist, 0.0);
		glVertex3f(x + 2.5 * dist, y - 2 * dist, 0.0);
		glVertex3f(x + 2 * dist, y - 0.75 * dist, 0.0);
		glVertex3f(x + 3 * dist, y, 0.0);
		glVertex3f(x + 1.85 * dist, y, 0.0);
		glVertex3f(x + 1.5 * dist, y + 1.25 * dist, 0.0);
		glVertex3f(x + 1.15 * dist, y, 0.0);
	glEnd();

	glFlush();
}

void Small_Yellow_Star() {
	drawing(-1, 0, 0.5, 1.0, 1.0, 0.0);

}

void Big_Pink_Star() {
	drawing(-0.25, 0.5, 1, 1.0, 0.2, 0.6);
}

void Stars() {

	glClear(GL_COLOR_BUFFER_BIT);

	Small_Yellow_Star();
	Big_Pink_Star();

}

int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitWindowSize(1024, 1024);
	glutInitWindowPosition(0, 0);

	glutCreateWindow("별 두 개 그리기");

	glClearColor(0.5, 0.5, 0.5, 1.0);
	glutDisplayFunc(Stars);
	glutMainLoop();

	return 0;
}