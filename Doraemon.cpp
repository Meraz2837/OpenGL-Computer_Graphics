#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)


    */

    int r = 100;
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
        glVertex2d(x + 200, y + 500);
        glVertex2d(x + 200, -y + 500);
        glVertex2d(-x + 200, y + 500);
        glVertex2d(-x + 200, -y + 500);
        glVertex2d(y + 200, x + 500);
        glVertex2d(y + 200, -x + 500);
        glVertex2d(-y + 200, x + 500);
        glVertex2d(-y + 200, -x + 500);

    }
    glEnd();


    r = 70;
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
        glBegin(GL_POLYGON);
        glVertex2d(x + 200, y + 450);
        glVertex2d(x + 200, -y + 450);
        glVertex2d(-x + 200, y + 450);
        glVertex2d(-x + 200, -y + 450);
        glVertex2d(y + 200, x + 450);
        glVertex2d(y + 200, -x + 450);
        glVertex2d(-y + 200, x + 450);
        glVertex2d(-y + 200, -x + 450);

    }
    glEnd();


    r = 15;
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
        glColor3d(100, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2d(x + 195, y + 510);
        glVertex2d(x + 195, -y + 510);
        glVertex2d(-x + 195, y + 510);
        glVertex2d(-x + 195, -y + 510);
        glVertex2d(y + 195, x + 510);
        glVertex2d(y + 195, -x + 510);
        glVertex2d(-y + 195, x + 510);
        glVertex2d(-y + 195, -x + 510);

    }
    glEnd();



    r = 25;
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
        glBegin(GL_POLYGON);
        glVertex2d(x + 170, y + 540);
        glVertex2d(x + 170, -y + 540);
        glVertex2d(-x + 170, y + 540);
        glVertex2d(-x + 170, -y + 540);
        glVertex2d(y + 170, x + 540);
        glVertex2d(y + 170, -x + 540);
        glVertex2d(-y + 170, x + 540);
        glVertex2d(-y + 170, -x + 540);

    }
    glEnd();


    r = 10;
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
        glColor3d(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2d(x + 170, y + 540);
        glVertex2d(x + 170, -y + 540);
        glVertex2d(-x + 170, y + 540);
        glVertex2d(-x + 170, -y + 540);
        glVertex2d(y + 170, x + 540);
        glVertex2d(y + 170, -x + 540);
        glVertex2d(-y + 170, x + 540);
        glVertex2d(-y + 170, -x + 540);

    }
    glEnd();

    r = 25;
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
        glBegin(GL_POLYGON);
        glVertex2d(x + 220, y + 540);
        glVertex2d(x + 220, -y + 540);
        glVertex2d(-x + 220, y + 540);
        glVertex2d(-x + 220, -y + 540);
        glVertex2d(y + 220, x + 540);
        glVertex2d(y + 220, -x + 540);
        glVertex2d(-y + 220, x + 540);
        glVertex2d(-y + 220, -x + 540);

    }
    glEnd();


    r = 10;
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
        glColor3d(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2d(x + 220, y + 540);
        glVertex2d(x + 220, -y + 540);
        glVertex2d(-x + 220, y + 540);
        glVertex2d(-x + 220, -y + 540);
        glVertex2d(y + 220, x + 540);
        glVertex2d(y + 220, -x + 540);
        glVertex2d(-y + 220, x + 540);
        glVertex2d(-y + 220, -x + 540);

    }
    glEnd();


    glColor3d(0, 0, 100);
    glBegin(GL_POLYGON);
    glVertex2i(120, 270);
    glVertex2i(270, 270);
    glVertex2i(270, 420);
    glVertex2i(120, 420);
    glEnd();

    glColor3d(0, 0, 100);
    glBegin(GL_POLYGON);
    glVertex2i(270, 420);
    glVertex2i(270, 390);
    glVertex2i(310, 430);
    glEnd();

    glColor3d(0, 0, 100);
    glBegin(GL_POLYGON);
    glVertex2i(120, 420);
    glVertex2i(120, 390);
    glVertex2i(90, 430);
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
        glBegin(GL_POLYGON);
        glVertex2d(x + 310, y + 430);
        glVertex2d(x + 310, -y + 430);
        glVertex2d(-x + 310, y + 430);
        glVertex2d(-x + 310, -y + 430);
        glVertex2d(y + 310, x + 430);
        glVertex2d(y + 310, -x + 430);
        glVertex2d(-y + 310, x + 430);
        glVertex2d(-y + 310, -x + 430);

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
        glBegin(GL_POLYGON);
        glVertex2d(x + 90, y + 430);
        glVertex2d(x + 90, -y + 430);
        glVertex2d(-x + 90, y + 430);
        glVertex2d(-x + 90, -y + 430);
        glVertex2d(y + 90, x + 430);
        glVertex2d(y + 90, -x + 430);
        glVertex2d(-y + 90, x + 430);
        glVertex2d(-y + 90, -x + 430);

    }
    glEnd();

    r = 40;
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
        glBegin(GL_POLYGON);
        glVertex2d(x + 250, y + 260);
        glVertex2d(x + 250, -y + 260);
        glVertex2d(-x + 250, y + 260);
        glVertex2d(-x + 250, -y + 260);
        glVertex2d(y + 250, x + 260);
        glVertex2d(y + 250, -x + 260);
        glVertex2d(-y + 250, x + 260);
        glVertex2d(-y + 250, -x + 260);

    }
    glEnd();

    r = 40;
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
        glBegin(GL_POLYGON);
        glVertex2d(x + 150, y + 260);
        glVertex2d(x + 150, -y + 260);
        glVertex2d(-x + 150, y + 260);
        glVertex2d(-x + 150, -y + 260);
        glVertex2d(y + 150, x + 260);
        glVertex2d(y + 150, -x + 260);
        glVertex2d(-y + 150, x + 260);
        glVertex2d(-y + 150, -x + 260);

    }
    glEnd();

    r = 65;
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
        glBegin(GL_POLYGON);
        glVertex2d(x + 195, y + 360);
        glVertex2d(x + 195, -y + 360);
        glVertex2d(-x + 195, y + 360);
        glVertex2d(-x + 195, -y + 360);
        glVertex2d(y + 195, x + 360);
        glVertex2d(y + 195, -x + 360);
        glVertex2d(-y + 195, x + 360);
        glVertex2d(-y + 195, -x + 360);

    }
    glEnd();


    r = 65;
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
        glColor3d(0, 0, 0);
        glBegin(GL_POINTS);
        glVertex2d(x + 200, -y + 500);
        glVertex2d(-x + 200, -y + 500);

    }
    glEnd();




    glColor3d(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(220, 500);
    glVertex2i(280, 520);
    glEnd();


    glColor3d(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(220, 490);
    glVertex2i(280, 490);
    glEnd();

    glColor3d(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(220, 480);
    glVertex2i(280, 460);
    glEnd();

    glColor3d(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(170, 500);
    glVertex2i(120, 520);
    glEnd();


    glColor3d(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(170, 490);
    glVertex2i(120, 490);
    glEnd();

    glColor3d(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(170, 480);
    glVertex2i(120, 460);
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
    gluOrtho2D(0, 650, 0, 650);
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
