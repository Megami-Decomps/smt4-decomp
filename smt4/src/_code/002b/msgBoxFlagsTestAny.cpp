#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 flags;
} Obj;

u8 msgBoxFlagsTestAny(Obj *obj, u32 mask)
{
    return (obj->flags & mask) != 0;
}

} /* extern "C" */
