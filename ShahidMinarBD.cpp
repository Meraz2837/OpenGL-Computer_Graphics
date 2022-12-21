#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    glEnd();
    int r = 250;
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
        glColor3d(255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2d(x + 750, y + 430);
        glVertex2d(x + 750, -y + 430);
        glVertex2d(-x + 750, y + 430);
        glVertex2d(-x + 750, -y + 430);
        glVertex2d(y + 750, x + 430);
        glVertex2d(y + 750, -x + 430);
        glVertex2d(-y + 750, x + 430);
        glVertex2d(-y + 750, -x + 430);
    }
    glEnd();
    glColor3d(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2i(100, 400);
    glVertex2i(200, 400);
    glVertex2i(200, 0);
    glVertex2i(100, 0);
    glEnd();
    glColor3d(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2i(300, 600);
    glVertex2i(400, 600);
    glVertex2i(400, 0);
    glVertex2i(300, 0);
    glEnd();
    glColor3d(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2i(500, 700);
    glVertex2i(850, 1000);
    glVertex2i(950, 1000);
    glVertex2i(600, 700);
    glVertex2i(600, 0);
    glVertex2i(500, 0);
    glEnd();
    glColor3d(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2i(700, 700);
    glVertex2i(1050, 1000);
    glVertex2i(1150, 1000);
    glVertex2i(800, 700);
    glVertex2i(800, 0);
    glVertex2i(700, 0);
    glEnd();
    glColor3d(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2i(900, 700);
    glVertex2i(1250, 1000);
    glVertex2i(1350, 1000);
    glVertex2i(1000, 700);
    glVertex2i(1000, 0);
    glVertex2i(900, 0);
    glEnd();
    glColor3d(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2i(1100, 600);
    glVertex2i(1200, 600);
    glVertex2i(1200, 0);
    glVertex2i(1100, 0);
    glEnd();
    glColor3d(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2i(1300, 400);
    glVertex2i(1400, 400);
    glVertex2i(1400, 0);
    glVertex2i(1300, 0);
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
    gluOrtho2D(0, 1500, 0, 1500);
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