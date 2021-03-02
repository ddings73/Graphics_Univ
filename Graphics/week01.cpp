#include<glut.h>

void MyDisplay() {
	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 1.0, 0.0); // RGB
	
	glBegin(GL_POLYGON);
	glVertex3f(-1.0, -0.5, 0.0); // Left Down
	glVertex3f(1.0, -0.5, 0.0); // Right Down
	glVertex3f(5.0, 1.0, 0.0); // Right Up
	glVertex3f(0.0, 1.0, 0.0); // Left Up
	glEnd();
	
	glFlush();

}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	// 시작하겠다는 의미

	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 50);

	glutCreateWindow("네모 그리기");
	glClearColor(0.5, 0.5, 0.5, 1.0);
	glutDisplayFunc(MyDisplay);
	glutMainLoop();

	return 0;
}