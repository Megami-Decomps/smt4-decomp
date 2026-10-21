#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern SoundVolumeState g_soundVolumeSetting;
extern void FUN_0011a324(u32 volume);

/* Stores the volume setting and applies it to active sounds. */
void soundSetVolumeSetting(u8 volume)
{
    g_soundVolumeSetting.volume = volume;
    FUN_0011a324(volume);
}

} /* extern "C" */
