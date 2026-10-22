#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {
void FUN_0010e5a4(f32 duration);
void FUN_0010e8e8(f32 duration);
void FUN_0010edbc(f32 duration);
void FUN_0011a324(u32 volume);
void asdSndEnsureCurrentSlotData(u32 resource);
void asdSoundSelectSlotB(u32 slot);
void memClear(void *buffer, u32 size);
void *jyoucyuGetTableEntry(u32 index);

extern SoundVolumeState g_soundVolumeSetting;
extern u32 g_eventQueueEntries[32];

/* Initializes the persistent sound slots and clears queued sound events. */
void soundInitializePersistentSlots(void)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        asdSoundSelectSlotB(0);
        asdSndEnsureCurrentSlotData(0x6000000);
        asdSoundSelectSlotB(1);
        asdSndEnsureCurrentSlotData(0x6000002);
        asdSoundSelectSlotB(3);
        asdSndEnsureCurrentSlotData(0x6000001);
        FUN_0010e5a4(200.0f);
        FUN_0010e8e8(800.0f);
        FUN_0010edbc(250.0f);
        FUN_0011a324(g_soundVolumeSetting.volume);
        memClear(g_eventQueueEntries, sizeof(g_eventQueueEntries));
        jyoucyuGetTableEntry(1);
    }
}
}
