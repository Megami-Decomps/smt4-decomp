#include "gfx/ControllerModel.h"

extern "C" {

/* Moves the body to `position`. */
void controllerSetDestination(Obj557b18 *body, const MapVector *position)
{
    body->position = *position;
}

} /* extern "C" */
