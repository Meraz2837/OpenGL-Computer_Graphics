#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    int r, g, b, black = true;

    int x = 0, y = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (black == true) {
                r = 0;
                g = 0;
                b = 0;
            }
            else {
                r = 255;
                g = 255;
                b = 255;
            }
            black = !black;
            glColor3ub(r, g, b);
            glBegin(GL_POLYGON);
            glVertex2d(x, y);
            glVertex2d(x, y + 100);
            glVertex2d(x + 100, y + 100);
            glVertex2d(x + 100, y);
            glEnd();
            x = x + 100;
        }
        black = !black;
        x = 0; y = y + 100;
    }





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
    gluOrtho2D(0, 600, 0, 600);
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
