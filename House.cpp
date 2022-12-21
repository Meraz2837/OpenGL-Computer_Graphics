#include <GL/gl.h> 
#include <GL/glut.h> 
void display(void) 
{ 
    /* clear all pixels */ 
    glClear(GL_COLOR_BUFFER_BIT); 
    /* draw white polygon (rectangle) with corners at 
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0) 
    */ 
    glColor3ub(255, 255, 255); 
    glBegin(GL_POLYGON); 
    glVertex2d(200, 100); 
    glVertex2d(600, 100); 
    glVertex2d(600, 500); 
    glVertex2d(200, 500); 
    glEnd(); 
 
    glColor3ub(255, 150, 255); 
    glBegin(GL_TRIANGLES); 
    glVertex2d(200, 500); 
    glVertex2d(600, 500); 
    glVertex2d(400, 700); 
    glEnd(); 
 
    glColor3ub(150, 150, 255); 
    glBegin(GL_POLYGON); 
    glVertex2d(300, 100); 
    glVertex2d(500, 100); 
    glVertex2d(500, 400); 
    glVertex2d(300, 400); 
    glEnd(); 
 
    glColor3ub(150, 150, 150); 
    glBegin(GL_POLYGON); 
    glVertex2d(225, 250); 
    glVertex2d(275, 250); 
    glVertex2d(275, 300); 
    glVertex2d(225, 300); 
    glEnd(); 
 
    glColor3ub(150, 150, 150); 
    glBegin(GL_POLYGON); 
    glVertex2d(525, 250); 
    glVertex2d(575, 250); 
    glVertex2d(575, 300); 
    glVertex2d(525, 300); 
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