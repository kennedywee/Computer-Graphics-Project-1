void kirby() {

    //legs
    glColor3f(1.0, 0.0, 0.0); // red   
    circle(100, 100, 20);
    circle(200, 100, 20);

    //body
    glColor3f(0.67, 0.91, 0.91); //turquoise 
    circle(150, 150, 65);

    //eyes
    glColor3f(1.0, 1.0, 1.0); //white
    circle(125, 160, 15);
    circle(175, 160, 15);
}

void kirbyMove() {

    bool flag = true;
    if (kirby_move == 400) flag = false;
    if (flag == true) kirby_move += 1;

    glutPostRedisplay();
}

void movingKirby() {

    kirbyMove();
    glPushMatrix();
    glTranslatef(kirby_move, 0, 0);
    kirby();
    glPopMatrix();

}


