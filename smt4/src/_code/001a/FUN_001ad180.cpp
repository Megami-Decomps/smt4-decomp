/* NON_MATCHING: retail dispatches states 0..3 through a jump table; armcc emits a comparison chain for the reconstructed no-op state zero. */
#include "common.h"

struct EventTransition {
    u8 unk00[8];
    u32 state; // 0x08
    u32 result; // 0x0c
    u32 elapsed; // 0x10
    u8 active; // 0x14
    u8 unk15[0x23];
    u32 transition; // 0x38
};
extern "C" EventTransition *DAT_0043e170;
extern "C" s32 FUN_002b8ee0(u32 *transition, s32 mode);
extern "C" s32 FUN_002bf818(u32 *transition);
extern "C" s32 FUN_002c1d5c();

// Advance the transition through its request, wait and completion states.
extern "C" s32 FUN_001ad180()
{
    EventTransition *work = DAT_0043e170;
    switch (work->state) {
    case 0:
        break;
    case 1:
        if (FUN_002b8ee0(&work->transition, 0)) {
            work->state = 2;
            work->elapsed = 0;
        }
        break;
    case 2:
        if (work->result == 3)
            work->state = work->result;
        break;
    case 3:
        if (FUN_002bf818(&work->transition)) {
            work->active = 0;
            work->state = 4;
        }
        break;
    }
    ++work->elapsed;
    if (FUN_002c1d5c()) {
        work->active = 0;
        work->state = 4;
    }
    return 0;
}
