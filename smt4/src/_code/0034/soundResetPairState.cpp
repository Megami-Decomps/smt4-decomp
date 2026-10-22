#include "shard/S1NwSnd.h"

// Reset both words of the sound helper's pair state.
extern "C" void soundResetPairState(SoundPlayerPairState *state)
{
    state->first = 0;
    state->second = 0;
}
