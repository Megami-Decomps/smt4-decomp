#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u8 flags;
} Obj;

/* Sets flag 8. */
void FUN_00396034(Obj *obj)
{
    obj->flags = obj->flags | 8;
}

} /* extern "C" */
