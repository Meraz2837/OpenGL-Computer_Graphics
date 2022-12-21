#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)


    */

    glColor3d(0, 100, 0);
    glBegin(GL_POLYGON);
    glVertex2i(50, 200);
    glVertex2i(600, 200);
    glVertex2i(600, 450);
    glVertex2i(50, 450);
    glEnd();

    glColor3d(255, 255, 0);
    glBegin(GL_POLYGON);
    glVertex2i(150, 325);
    glVertex2i(300, 225);
    glVertex2i(450, 325);
    glVertex2i(300, 425);
    glEnd();



    int r = 60;
    int p = 1 - r;
    int x = 0;
    int y = r;
    while (x <= y)
    {
        if (p < 0) {
            x = x + 1;
            p = p + 2 * x + 1;
        }
        else {
            x = x + 1;
            y = y - 1;
            p = p + 2 * x + 1 - 2 * y;
        }
        glColor3d(0, 0, 100);
        glBegin(GL_POLYGON);
        glVertex2d(x + 300, y + 325);
        glVertex2d(x + 300, -y + 325);
        glVertex2d(-x + 300, y + 325);
        glVertex2d(-x + 300, -y + 325);
        glVertex2d(y + 300, x + 325);
        glVertex2d(y + 300, -x + 325);
        glVertex2d(-y + 300, x + 325);
        glVertex2d(-y + 300, -x + 325);

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
    glClearColor(0.0, 0.0, 0.1, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 700, 0, 700);
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
