#include "common.h"

struct Obj31f548Target {
    u8 unk00[0xe0];
    u8 data[1];
};

struct Obj31f548 {
    u8 unk00[0x20];
    Obj31f548Target *target;
};

/* Returns the data block inside the object's target. */
extern "C" void *FUN_0031f548(Obj31f548 *obj)
{
    return obj->target->data;
}
