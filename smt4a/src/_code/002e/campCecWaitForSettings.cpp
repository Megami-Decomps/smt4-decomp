#include "shard/W6_W6Match4_CampCecResumeState.h"

extern "C" {
u32 campCecSettingExists();
u32 campCecSettingIsDone();
void campCecSettingOpen();
void campCecSettingDestroy();
void FUN_0031d890();
u8 cecQueryOptionalProcess();

u32 campCecWaitForSettings(CampCecResumeState *state)
{
    u32 result = 0;
    switch (campCecSettingExists()) {
    case 0:
        campCecSettingOpen();
        break;
    default:
        if (campCecSettingIsDone()) {
            campCecSettingDestroy();
            state->state = 1;
            state->unk14c = 0;
            FUN_0031d890();
            state->optionalProcess = cecQueryOptionalProcess();
            result = 3;
        }
        break;
    }
    return result;
}
}
