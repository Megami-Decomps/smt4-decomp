#include "shard/S1NwSnd.h"

// Clear the sound helper's state word.
extern "C" void soundResetStateWord(SoundPlayerResetState *state)
{
    state->value = 0;
}
