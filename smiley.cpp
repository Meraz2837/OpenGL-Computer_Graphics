#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)


    */


    int r = 150;
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
        glColor3d(255, 255, 255);
        glBegin(GL_POINTS);
        glVertex2d(x + 500, y + 800);
        glVertex2d(x + 500, -y + 800);
        glVertex2d(-x + 500, y + 800);
        glVertex2d(-x + 500, -y + 800);
        glVertex2d(y + 500, x + 800);
        glVertex2d(y + 500, -x + 800);
        glVertex2d(-y + 500, x + 800);
        glVertex2d(-y + 500, -x + 800);
    }
    glEnd();



    r = 100;
    p = 1 - r;
    x = 0;
    y = r;
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
        glColor3d(255, 255, 255);
        glBegin(GL_POINTS);
        glVertex2d(x + 500, -y + 800);
        glVertex2d(-x + 500, -y + 800);

    }
    glEnd();



    r = 20;
    p = 1 - r;
    x = 0;
    y = r;
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
        glColor3d(255, 255, 255);
        glBegin(GL_POINTS);
        glVertex2d(x + 450, y + 850);
        glVertex2d(x + 450, -y + 850);
        glVertex2d(-x + 450, y + 850);
        glVertex2d(-x + 450, -y + 850);
        glVertex2d(y + 450, x + 850);
        glVertex2d(y + 450, -x + 850);
        glVertex2d(-y + 450, x + 850);
        glVertex2d(-y + 450, -x + 850);

    }
    glEnd();

    r = 20;
    p = 1 - r;
    x = 0;
    y = r;
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
        glColor3d(255, 255, 255);
        glBegin(GL_POINTS);
        glVertex2d(x + 550, y + 850);
        glVertex2d(x + 550, -y + 850);
        glVertex2d(-x + 550, y + 850);
        glVertex2d(-x + 550, -y + 850);
        glVertex2d(y + 550, x + 850);
        glVertex2d(y + 550, -x + 850);
        glVertex2d(-y + 550, x + 850);
        glVertex2d(-y + 550, -x + 850);

    }
    glEnd();



    glColor3d(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2i(500, 650);
    glVertex2i(500, 400);
    glEnd();

    glColor3d(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2i(500, 400);
    glVertex2i(700, 200);
    glEnd();

    glColor3d(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2i(500, 400);
    glVertex2i(300, 200);
    glEnd();

    glColor3d(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2i(500, 550);
    glVertex2i(700, 590);
    glEnd();

    glColor3d(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2i(500, 550);
    glVertex2i(300, 590);
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
