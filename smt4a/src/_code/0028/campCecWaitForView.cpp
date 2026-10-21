#include "shard/W6_W6Match4_CampCecResumeState.h"

extern "C" {
u32 campCecViewExists();
u32 campCecViewIsDone();
void campCecViewDestroy();
void sysPlaySe(u32 id);
void FUN_0031d890();
void FUN_003447a0();

u32 campCecWaitForView(CampCecResumeState *state)
{
    u32 result = 0;
    switch (campCecViewExists()) {
    case 0:
        FUN_003447a0();
        break;
    default:
        if (campCecViewIsDone()) {
            campCecViewDestroy();
            sysPlaySe(0x10d);
            state->state = 1;
            state->unk14c = 0;
            FUN_0031d890();
            result = 3;
        }
        break;
    }
    return result;
}
}
