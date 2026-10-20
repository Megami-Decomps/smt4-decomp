#include "common.h"

extern "C" {

int effTimelineIsDone(u32 value);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x2B4];
    /* 0x2B4 */ u32 unk2B4;
} Obj;

extern struct {
    u8 unk0[4];
    Obj *obj;
} DAT_004474f0;

void FUN_003079a0(void)
{
    effTimelineIsDone(DAT_004474f0.obj->unk2B4);
}

} /* extern "C" */
