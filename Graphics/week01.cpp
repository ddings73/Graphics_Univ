#include<glut.h>



void MyDisplay() {
	
	// ������ �������� ���� ������ ĥ��
	glClear(GL_COLOR_BUFFER_BIT);

	// ���� ���λ��� RGB�� ���� ĥ��
	glColor3f(0.0, 1.0, 0.0); // RGB
	

	/*
	Begin to End()
	������ �׸��� �κ�
	*/
	glBegin(GL_POLYGON);
		glVertex3f(-0.5, -0.5, 0.0); // Left Down
		glVertex3f(0.5, -0.5, 0.0); // Right Down
		glVertex3f(0.5, 0.5, 0.0); // Right Up
		glVertex3f(-0.5, 0.5, 0.0); // Left Up
	glEnd();


	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.7, 0.5, 0.0); // Left Down
	glVertex3f(0.7, 0.5, 0.0);
	glVertex3f(0.0, 1.0, 0.0);
	glEnd();
	
	glFlush();

}

int main(int argc, char** argv) {
	
	// �����ϰڴٴ� �ǹ�
	glutInit(&argc, argv);
	
	// �����Ǵ� â ũ��
	glutInitWindowSize(500, 500);
	
	// ���� â ��ġ ( ���� �� ����. )
	glutInitWindowPosition(0, 0);
	
	// â �̸� ����
	glutCreateWindow("�׸� �׸���");
	
	// ���� �� ( R G B A ) ����
	glClearColor(0.5, 0.5, 0.5, 1.0);

	// �������� MyDiplay �Լ��� ���� ĥ���� ���� ��û
	// �ܼ� ȣ���ϸ� ����ȴ�. ex : MyDisplay();
	glutDisplayFunc(MyDisplay);
	

	glutMainLoop();

	return 0;
}