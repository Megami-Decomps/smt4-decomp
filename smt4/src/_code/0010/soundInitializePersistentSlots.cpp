#include "shard/W5_W5Match1_RecordKeys.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
void asdSnd3dSetManagerScalarA34(f32 value);
void asdSnd3dSetOutputVolume(f32 value);
void asdSnd3dSetManagerScalarA3C(f32 value);
void soundApplyVolumeToSlots(u32 volume);
void asdSndEnsureCurrentSlotData(u32 soundId);
void asdSoundSelectSlotB(u32 slot);
void *jyoucyuGetTableEntry(u32 index);

extern SoundVolumeState g_soundVolumeSetting;
extern u32 g_eventQueueEntries[32];

/* Unless the resident table's sound entry is set already, loads the resident sound data into sound slots
 * 0, 1 and 3, sets the 3D sound scalars, applies the volume setting and clears the sound event queue. */
void soundInitializePersistentSlots(void)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        asdSoundSelectSlotB(0);
        asdSndEnsureCurrentSlotData(0x6000000);
        asdSoundSelectSlotB(1);
        asdSndEnsureCurrentSlotData(0x6000002);
        asdSoundSelectSlotB(3);
        asdSndEnsureCurrentSlotData(0x6000001);
        asdSnd3dSetManagerScalarA34(200.0f);
        asdSnd3dSetOutputVolume(800.0f);
        asdSnd3dSetManagerScalarA3C(250.0f);
        soundApplyVolumeToSlots(g_soundVolumeSetting.volume);
        memClear(g_eventQueueEntries, sizeof(g_eventQueueEntries));
        jyoucyuGetTableEntry(1);
    }
}

} /* extern "C" */
