#include <GL/gl.h>
#include <GL/glut.h>
float x = 0;
float y = 0;
void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    if (x < 900) {
        x += 0.01;
    }
    else {
        x = 0;
    }
    glColor3f(0.0, 128.0, 128.0);
    glBegin(GL_POLYGON);
    glVertex2d(x, 150);
    glVertex2d(x + 150, 150);
    glVertex2d(x + 150, 20);
    glVertex2d(x, 20);
    glEnd();
    if (y < 900) {
        y += 0.01;
    }
    else {
        y = 0;
    }
    glColor3f(0.128, 128.0, 128.0);
    glBegin(GL_POLYGON);
    glVertex2d(0, y + 150);
    glVertex2d(150, y + 150);
    glVertex2d(150, y + 20);
    glVertex2d(0, y + 20);
    glEnd();
    glutPostRedisplay();
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
    gluOrtho2D(0, 900, 0, 900);
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
    glutCreateWindow("192-15-2837");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
