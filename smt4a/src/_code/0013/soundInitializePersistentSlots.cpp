#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {
void FUN_00144564(f32 duration);
void FUN_00144a54(f32 duration);
void FUN_00145048(f32 duration);
void soundApplyVolumeToSlots(u32 volume);
void FUN_00151340(u32 resource);
void asdSoundSelectCurrentSlot(u32 slot);
void sysMemClear(void *buffer, u32 size);
void *jyoucyuGetTableEntry(u32 index);

extern SoundVolumeState g_soundVolumeSetting;
extern u32 g_eventQueueEntries[32];

/* Initializes the persistent sound slots and clears queued sound events. */
void soundInitializePersistentSlots(void)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        asdSoundSelectCurrentSlot(0);
        FUN_00151340(0x6000000);
        asdSoundSelectCurrentSlot(1);
        FUN_00151340(0x6000002);
        asdSoundSelectCurrentSlot(3);
        FUN_00151340(0x6000001);
        FUN_00144564(200.0f);
        FUN_00144a54(800.0f);
        FUN_00145048(250.0f);
        soundApplyVolumeToSlots(g_soundVolumeSetting.volume);
        sysMemClear(g_eventQueueEntries, sizeof(g_eventQueueEntries));
        jyoucyuGetTableEntry(1);
    }
}
}
