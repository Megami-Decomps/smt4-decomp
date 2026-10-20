#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 flags;
} Obj;

/* Sets flag 0x80. */
void msgBoxFlagsSetBit7(Obj *obj)
{
    obj->flags = obj->flags | 0x80;
}

} /* extern "C" */
