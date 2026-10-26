#include "common.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "util/AsdSoundGetPlayerPriority.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
s32 FUN_002c1d5c(void);
s32 asd3dSoundActorIsPlaying(s32 slot);
void FUN_002cc1c0(u32 slot, const SoundActorQueuePosition *position);
void FUN_002ebc68(u32 sound, s32 slot);
void FUN_002cc08c(u32 sound, s32 slot);
void *FUN_002ebc34(s32 slot);

/* Find an idle sound actor, or replace the player with the greatest priority value. */
u32 FUN_00291e40(u32 sound, SoundActorQueuePosition position)
{
    s32 selected = -1;
    bool started = false;
    s32 greatestPriority = -1;
    s32 replacement = -1;
    if (jyoucyuGetTableEntry(1) == 0 && FUN_002c1d5c() == 0) {
        for (s32 slot = 0; slot < 16; ++slot) {
            if (asd3dSoundActorIsPlaying(slot) == 0) {
                FUN_002cc1c0(selected = slot, &position);
                if (sound - 0x0100006C <= 255) {
                    FUN_002ebc68(sound, selected);
                    selected += 100000;
                } else if (sound - 0x0100016C <= 251) {
                    FUN_002cc08c(sound, selected);
                    break;
                }
                started = true;
            }
        }
        if (!started) {
            for (s32 slot = 0; slot < 16; ++slot) {
                s32 priority = asdSoundGetPlayerPriority(reinterpret_cast<u32>(FUN_002ebc34(slot)));
                if (greatestPriority < priority) {
                    replacement = slot;
                    greatestPriority = priority;
                }
            }
            if (replacement != -1)
                FUN_002cc08c(sound, replacement);
        }
    }
    return selected;
}
}
