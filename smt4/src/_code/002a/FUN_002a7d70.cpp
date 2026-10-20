#include "common.h"

extern "C" {

int __aeabi_memset4(u32 a, u32 b, u32 c);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 flags;
} Obj;

extern struct {
    u8 unk0[8];
    u32 unk8;
} DAT_004765e4;

void FUN_002a7d70(Obj *obj, u32 a, u32 b)
{
    if ((obj->flags & 2) != 0) {
        __aeabi_memset4(a, b, DAT_004765e4.unk8);
        return;
    }
}

} /* extern "C" */
