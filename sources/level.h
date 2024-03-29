#ifndef _LEVEL_
#define _LEVEL_

// Карту
// Камеру
// перемещение камеры

struct Camera {
    int offset_x;
    int offset_y;
    int w;
    int h;
    char * surface;
};

struct Level {
    int w;
    int h;
    char * field;
};

Camera * init_camera();

Level * init_level();

bool load_level(const char * filename, Level * level);

void draw_level(Camera * camera, const Level * level);

void draw(Camera * camera);

#endif
