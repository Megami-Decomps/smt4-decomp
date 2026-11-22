#include "nw/snd/BasicSound.h"
#include "sound/SoundPlayerPriority_Smt4a.h"

using nw::snd::internal::BasicSoundA;

extern "C" {

/* nw::snd::internal::BasicSound::Stop: fades the sound out over a time proportional to its current fade value, or
 * stops it at once when it is not playing or `frames` is not positive. */
void nw_snd_internal_BasicSound_Stop(SoundObject *object, s32 frames)
{
    ((BasicSoundA *)object)->Stop(frames);
}

} /* extern "C" */
