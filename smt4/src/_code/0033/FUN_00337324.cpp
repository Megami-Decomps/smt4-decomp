#include "common.h"

extern "C" {

extern u32 padIsButtonDown(u32 button);

typedef struct Btl {
    /* 0x0000 */ u8 unk0000[0x44A0];
    /* 0x44A0 */ u32 flags;
    /* 0x44A4 */ u8 unk44A4[4];
    /* 0x44A8 */ u32 flags2;
} Btl;

u32 FUN_00337324(Btl *btl)
{
    u32 result;

    if ((btl->flags & 0x40) != 0) {
        result = 0;
    } else {
        if ((btl->flags2 & 0x20000) == 0) {
            result = padIsButtonDown(0x10);
            return result;
        }
        result = 1;
    }
    return result;
}

} /* extern "C" */
