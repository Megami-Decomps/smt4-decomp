/* NON_MATCHING: StreetPass menu update is complete; switch case joining and initialized/refresh flag block layout differ. */
#include "common.h"

struct MarkPresenceRecord {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u16 present;
};
struct CampCecMenuState {
    /* 0x000 */ u8 unk000[0x144];
    /* 0x144 */ s32 state;
    /* 0x148 */ u32 unk148;
    /* 0x14C */ s32 selection;
    /* 0x150 */ u8 unk150[0xc];
    /* 0x15C */ u8 controls[0x11];
    /* 0x16D */ u8 initialized;
    /* 0x16E */ u8 unk16e;
    /* 0x16F */ u8 refreshRequested;
};
struct CampCecFlags {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u8 flags;
};
struct CampCecFlagGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ CampCecFlags *work;
};
extern "C" {
MarkPresenceRecord *gameDataGetMarkEntry(s32 index);
void sysPlaySe(u32 sound);
void FUN_0037c8e4(s32 enabled, s32 mode);
void messageRestoreBanner();
u32 FUN_003ba65c(void *controls);
u32 gameDataBlocksGetFlagByte();
extern CampCecFlagGlobals g_campCec;
}

/* Apply the StreetPass menu selection and synchronize its enabled flag. */
extern "C" s32 FUN_0035a2a4(CampCecMenuState *work)
{
    s32 result = 0;
    switch (work->selection) {
    case -1:
    case 0:
        break;
    case 1: work->state = 2; break;
    case 2: work->state = 3; break;
    case 3: work->state = 4; break;
    case 4: {
        s32 count = 0;
        for (s32 i = 0; i < 32; ++i) {
            if (gameDataGetMarkEntry(i)->present != 0) {
                ++count;
            }
        }
        if (count != 0) {
            work->state = 5;
        } else {
            sysPlaySe(62);
            work->state = 8;
        }
        break;
    }
    case 5: work->state = 6; break;
    case 6: work->state = 7; break;
    }
    if (work->selection != 0) {
        result = 3;
    }
    if (work->initialized == 0) {
        work->initialized = 1;
    }
    if (work->refreshRequested != 0) {
        work->refreshRequested = 0;
        FUN_0037c8e4(1, 0);
        messageRestoreBanner();
    }
    if (FUN_003ba65c(work->controls) & 2) {
        u32 enabled = gameDataBlocksGetFlagByte() & 2;
        if (enabled) {
            g_campCec.work->flags |= 2;
        } else {
            g_campCec.work->flags &= ~2;
        }
    }
    return result;
}
