/* NON_MATCHING: register allocation: retail keeps entry in r6 and reuses the status+0x400 base register for the constant 1, so it saves one register fewer (8-byte frame vs our 12). */
#include "common.h"
#include "shard/W5_W5Match2_UniteWork.h"

extern "C" {

/* The entry the status-down screen was opened on. */
typedef struct StatusDownEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u16 unk0C;
} StatusDownEntry;

/* The status-down screen's work: only the fields this unit touches are named. */
typedef struct StatusDown {
    /* 0x000 */ u8 unk000[0x3FC];
    /* 0x3FC */ u8 mode;
    /* 0x3FD */ u8 unk3FD[0x13];
    /* 0x410 */ u8 refresh;
    /* 0x411 */ u8 unk411[0x6D];
    /* 0x47E */ s16 selection;      /* negative when nothing is selected */
    /* 0x480 */ u8 unk480[0xD4];
    /* 0x554 */ u32 entryUnk00;
    /* 0x558 */ u32 entryUnk04;
    /* 0x55C */ u32 entryUnk08;
    /* 0x560 */ u16 entryUnk0C;
    /* 0x562 */ u8 unk562[2];
    /* 0x564 */ u8 window[1];
} StatusDown;

extern StatusDown *g_statusDown;

void buttonHelpSetPreset(u32 preset);
void FUN_0029f848(void *window, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);

/* Opens the status-down screen on `entry`, restoring the button help when a selection was showing. */
void FUN_00215a8c(const StatusDownEntry *entry)
{
    StatusDown *status = g_statusDown;

    if (status->selection >= 0 && status->mode == 1) {
        s32 scene = FUN_0029ac94();
        u32 preset;

        if (scene == 13 || scene == 6) {
            preset = 0x2F;
        } else {
            preset = 0x1F;
        }
        buttonHelpSetPreset(preset);
    }
    status->selection = -1;
    status->entryUnk00 = entry->unk00;
    status->entryUnk04 = entry->unk04;
    status->entryUnk08 = entry->unk08;
    status->entryUnk0C = entry->unk0C;
    FUN_0029f848(status->window, 7, 7, 1, 0, 1);
    status->refresh = 1;
}

} /* extern "C" */
