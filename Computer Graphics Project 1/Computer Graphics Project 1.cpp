#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <gl\GL.h>
#include <gl\GLU.h>
#include <gl\glut.h>
#include <math.h>
#include <mmsystem.h>
#include <iostream>
#include <string.h>

// Headers
#include "superglobal.h"
#include "functions.h"
#include "man.h"
#include "kirby.h" //main character
 
#include "scene1.h" //background
#include "scene1_animation.h" //



void Timer(int value) {
    if (value)glutPostRedisplay();
    glutTimerFunc(300, Timer, value);
}



void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    ++frame;
    printf("%d\n", frame);

    scene1();
    
    movingKirby();

    //human();

    

    glFlush();
    glutSwapBuffers();
}



void idle() {
    
}


void initGL() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT);
    //gluOrtho2D(0, 600, 0, 500);
    glMatrixMode(GL_MODELVIEW);

    glPointSize(10.0);
    glLineWidth(5.0);
}

void Visibility(GLint state) {
    switch (state) {
    case GLUT_VISIBLE:
        Timer(1);
        break;
    case GLUT_NOT_VISIBLE:
        Timer(0);
        break;
    default:
        break;
    }
}

int main(int argc, char** argv) {
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInit(&argc, argv);
    glutInitWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    glutCreateWindow("Danger of Pandemic");
    initGL();

    glutDisplayFunc(display);
    glutTimerFunc(0, Timer, 0);
    glutIdleFunc(idle);
    glutVisibilityFunc(Visibility);

    glutMainLoop();

}