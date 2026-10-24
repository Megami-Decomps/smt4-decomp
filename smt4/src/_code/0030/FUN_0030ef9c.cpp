#include "common.h"

struct Obj0030ef9c {
    u8 unk00[4];
    u32 first;
    void *second;
};

extern "C" {
int geometryDestroy(u32 value);
int asdMemFree(void *block);

/* Destroys the first block and frees the second. */
void FUN_0030ef9c(Obj0030ef9c *obj)
{
    geometryDestroy(obj->first);
    asdMemFree(obj->second);
}
}
