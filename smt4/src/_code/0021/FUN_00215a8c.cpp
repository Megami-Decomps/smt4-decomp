/* NON_MATCHING: register allocation: retail keeps entry in r6 and reuses the status+0x400 base register for the constant 1, so it saves one register fewer (8-byte frame vs our 12). */
#include "status/StatusDown.h"
#include "camp/Unite/UniteWork.h"

extern "C" {

/* The entry the status-down screen was opened on. */
typedef struct StatusDownEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u16 unk0C;
} StatusDownEntry;



void buttonHelpSetPreset(u32 preset);
void gridNavigationConfigure(void *window, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);

/* Opens the status-down screen on `entry`, restoring the button help when a selection was showing. */
void FUN_00215a8c(const StatusDownEntry *entry)
{
    StatusDownState *status = g_statusDown;

    if (status->selectedEntry >= 0 && status->tab == 1) {
        s32 scene = FUN_0029ac94();

        if (scene == 13 || scene == 6) {
            buttonHelpSetPreset(0x2F);
        } else {
            buttonHelpSetPreset(0x1F);
        }
    }
    status->selectedEntry = -1;
    status->entryUnk00 = entry->unk00;
    status->entryUnk04 = entry->unk04;
    status->entryUnk08 = entry->unk08;
    status->entryUnk0C = entry->unk0C;
    gridNavigationConfigure(status->window, 7, 7, 1, 0, 1);
    status->listActive = 1;
}

} /* extern "C" */
