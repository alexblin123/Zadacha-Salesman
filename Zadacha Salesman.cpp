﻿#include "Graph.h"
#include "GL/glut.h"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <sstream>


int main(int argc, char* argv[]) {

	system("chcp 1251 > Null");
	glutInit(&argc, argv);

	graph = makeGraph();
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

	glutInitWindowSize(1350, 730);
	glutCreateWindow("MyGraph");

	WinW = glutGet(GLUT_WINDOW_WIDTH);
	WinH = glutGet(GLUT_WINDOW_HEIGHT);

	glutDisplayFunc(display);
	glutReshapeFunc(reshape);

	glutMouseFunc(mouseClick);
	glutMainLoop();

	return 0;
}