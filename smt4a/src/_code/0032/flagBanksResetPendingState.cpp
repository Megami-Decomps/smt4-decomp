#include "gamedata/MapSaveBlockA.h"

// Resets the flag-work operation and enables its optional override when requested.
extern "C" void flagBanksResetPendingState(s32 overrideEnabled)
{
    MapSaveBlockA* flags = gameFlagsGetBlock();
    flags->resetActive = 1;
    flags->resetTime = 0.0f;
    flags->resetValue = 0;
    flags->overrideEnabled = 0;
    if (overrideEnabled != 0) {
        flags->overrideEnabled = 1;
    }
}
