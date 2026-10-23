/* NON_MATCHING: sound-slot selector register allocation and stack-frame layout differ. */
#include "common.h"
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {
s32 jyoucyuGetTableEntry(u32 index);
s32 FUN_002c1d5c(void);
s32 asd3dSoundActorIsPlaying(s32 slot);
void FUN_002cc1c0(s32 slot, Vector4 *position);
void FUN_002ebc68(u32 sound, s32 slot);
void FUN_002cc08c(u32 sound, s32 slot);
void *FUN_002ebc34(s32 slot);
s32 asdSoundGetPlayerPriority(void *player);

/* Find an idle sound actor, or replace the player with the greatest priority value. */
s32 FUN_00291e40(u32 sound)
{
    s32 selected = -1;
    bool started = false;
    s32 greatestPriority = -1;
    s32 replacement = -1;
    Vector4 position;
    if (jyoucyuGetTableEntry(1) == 0 && FUN_002c1d5c() == 0) {
        for (s32 slot = 0; slot < 16; ++slot) {
            if (asd3dSoundActorIsPlaying(slot) == 0) {
                selected = slot;
                FUN_002cc1c0(slot, &position);
                if (sound - 0x0100006C <= 255) {
                    FUN_002ebc68(sound, slot);
                    selected = slot + 100000;
                } else if (sound - 0x0100016C <= 251) {
                    FUN_002cc08c(sound, slot);
                    break;
                }
                started = true;
            }
        }
        if (!started) {
            for (s32 slot = 0; slot < 16; ++slot) {
                s32 priority = asdSoundGetPlayerPriority(FUN_002ebc34(slot));
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
