/* NON_MATCHING: retail reads fadePending/fadeOut through the work+0x700 base it keeps for regionCount; this reads them off the work pointer. */
#include "common.h"

extern "C" {

typedef struct TouchMenuWork {
    /* 0x000 */ u8 unk000[0x744];
    /* 0x744 */ s32 mode;
    /* 0x748 */ u8 unk748[6];
    /* 0x74E */ u8 state;
    /* 0x74F */ u8 unk74F[0x1d];
    /* 0x76C */ s16 regions[13];   /* touch region ids, -1 when free */
    /* 0x786 */ s16 regionCount;
    /* 0x788 */ u8 unk788[0x6c];
    /* 0x7F4 */ u8 fadePending;
    /* 0x7F5 */ u8 fadeOut;
    /* 0x7F6 */ u8 fadeTarget[1];
} TouchMenuWork;

typedef struct TouchMenuModule {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ TouchMenuWork *work;
} TouchMenuModule;

void FUN_00220d24(s32 mode);
void FUN_00295214(s32 mode);
void FUN_0029ee6c(void *target, u32 color);
void ifTouchRegionRemove(void);

extern TouchMenuModule g_useCounter;

/* Closes the touch menu: frees its touch regions and finishes a pending fade. */
void FUN_0028d5ac(void)
{
    TouchMenuWork *work = g_useCounter.work;

    work->mode = 4;
    for (s32 i = 0; i < work->regionCount; i++) {
        work->regions[i] = -1;
        ifTouchRegionRemove();
    }
    if (work->state == 2 || work->state == 1) {
        return;
    }
    if (work->fadePending) {
        if (work->fadeOut) {
            FUN_00220d24(1);
        } else {
            FUN_0029ee6c(work->fadeTarget, 0x323232ff);
        }
        work->fadePending = 0;
    } else {
        FUN_00295214(0);
    }
}

} /* extern "C" */
