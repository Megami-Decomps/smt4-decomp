#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 mode;
    /* 0x24 */ u8 unk24[0x14];
    /* 0x38 */ u32 flags;
} Obj;

u32 FUN_001ad4c0(Obj *obj)
{
    u32 kind = obj->flags & 0x7f;

    if ((kind == 0xe || kind == 1) && (obj->mode == 3 || obj->mode == 7)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
