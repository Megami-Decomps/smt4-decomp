#include "shard/S1NnSnd.h"

extern "C" {

void FUN_0015eea0(VoiceState *state, const VoiceStatusMsg *msg);

/* Forward a status message to the voice's state. */
void nn_snd_CTR_VoiceManager_UpdateStatus(VoiceManager *manager, int index, const VoiceStatusMsg *msg)
{
    FUN_0015eea0(manager->voices[index]->state, msg);
}

} /* extern "C" */
