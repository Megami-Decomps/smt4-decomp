#include "gfx/ControllerModel.h"

/* Moves the body to (x, y, z). */
extern "C" void controllerSetPositionXyz(Obj557b18 *body, f32 x, f32 y, f32 z)
{
    body->position.x = x;
    body->position.y = y;
    body->position.z = z;
}
