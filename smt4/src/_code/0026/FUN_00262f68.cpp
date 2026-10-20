#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u16 flags;
} Obj;

/* Clears the given bits of the flags halfword. */
void FUN_00262f68(Obj *obj, u16 mask)
{
    obj->flags = obj->flags & ~mask;
}

} /* extern "C" */
