/* Sets or clears bit 6 of the flags halfword at +0x1e. */
#include "common.h"

extern "C" {

struct Obj001d1a50 {
    /* 0x00 */ u8 unk00[0x1e];
    /* 0x1e */ u16 flags;
};

void FUN_001d1a58(Obj001d1a50 *obj, u32 set)
{
    obj->flags = (obj->flags & ~0x40) | (set << 6);
}

}
