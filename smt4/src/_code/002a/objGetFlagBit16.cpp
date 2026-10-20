#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x754];
    /* 0x754 */ u32 flags;
} Obj;

/* Flag bit 16 of the flags word. */
u32 objGetFlagBit16(Obj *obj)
{
    return (obj->flags & 0x10000) >> 0x10;
}

} /* extern "C" */
