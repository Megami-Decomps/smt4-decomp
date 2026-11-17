#include "gfx/ControllerModel.h"

extern "C" {

/* Sets the body's scale. */
void controllerSetPosition(Obj557b18 *body, f32 x, f32 y, f32 z)
{
    body->scale.x = x;
    body->scale.y = y;
    body->scale.z = z;
}

} /* extern "C" */
