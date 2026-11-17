#include "util/MathFunctions.h"

extern "C" {

void vec3CopyFromOffsetC(u32 *object)
{
    object[0] = object[3];
    object[1] = object[4];
    object[2] = object[5];
}

} /* extern "C" */
