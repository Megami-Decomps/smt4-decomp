/* NON_MATCHING: register allocation only: the final flag clear reuses r5 (the job owner) here; retail forms the address in r1 and the value in r2 */
#include "common.h"

extern "C" {

typedef struct JobOwner {
    /* 0x0000 */ u8 unk0000[0x5C];
    /* 0x005C */ u32 job;
    /* 0x0060 */ u8 unk0060[0x4448];
    /* 0x44A8 */ u32 flags;
} JobOwner;

typedef struct Popup {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 job;
} Popup;

typedef struct PopupState {
    /* 0x0 */ u8 unk0[2];
    /* 0x2 */ u16 active;
    /* 0x4 */ u8 unk4[4];
    /* 0x8 */ Popup *popup;
} PopupState;

extern void *g_btlUiBlock;
extern PopupState DAT_00434388;

extern JobOwner *jobGetWork(void);
extern s32 jobIsValid(u32 job);
extern void jobStop(u32 job, s32 arg);
extern void asdMemFree(void *block);
extern void FUN_0024ef90(u32 job);
extern void FUN_0025c2d0(void *block, s32 arg);

/* Shuts down the battle UI block and the popup job, then clears the owner's flag 0. */
void FUN_0021ec34(void)
{
    JobOwner *owner = jobGetWork();

    if (g_btlUiBlock != NULL) {
        FUN_0025c2d0(g_btlUiBlock, 0);
    }
    if (DAT_00434388.popup != NULL) {
        Popup *popup = DAT_00434388.popup;

        DAT_00434388.active = 0;
        if (jobIsValid(popup->job) != 0) {
            FUN_0024ef90(popup->job);
            jobStop(popup->job, 0);
        }
        asdMemFree(DAT_00434388.popup);
        DAT_00434388.popup = NULL;
    }
    if (jobIsValid(owner->job) != 0) {
        jobStop(owner->job, 0);
    }
    owner->flags &= ~1;
}

} /* extern "C" */
