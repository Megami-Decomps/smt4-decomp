#include "kernel/jyoucyu.h"

struct ProgressState : JyoucyuWork {
    /* 0x08 */ u32 phase;
};

extern "C" void FUN_0022258c(s32 value);
extern "C" JyoucyuGlobals g_jyoucyu;

extern "C" s32 FUN_0025c7e4(void)
{
    ProgressState* state = static_cast<ProgressState *>(g_jyoucyu.work);

    switch (state->phase) {
    case 0:
    case 1:
        state->phase++;
        break;
    case 2:
        FUN_0022258c(0);
        return -1;
    }

    return 0;
}
