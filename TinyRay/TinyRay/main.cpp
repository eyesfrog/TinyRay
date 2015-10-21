#include "World.h"

int main(void)
{
	World w;
    w.build();
    //w.render_perspective();
    //w.render_scene();
    w.camera_ptr->render_scene(w);
    w.display();
	return 0;
}