#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 flags;
} Obj;

/* Sets the given flag bits. */
void FUN_002c49f8(Obj *obj, u32 mask)
{
    obj->flags = mask | obj->flags;
}

} /* extern "C" */
