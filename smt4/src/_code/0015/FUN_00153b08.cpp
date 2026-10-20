#include "common.h"

extern "C" {

int FUN_002c3944(u32 a, u32 b);
int FUN_002c424c(u32 a, u32 b, u32 c);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 flags;
} Obj;

extern struct {
    u8 unk0[4];
    u32 unk4;
} DAT_004765e4;

void FUN_00153b08(Obj *obj, u32 a, u32 b)
{
    if ((obj->flags & 1) != 0) {
        FUN_002c3944(a, b);
        return;
    }
    if ((obj->flags & 2) != 0) {
        FUN_002c424c(a, b, DAT_004765e4.unk4);
        return;
    }
}

} /* extern "C" */
