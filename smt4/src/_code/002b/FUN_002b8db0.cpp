#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 flags;
} Obj;

void FUN_002b8db0(Obj *obj, u32 mask)
{
    obj->flags = obj->flags & ~mask;
}

} /* extern "C" */
