#include "common.h"

extern "C" {

extern u8 g_soundVolumeSetting;
extern u32 g_eventQueueEntries[32]; // sound ids queued for this frame, 0 when free

s32 jyoucyuGetTableEntry(u32 index);
s32 FUN_002c1d5c(void);
s32 FUN_00126850(u32 id, u8 volumeSetting, u32 flags);
s32 FUN_0012655c(u32 id, u8 volumeSetting, u32 flags, f32 volume, f32 pan);
void asdSndStopCurrentSlotSounds(void);

/* Plays a sound effect, panned by the source position for the positional ids. */
static __inline void soundPlaySe(u32 id, u32 position)
{
    if (jyoucyuGetTableEntry(1) == 0 && FUN_002c1d5c() == 0) {
        if (id >= 0x100006C && id <= 0x100016B) {
            FUN_00126850(id, g_soundVolumeSetting, 0);
        } else if (id >= 0x100016C && id <= 0x1000267) {
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
            FUN_0012655c(id, g_soundVolumeSetting, 0, 1.0f, pan);
        }
    }
}

/* Plays and clears every queued sound effect; stops the slot sounds while sound is suspended. */
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
    if (FUN_002c1d5c() != 0) {
        asdSndStopCurrentSlotSounds();
    }
}

} /* extern "C" */
