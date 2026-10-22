/* NON_MATCHING: only the persistent controller/result registers are swapped (retail r4/r5, compiled r5/r4). Natural switch reproduces both native NOPs. Candidate O2. */
#include "common.h"

struct CampCecCompletionState {
    u32 active;  // 0x00
    u32 unk04;   // 0x04
    u32 counter; // 0x08
};

struct CampCecEditController {
    u8 unk000[0x144]; // 0x000
    CampCecCompletionState completion; // 0x144
};

extern "C" {
s32 campCecEditIsOpen();
s32 FUN_002e2014();
void stateAtF4Destroy();
void sysPlaySe(u32);
void FUN_0031d890();
void FUN_0034280c(s32);

// Poll the edit confirmation, tear it down on acceptance and refresh the party panel.
u32 campCecEditPollConfirmation(CampCecEditController* controller)
{
    u32 result = 0;
    switch (campCecEditIsOpen()) {
    case 0:
        FUN_0034280c(0);
        break;
    default:
        if (FUN_002e2014() != 0) {
            stateAtF4Destroy();
            sysPlaySe(0x10d);
            CampCecCompletionState* completion = &controller->completion;
            completion->active = 1;
            completion->counter = 0;
            FUN_0031d890();
            result = 3;
        }
        break;
    }
    return result;
}
}
