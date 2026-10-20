#include "shard/S1NnSnd.h"

extern "C" {

void FUN_001d3008(VoiceState *state, const VoiceStatusMsg *msg);

/* Forward a status message to the voice's state. */
void nn_snd_CTR_VoiceManager_UpdateStatus(VoiceManager *manager, int index, const VoiceStatusMsg *msg)
{
    FUN_001d3008(manager->voices[index]->state, msg);
}

} /* extern "C" */
