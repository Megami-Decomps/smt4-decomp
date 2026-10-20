#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 flags;
} Obj;

u32 FUN_002a2df8(Obj *obj)
{
    return (obj->flags & 2) >> 1;
}

} /* extern "C" */
