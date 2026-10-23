#include "sound/SoundSpatialState.h"

extern "C" {
const AsdSndListener* asdSoundGetListener(void);

// Reset playback state and seed every stored position from the current listener.
void soundResetSpatialState(SoundSpatialState* state)
{
    state->unk000 = 0;
    state->unk004 = 0;
    state->unk008 = 0;
    state->unk00C = 0;
    state->unk010 = 0;
    state->unk014 = 0;
    state->unk015 = 0;
    state->unk018 = 0;
    state->unk594 = 0;
    state->unk598 = 0;
    state->soundId = -1;
    state->listenerHistory[0] = *asdSoundGetListener();
    state->listenerHistory[1] = *asdSoundGetListener();
    state->listenerHistory[2] = *asdSoundGetListener();
    state->listenerHistory[3] = *asdSoundGetListener();
    state->listenerHistory[4] = *asdSoundGetListener();
    state->listenerHistory[5] = *asdSoundGetListener();
    state->listenerHistory[6] = *asdSoundGetListener();
    state->listenerHistory[7] = *asdSoundGetListener();
}
}
