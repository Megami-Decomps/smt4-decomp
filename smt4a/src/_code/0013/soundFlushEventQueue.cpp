#include "common.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {
extern u8 g_soundVolumeSetting;
extern u32 g_eventQueueEntries[32]; // sound ids queued for this frame, 0 when free
s32 FUN_00162ea4(void);
void asdSndPlaySlotA(u32 id, u32 volume, u32 flags);
void asdSndPlaySlotB(u32 id, u32 volume, u32 flags, f32 volumeScale, f32 pan);
void asdSoundDetachAllHandles(void);

/* Plays a sound effect, panned by the source position for the positional ids. */
static __inline void soundPlaySe(u32 id, u32 position)
{
    if (jyoucyuGetTableEntry(1) == 0 && FUN_00162ea4() == 0) {
        if (id >= 0x100007C && id <= 0x100020C) {
            asdSndPlaySlotA(id, g_soundVolumeSetting, 0);
        } else if (id >= 0x100020D && id <= 0x1000312) {
            f32 pan = 0.0f;

            switch (position) {
            case 0:
            case 3:
                break;
            case 1:
                pan = 0.8f;
                break;
            case 2:
                pan = 0.4f;
                break;
            case 4:
                pan = -0.4f;
                break;
            case 5:
                pan = -0.8f;
                break;
            }
            asdSndPlaySlotB(id, g_soundVolumeSetting, 0, 1.0f, pan);
        }
    }
}

/* Plays and clears every queued sound effect; detaches the sound handles while sound is suspended. */
void soundFlushEventQueue(void)
{
    s32 i;

    for (i = 0; i < 32; i++) {
        u32 id = g_eventQueueEntries[i];

        if (id == 0) {
            continue;
        }
        soundPlaySe(id, 0);
        g_eventQueueEntries[i] = 0;
    }
    if (FUN_00162ea4() != 0) {
        asdSoundDetachAllHandles();
    }
}
}
