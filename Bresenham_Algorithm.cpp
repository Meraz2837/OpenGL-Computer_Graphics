#include <GL/gl.h> 
#include <GL/glut.h> 
#include<iostream>

void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    int x0 = 28, y0 = 40, x1 = 39, y1 = 46;

    int dx = x1 - x0;
    int dy = y1 - y0;
    int p = 2 * dy - dx;


    for (int i = 0; i < dx; i++)
    {
        if (p < 0) {
            x0 = x0 + 1;
            p = p + 2 * dy;
        }
        else {
            x0 = x0 + 1;
            y0 = y0 + 1;
            p = p + 2 * dy - 2 * dx;

        }

        glColor3d(254, 255, 0);
        glBegin(GL_POINTS);
        glVertex2i(x0, y0);
        printf("%d, %d", x0, y0);
    }

    glEnd();

    /* don't wait!
    * start processing buffered OpenGL routines
    */
    glFlush();
}
void init(void)
{
    /* select clearing (background) color */
    glClearColor(0.0, 0.0, 1.0, 0.0);
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
    glutCreateWindow("192-15-2837");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}