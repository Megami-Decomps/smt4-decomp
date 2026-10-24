#include "common.h"

struct Obj003ac494 {
    u32 first;
};

extern "C" {
int geometryDestroy(u32 value);
int asdMemFree(void *block);

/* Destroys the object's geometry and frees the object. */
void FUN_003ac494(Obj003ac494 *obj)
{
    geometryDestroy(obj->first);
    asdMemFree(obj);
}
}
