#include "common.h"

extern "C" {

typedef struct Work00321298 {
    /* 0x0000 */ u8 unk0000[0x387c];
    /* 0x387c */ s32 state;
    /* 0x3880 */ u8 unk3880[0x10];
    /* 0x3890 */ s32 index;
    /* 0x3894 */ u8 unk3894[0x3f4];
    /* 0x3c88 */ u32 firstTable[4];
    /* 0x3c98 */ u32 secondTable[4];
    /* 0x3ca8 */ u8 unk3ca8[0x104];
    /* 0x3dac */ u32 unk3dac;
} Work00321298;

void FUN_0020ad6c(Work00321298 *work, s32 a, s32 b);

/* Leaves the state: clears the whole second table and switches to 0x1c, unless the state is 0x28, which clears only the current entry. */
void workTablesClear(Work00321298 *work)
{
    if (work->state != 0x28) {
        s32 i;

        for (i = 0; i < 4; i++) {
            work->secondTable[i] = 0;
        }
        FUN_0020ad6c(work, 0x1c, 0);
        return;
    }
    work->secondTable[work->index] = 0;
    work->firstTable[work->index] = 0;
    work->unk3dac = 0;
}

} /* extern "C" */
