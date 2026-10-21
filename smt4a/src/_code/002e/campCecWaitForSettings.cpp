/* NON_MATCHING: state/reset stores swap r0/r1 and execute in the opposite order; all other default instructions match. -O2 restores source order but removes retail's native NOPs. */
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
            state->unk14c = 0;
            state->state = 1;
            FUN_0031d890();
            state->optionalProcess = cecQueryOptionalProcess();
            result = 3;
        }
        break;
    }
    return result;
}
}
