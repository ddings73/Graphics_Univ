#include<glut.h>



void MyDisplay() {

	// 지정된 바탕색에 따라 바탕을 칠함
	glClear(GL_COLOR_BUFFER_BIT);

	// 도형 내부색을 RGB에 따라 칠함
	glColor3f(0.0, 1.0, 0.0); // RGB


	/*
	Begin to End()
	도형을 그리는 부분
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

	// 시작하겠다는 의미
	glutInit(&argc, argv);

	// 생성되는 창 크기
	glutInitWindowSize(500, 500);

	// 시작 창 위치 ( 왼쪽 위 기준. )
	glutInitWindowPosition(0, 0);

	// 창 이름 설정
	glutCreateWindow("네모 그리기");

	// 바탕 색 ( R G B A ) 지정
	glClearColor(0.5, 0.5, 0.5, 1.0);

	// 바탕색을 MyDiplay 함수에 따라 칠해줄 것을 요청
	// 단순 호출하면 종료된다. ex : MyDisplay();
	glutDisplayFunc(MyDisplay);


	glutMainLoop();

	return 0;
}