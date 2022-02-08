#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void windowDivided()
{
glColor3ub (255,0,0);
glBegin(GL_LINES);
glVertex2i(400,0);
glVertex2i(400,600);
glVertex2i(0, 300);
glVertex2i(800, 300);
glEnd();
glFlush ();
}

void triangle()
{
glColor3ub (0,0,255);
glPointSize(100);
glBegin(GL_LINE_LOOP);
glVertex2i(320,400);
glVertex2i(200,520);
glVertex2i(80,400);
glEnd();
glFlush ();
}

void drawH()
{
glColor3ub (0,0,255);
glBegin(GL_LINE_STRIP);
glVertex2i(280,38);
glVertex2i(280,240);
glVertex2i(280,142);
glVertex2i(118,142);
glVertex2i(118,237);
glVertex2i(118,38);
glEnd();
glFlush ();
}

void drawK()
{
glColor3ub (0,0,255);
glBegin(GL_LINES);
glVertex2i(677,230);
glVertex2i(522,142);
glVertex2i(522,142);
glVertex2i(675,60);
glVertex2i(522,250);
glVertex2i(522,40);
glEnd();
glFlush ();
}

void Box1()
{
glColor3ub (0,0,255);
glBegin(GL_LINE_LOOP);
glVertex2i(596,427);
glVertex2i(596,543);
glVertex2i(446,543);
glVertex2i(446,427);
glEnd();
glFlush ();
}

void Box2()
{
glColor3ub (0,0,255);
glBegin(GL_LINE_LOOP);
glVertex2i(704,356);
glVertex2i(704,485);
glVertex2i(548,485);
glVertex2i(548,356);
glEnd();
glFlush();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    windowDivided();
    triangle();
    drawH();
    drawK();
    Box1();
    Box2();
}
void myInit(void)
{
glClearColor(255, 255, 255, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 800.0, 0.0, 600.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (800,600);
glutInitWindowPosition (100, 150);
glutCreateWindow("LabTask_01");
glutDisplayFunc(display);
myInit();
glutMainLoop();
}
