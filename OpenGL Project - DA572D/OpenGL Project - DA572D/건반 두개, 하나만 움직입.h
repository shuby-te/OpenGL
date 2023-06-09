/*
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0 + (0.14), 0.2 + (0.1));
	glVertex2f(0 + (0.14), 0 + (0.1));
	glVertex2f(0.6 + (0.14), -0.08 + (0.1));
	glVertex2f(0.6 + 0.14 + (0.14), -0.08 + 0.1 + (0.1));
	glVertex2f(0.6 + 0.14 + (0.14), -0.08 + 0.1 + 0.2 + (0.1));
	glVertex2f(0.14 + (0.14), 0.2 + 0.1 + (0.1));
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(0 + (0.14), 0.2 + (0.1));
	glVertex2f(0 + (0.14), 0 + (0.1));
	glVertex2f(0.6 + (0.14), -0.08 + (0.1));
	glVertex2f(0.6 + 0.14 + (0.14), -0.08 + 0.1 + (0.1));
	glVertex2f(0.6 + 0.14 + (0.14), -0.08 + 0.1 + 0.2 + (0.1));
	glVertex2f(0.14 + (0.14), 0.2 + 0.1 + (0.1));
	glEnd();


	glBegin(GL_LINES);
	glVertex2f(0.6 + (0.14), 0.2 - 0.08 + (0.1));
	glVertex2f(0 + (0.14), 0.2 + (0.1));
	glVertex2f(0.6 + (0.14), 0.2 - 0.08 + (0.1));
	glVertex2f(0.6 + (0.14), 0.08 + (0.1));
	glVertex2f(0.6 + (0.14), 0.2 - 0.08 + (0.1));
	glVertex2f(0.6 + 0.14 + (0.14), -0.08 + 0.1 + 0.2 + (0.1));
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0, x + 0.2);
	glVertex2f(0, x + 0);
	glVertex2f(0.6, x - 0.08);
	glVertex2f(0.6 + 0.14, x - 0.08 + 0.1);
	glVertex2f(0.6 + 0.14, x - 0.08 + 0.1 + 0.2);
	glVertex2f(0.14, x + 0.2 + 0.1);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(0, x + 0.2);
	glVertex2f(0, x + 0);
	glVertex2f(0.6, x - 0.08);
	glVertex2f(0.6 + 0.14, x - 0.08 + 0.1);
	glVertex2f(0.6 + 0.14, x - 0.08 + 0.1 + 0.2);
	glVertex2f(0.14, x + 0.2 + 0.1);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(0.6, x + 0.2 - 0.08);
	glVertex2f(0, x + 0.2);
	glVertex2f(0.6, x + 0.2 - 0.08);
	glVertex2f(0.6, x - 0.08);
	glVertex2f(0.6, x + 0.2 - 0.08);
	glVertex2f(0.6 + 0.14, x - 0.08 + 0.1 + 0.2);
	glEnd();
*/