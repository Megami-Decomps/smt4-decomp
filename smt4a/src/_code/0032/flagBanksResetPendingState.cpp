#include "shard/W5_W5Match7_FlagBanks.h"

// Resets the flag-work operation and enables its optional override when requested.
extern "C" void flagBanksResetPendingState(s32 overrideEnabled)
{
    FlagWorkBanks* flags = gameFlagsGetBlock();
    flags->reset.active = 1;
    flags->reset.time = 0.0f;
    flags->reset.value = 0;
    flags->reset.overrideEnabled = 0;
    if (overrideEnabled != 0) {
        flags->reset.overrideEnabled = 1;
    }
}
