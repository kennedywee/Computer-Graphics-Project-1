#include <string.h>
static const int SCREEN_WIDTH = 1280;
static const int SCREEN_HEIGHT = 720;
static const double PI = 3.141592653;

static int frame = 0, scene_counter = 1;

static float kirby_move = 0;






bool isRunning = true;


GLint i, j, k;
GLfloat sun_spin = 0, sun_x = 0, sun_y = 0;
GLfloat ax = 0, bx = 0, cx = 0, dx = 0, str = 500.0, mn = 500.0;
GLfloat sr = 0.0, sg = 0.749, sb = 1.0;
GLfloat spin = 0.0;
