#include "common.h"

extern "C" {

void vec3CopyFromOffsetC(u32 *obj)
{
    obj[0] = obj[3];
    obj[1] = obj[4];
    obj[2] = obj[5];
}

} /* extern "C" */
