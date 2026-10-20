#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 flags;
} Obj;

void FUN_002b8d80(Obj *obj)
{
    obj->flags = obj->flags & 0xffffff7f;
}

} /* extern "C" */
