#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    glColor3ub(0, 255, 0);
    glBegin(GL_POLYGON);
    glVertex2d(500, 600);
    glVertex2d(600, 550);
    glVertex2d(500, 500);
    glVertex2d(450, 400);
    glVertex2d(400, 500);
    glVertex2d(300, 550);
    glVertex2d(400, 600);
    glVertex2d(450, 700);

    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(650, 450);
    glVertex2d(750, 400);
    glVertex2d(650, 350);
    glVertex2d(600, 250);
    glVertex2d(550, 350);
    glVertex2d(450, 400);
    glVertex2d(550, 450);
    glVertex2d(600, 550);


    glEnd();

    
    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(350, 450);
    glVertex2d(450, 400);
    glVertex2d(350, 350);
    glVertex2d(300, 250);
    glVertex2d(250, 350);
    glVertex2d(150, 400);
    glVertex2d(250, 450);
    glVertex2d(300, 550);
    glEnd();

    glColor3ub(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2d(500, 300);
    glVertex2d(600, 250);
    glVertex2d(500, 200);
    glVertex2d(450, 100);
    glVertex2d(400, 200);
    glVertex2d(300, 250);
    glVertex2d(400, 300);
    glVertex2d(450, 400);

    glEnd();





    /* don't wait!
    * start processing buffered OpenGL routines
    */
    glFlush();
}
void init(void)
{
    /* select clearing (background) color */
    glClearColor(0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 1000, 0, 1000);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("hello");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}