#include <mod1.h>

void	update(int value)
{
	angle += 2.0f;
	if (angle > 360)
		angle -= 360.0f;
	glutPostRedisplay();
	glutTimerFunc(25, update, 0);
}

void drawScene()
{
	//Clear information from last draw

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	//glRotatef(angle, 1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLES);
	for (int i = 0; i < vertices.size(); i += 9)
	{
			glVertex3f(vertices.at(i), vertices.at(i + 1), vertices.at(i + 2));
			glVertex3f(vertices.at(i + 3), vertices.at(i + 4), vertices.at(i + 5));
			glVertex3f(vertices.at(i + 6), vertices.at(i + 7), vertices.at(i + 8));
	}
	glEnd();

	/*glTranslatef(0.0f, 0.0f, -5.0f);
	
	glPushMatrix();
	glTranslatef(0.0f, -1.0f, 0.0f);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	//Trapezoid
	glColor3f(0.5f, 0.0f, 0.8f);
	glVertex3f(-0.7f, -0.5f, 0.0f);

	glColor3f(0.5f, 0.9f, 0.8f);
	glVertex3f(0.7f, -0.5f, 0.0f);

	glColor3f(0.1f, 0.0f, 0.2f);
	glVertex3f(0.4f, 0.5f, 0.0f);

	glColor3f(0.2f, 0.1f, 0.9f);
	glVertex3f(-0.4f, 0.5f, 0.0f);
	
	glEnd(); //End quadrilateral coordinates
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.0f, 1.0f, 0.0f);
	glRotatef(angle, 0.0f, 1.0f, 0.0f);
	glScalef(0.7f, 0.7f, 0.7f);
	
	glBegin(GL_TRIANGLES); //Begin triangle coordinates
	
	//Pentagon
	glColor3f(0.0f, 0.75f, 0.0f);
	glVertex3f(-0.5f, -0.5f, 0.0f);
	glVertex3f(0.5f, -0.5f, 0.0f);
	glVertex3f(-0.5f, 0.0f, 0.0f);
	
	glVertex3f(-0.5f, 0.0f, 0.0f);
	glVertex3f(0.5f, -0.5f, 0.0f);
	glVertex3f(0.5f, 0.0f, 0.0f);
	
	glVertex3f(-0.5f, 0.0f, 0.0f);
	glVertex3f(0.5f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.5f, 0.0f);

	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-1.0f, 1.0f, 0.0f);
	glRotatef(angle, 1.0f, 2.0f, 3.0f);
	glBegin(GL_TRIANGLES);
	//Triangle
	glColor3f(1.0f, 0.5f, 0.0f);
	glVertex3f(0.5f, -0.5f, 0.0f);

	glColor3f(0.1f, 0.0f, 0.9f);
	glVertex3f(0.0f, 0.5f, 0.0f);

	glColor3f(0.5f, 0.2f, 0.7f);
	glVertex3f(-0.5f, -0.5f, 0.0f);
	
	glEnd(); //End triangle coordinates
	glPopMatrix();*/
	
	glutSwapBuffers(); //Send the 3D scene to the screen
}