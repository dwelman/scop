#include <scop.h>

//Initializes 3D rendering
void initRendering()
{
	//Makes 3D drawing work when something is in front of something else
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glClearColor(0.7f, .9f, 1.0f, 1.0f);
}

int main(int argc, char** argv)
{
	/*vertices.push_back(-1.0f);
	vertices.push_back(1.0f);
	vertices.push_back(-5.0f);

	vertices.push_back(-1.0f);
	vertices.push_back(-1.0f);
	vertices.push_back(-5.0f);

	vertices.push_back(1.0f);
	vertices.push_back(1.0f);
	vertices.push_back(-5.0f);

	vertices.push_back(1.0f);
	vertices.push_back(1.0f);
	vertices.push_back(-5.0f);

	vertices.push_back(-1.0f);
	vertices.push_back(-1.0f);
	vertices.push_back(-5.0f);

	vertices.push_back(1.0f);
	vertices.push_back(-1.0f);
	vertices.push_back(-5.0f);

	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(400, 400); //Set the window size
	
	//Create the window
	glutCreateWindow("Basic Shapes - videotutorialsrock.com");
	initRendering(); //Initialize rendering
	
	//Set handler functions for drawing, keypresses, and window resizes
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);
	
	glutTimerFunc(25, update, 0);
	glutMainLoop(); //Start the main loop.  glutMainLoop doesn't return.
	return 0; //This line is never reached*/
	return (0);
}