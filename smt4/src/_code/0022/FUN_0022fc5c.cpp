#include "common.h"

struct MenuTransitionWork {
    u32 unk000;        // 0x000
    u32 state;         // 0x004
    u32 substate;      // 0x008
    u8 unk00c[8];     // 0x00c
    u8 mode;           // 0x014
    u8 unk015[0x84b]; // 0x015
    s32 stage;         // 0x860
};

extern "C" {
void FUN_00230234(MenuTransitionWork* work);
void FUN_002302d8(MenuTransitionWork* work, s32 immediate);
void FUN_0022fcb8(MenuTransitionWork* work, s32 immediate);

// Enter menu state fourteen and choose the stage-specific transition path.
void FUN_0022fc5c(MenuTransitionWork* work)
{
    work->state = 14;
    work->substate = 0;
    if (work->stage != 8) {
        if (work->mode == 1) {
            work->stage = 7;
        } else {
            FUN_00230234(work);
        }
        FUN_002302d8(work, 1);
    } else {
        FUN_0022fcb8(work, 1);
    }
}
}
