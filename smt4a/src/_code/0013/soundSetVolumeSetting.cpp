#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern SoundVolumeState g_soundVolumeSetting;
extern void soundApplyVolumeToSlots(u32 volume);

/* Stores the volume setting and applies it to active sounds. */
void soundSetVolumeSetting(u8 volume)
{
    g_soundVolumeSetting.volume = volume;
    soundApplyVolumeToSlots(volume);
}

} /* extern "C" */
