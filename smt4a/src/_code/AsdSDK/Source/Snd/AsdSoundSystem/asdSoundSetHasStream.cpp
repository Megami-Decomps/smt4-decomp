#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndStatusApoc g_asdSoundStatus;

void asdSoundSetHasStream(u8 hasStream)
{
    if (g_asdSoundStatus.ready != 0) {
        g_asdSoundStatus.hasStream = hasStream;
    }
}

} /* extern "C" */
