#include "common.h"

struct Obj003c4b54 {
    u8 unk00[4];
    u32 first;
    void *second;
};

extern "C" {
int geometryDestroy(u32 value);
int asdMemFree(void *block);

/* Destroys the first block and frees the second. */
void FUN_003c4b54(Obj003c4b54 *obj)
{
    geometryDestroy(obj->first);
    asdMemFree(obj->second);
}
}
