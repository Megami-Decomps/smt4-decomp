/* NON_MATCHING: selection compaction recovered; retail uses unsigned halfword loads and countdown traversal with different register allocation. */
#include "common.h"

struct StatusSelectionWork {
    /* 0x000 */ u8 unk000[0x4A2];
    /* 0x4A2 */ s16 selected[8];
    /* 0x4B2 */ s16 pending[8];
};

extern "C" {
extern StatusSelectionWork* g_statusDown;

// Remove the first selected status and compact the remaining selection slots.
void FUN_0026adb4(void)
{
    StatusSelectionWork* work = g_statusDown;
    for (s32 i = 0; i < 8; ++i) {
        u16 pending = work->pending[i];
        if (pending != 0 && pending == (u16)work->selected[0]) {
            work->pending[i] = 0;
        }
    }
    work->selected[0] = 0;
    for (s32 pass = 0; pass < 7; ++pass) {
        for (s32 i = 0; i < 7 - pass; ++i) {
            if ((u16)work->selected[pass + i] == 0 && (u16)work->selected[pass + i + 1] != 0) {
                work->selected[pass + i] = work->selected[pass + i + 1];
                work->selected[pass + i + 1] = 0;
            }
        }
    }
}
}
