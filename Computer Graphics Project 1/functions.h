void circle(int x, int y, int r)
{
    float th;
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        th = i * (3.1416 / 180);
        glVertex2f(x + r * cos(th), y + r * sin(th));
    }

    glEnd();

}

void halfCircle(int x, int y, int r)
{
    float th;
    glBegin(GL_POLYGON);
    for (int i = 0; i < 180; i++)
    {
        th = i * (3.1416 / 180);
        glVertex2f(x + r * cos(th), y + r * sin(th));
    }

    glEnd();

}

void halfCircleInverse(int x, int y, int r)
{
    float th;
    glBegin(GL_POLYGON);
    for (int i = 180; i < 360; i++)
    {
        th = i * (3.1416 / 180);
        glVertex2f(x + r * cos(th), y + r * sin(th));
    }

    glEnd();

}

void rectangle(int x, int y, int w, int h) {
    glBegin(GL_POLYGON);
    glVertex2i(x, y);
    glVertex2i(x + w, y);
    glVertex2i(x + w, y + h);
    glVertex2i(x, y + h);
    glEnd();
}

void renderSpacedBitmapString(float x, float y, void* font, const char* string) {
    const char* c;
    int x1 = x;
    for (c = string; *c != '\0'; c++) {
        glRasterPos2f(x1, y);
        glutBitmapCharacter(font, *c);
        x1 = x1 + glutBitmapWidth(font, *c);
    }
}
