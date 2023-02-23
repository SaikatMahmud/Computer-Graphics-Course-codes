#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void chessBoard()
{
for(int x=0; x<=512; x+=128)
{
    for(int y=0; y<=512; y+=128)
    {
        glColor3ub (0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(x,y);
        glVertex2i(x+64,y);
        glVertex2i(x+64,y+64);
        glVertex2i(x,y+64);

        glColor3ub(0,0,0);
        glVertex2i(x+64,y+64);
        glVertex2i(x+128,y+64);
        glVertex2i(x+128,y+128);
        glVertex2i(x+64,y+128);
        glEnd();
        glFlush();
    }
}

}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    chessBoard();
}

void myInit(void)
{
glClearColor(255, 255, 255, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 512.0, 0.0, 512.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (512,512);
glutInitWindowPosition (100, 150);
glutCreateWindow("19-41556-3");
glutDisplayFunc(display);
myInit();
glutMainLoop();
}
