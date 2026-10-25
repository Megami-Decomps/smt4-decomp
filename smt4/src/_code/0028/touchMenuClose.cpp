#include "common.h"

extern "C" {

typedef struct TouchMenuPanel {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ s32 mode;
    /* 0x48 */ u8 unk48[6];
    /* 0x4E */ u8 state;
    /* 0x4F */ u8 unk4F[0x1d];
    /* 0x6C */ s16 regions[13];   /* touch region ids, -1 when free */
    /* 0x86 */ s16 regionCount;
    /* 0x88 */ u8 unk88[0x6c];
    /* 0xF4 */ u8 fadePending;
    /* 0xF5 */ u8 fadeOut;
    /* 0xF6 */ u8 fadeTarget[1];
} TouchMenuPanel;

typedef struct TouchMenuWork {
    /* 0x000 */ u8 unk000[0x700];
    /* 0x700 */ TouchMenuPanel panel;
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
void touchMenuClose(void)
{
    TouchMenuWork *work = g_useCounter.work;

    TouchMenuPanel *panel = &work->panel;
    work->panel.mode = 4;
    for (s32 i = 0; i < panel->regionCount; i++) {
        work->panel.regions[i] = -1;
        ifTouchRegionRemove();
    }
    if (work->panel.state == 2 || work->panel.state == 1) {
        return;
    }
    if (panel->fadePending) {
        if (panel->fadeOut) {
            FUN_00220d24(1);
        } else {
            FUN_0029ee6c(work->panel.fadeTarget, 0x323232ff);
        }
        work->panel.fadePending = 0;
    } else {
        FUN_00295214(0);
    }
}

} /* extern "C" */
