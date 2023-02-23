#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

/* void borderBox()
{
glColor3ub (255,255,0);
glBegin(GL_POLYGON);
glVertex2i(244,519);
glVertex2i(548,518);
glVertex2i(674,394);
glVertex2i(674,269);
glVertex2i(548,145);
glVertex2i(244,144);
glVertex2i(118,269);
glVertex2i(119,394);

glEnd();
glFlush ();
} */

void border()
{
glColor3ub (255,0,0);
glBegin(GL_LINE_LOOP);
glVertex2i(244,519);
glVertex2i(548,518);
glVertex2i(674,394);
glVertex2i(674,269);
glVertex2i(548,145);
glVertex2i(244,144);
glVertex2i(118,269);
glVertex2i(119,394);

glEnd();
glFlush ();
}


void batman()
{
glColor3ub (0,0,0);
glBegin(GL_LINE_LOOP);

glVertex2i(296,458);
glVertex2i(244,460);
glVertex2i(148,376);
glVertex2i(148,292);
glVertex2i(244,199);
glVertex2i(294,185);
glVertex2i(330,236);
glVertex2i(355,236);
glVertex2i(368,202);
glVertex2i(395,181);
glVertex2i(422,196);
glVertex2i(435,234);
glVertex2i(456,234);
glVertex2i(491,181);
glVertex2i(511,182);
glVertex2i(635,292);
glVertex2i(635,376);
glVertex2i(547,465);
glVertex2i(496,458);
glVertex2i(510,447);
glVertex2i(500,400);
glVertex2i(474,375);
glVertex2i(459,393);
glVertex2i(439,396);
glVertex2i(439,482);
glVertex2i(421,468);
glVertex2i(369,468);
glVertex2i(353,482);
glVertex2i(353,396);
glVertex2i(332,393);
glVertex2i(314,375);
glVertex2i(300,400);
glVertex2i(281,447);
//glVertex2i(296,458);

glEnd();
glFlush ();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    //borderBox();
    border();
    batman();
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
glutCreateWindow("19-41556-3");
glutDisplayFunc(display);
myInit();
glutMainLoop();
}
