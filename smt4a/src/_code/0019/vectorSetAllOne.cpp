#include "common.h"

extern "C" {

/* Initializes all four components to one. */
void vectorSetAllOne(f32 *components)
{
    components[0] = 1.0f;
    components[1] = 1.0f;
    components[2] = 1.0f;
    components[3] = 1.0f;
}

} /* extern "C" */
