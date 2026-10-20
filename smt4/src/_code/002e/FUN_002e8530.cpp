#include "common.h"

extern "C" {

int modelSlotAttachChild(u32 a, int b);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x2B0];
    /* 0x2B0 */ u8 unk2B0;
    /* 0x2B1 */ u8 unk2B1[3];
    /* 0x2B4 */ u32 unk2B4;
} Obj;

extern struct {
    u8 unk0[4];
    Obj *obj;
} DAT_004474f0;

void FUN_002e8530(void)
{
    Obj *obj = DAT_004474f0.obj;

    DAT_004474f0.obj->unk2B0 = 1;
    modelSlotAttachChild(obj->unk2B4, 0);
}

} /* extern "C" */
