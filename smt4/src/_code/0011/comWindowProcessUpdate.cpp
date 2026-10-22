#include "common.h"

struct CommonWindowProcess {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 state;
    /* 0x0C */ u32 timer;
    /* 0x10 */ u8 unk10[0x2c];
    /* 0x3C */ u8 firstWindow[0x8c];
    /* 0xC8 */ u8 secondWindow[1];
};

extern "C" {
extern CommonWindowProcess *g_comWin;
s32 FUN_002bf818(void *window);
}

// Update the active common window and advance its state timer.
extern "C" s32 comWindowProcessUpdate(void *context)
{
    CommonWindowProcess *work = g_comWin;
    switch (work->state) {
    case 0: // Idle.
    case 3: // Waiting for the next request.
        break;
    case 1:
        if (FUN_002bf818(work->firstWindow)) {
            work->state = 2;
            work->timer = 0;
        }
        break;
    case 2:
        FUN_002bf818(work->secondWindow);
        break;
    case 4:
        if (FUN_002bf818(work->firstWindow))
            work->state = 0;
        break;
    }
    ++work->timer;
    return 0;
}
