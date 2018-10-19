#include<windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>


/* Program entry point */
void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    //PENTAGON
    /*glVertex2f(0.90 , 0.50);
        glVertex2f(0.50 , 0.90);
        glVertex2f(0.10 , 0.50);
        glVertex2f(0.10 , 0.10);
        glVertex2f(0.90 , 0.10);*/
        glVertex2f(-0.90 , 0.50);
        glVertex2f(-0.70 , 0.90);
        glVertex2f(-0.50 , 0.50);
        glVertex2f(-0.50 , 0.10);
        glVertex2f(-0.90 , 0.10);
    glEnd();
    //glutSwapBuffers();

    //HEXAGON
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f(-0.40 , 0.50);
        glVertex2f(-0.25 , 0.90);
        glVertex2f(0.05 , 0.90);
        glVertex2f(0.20 , 0.50);
        glVertex2f(0.05 , 0.10);
        glVertex2f(-0.25 , 0.10);
    glEnd();

    //HEPTAGON
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(0.30 , 0.40);
        glVertex2f(0.35 , 0.70);
        glVertex2f(0.60 , 0.90);
        glVertex2f(0.85 , 0.70);
        glVertex2f(0.90 , 0.40);
        glVertex2f(0.75 , 0.10);
        glVertex2f(0.45 , 0.10);
    glEnd();

    //OCTAGON
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f(-0.90 , -0.65);
        glVertex2f(-0.90 , -0.40);
        glVertex2f(-0.75 , -0.15);
        glVertex2f(-0.55 , -0.15);
        glVertex2f(-0.40 , -0.40);
        glVertex2f(-0.40 , -0.65);
        glVertex2f(-0.55 , -0.90);
        glVertex2f(-0.75 , -0.90);
    glEnd();

    //NONAGON
    glColor3f(1.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(-0.30 , -0.75);
        glVertex2f(-0.35 , -0.50);
        glVertex2f(-0.28 , -0.28);
        glVertex2f(-0.05 , -0.10);
        glVertex2f(0.18 , -0.28);
        glVertex2f(0.25 , -0.50);
        glVertex2f(0.20 , -0.75);
        glVertex2f(0.05 , -0.90);
        glVertex2f(-0.15 , -0.90);
    glEnd();



    //DECAGON

    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(0.35 , -0.75);
        glVertex2f(0.30 , -0.50);
        glVertex2f(0.35 , -0.25);
        glVertex2f(0.50 , -0.10);
        glVertex2f(0.70 , -0.10);
        glVertex2f(0.85 , -0.25);
        glVertex2f(0.90 , -0.50);
        glVertex2f(0.85 , -0.75);
        glVertex2f(0.70 , -0.90);
        glVertex2f(0.50 , -0.90);
    glEnd();
    glutSwapBuffers();
}


void myInit(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glShadeModel(GL_FLAT);
}
int main(int argc, char *argv[])
{
 glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Shapes");
    myInit();
    glutDisplayFunc(myDisplay);
    //glutDisplayFunc(myGDisplay);
    glutMainLoop();
    return EXIT_SUCCESS;
}
