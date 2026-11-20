#include "common.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "sound/SoundPlayerPriority.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
s32 eventIsSkipping(void);
s32 asd3dSoundActorIsPlaying(s32 slot);
void asd3dSoundActorSetPosition(u32 slot, const SoundActorQueuePosition *position);
void asd3dSoundActorStart(u32 sound, s32 slot);
void spatialSoundActorStart(u32 sound, s32 slot);
void *asd3dSoundActorGetSlotValue(s32 slot);

/* Find an idle sound actor, or replace the player with the greatest priority value. */
u32 soundActorStartOnFreeChannel(u32 sound, SoundActorQueuePosition position)
{
    s32 selected = -1;
    bool started = false;
    s32 greatestPriority = -1;
    s32 replacement = -1;
    if (jyoucyuGetTableEntry(1) == 0 && eventIsSkipping() == 0) {
        for (s32 slot = 0; slot < 16; ++slot) {
            if (asd3dSoundActorIsPlaying(slot) == 0) {
                asd3dSoundActorSetPosition(selected = slot, &position);
                if (sound - 0x0100006C <= 255) {
                    asd3dSoundActorStart(sound, selected);
                    selected += 100000;
                } else if (sound - 0x0100016C <= 251) {
                    spatialSoundActorStart(sound, selected);
                    break;
                }
                started = true;
            }
        }
        if (!started) {
            for (s32 slot = 0; slot < 16; ++slot) {
                s32 priority = asdSoundGetPlayerPriority(reinterpret_cast<u32>(asd3dSoundActorGetSlotValue(slot)));
                if (greatestPriority < priority) {
                    replacement = slot;
                    greatestPriority = priority;
                }
            }
            if (replacement != -1)
                spatialSoundActorStart(sound, replacement);
        }
    }
    return selected;
}
}
