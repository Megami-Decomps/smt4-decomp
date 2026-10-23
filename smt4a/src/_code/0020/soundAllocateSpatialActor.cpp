#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {
void FUN_0032cc8c(s32, const Vector4 *);
void FUN_00359768(u32, s32, u32);
void FUN_0036bca0(u32, s32);
s32 asd3dSoundActorIsPlaying(s32);
s32 asdSoundGetPlayerPriority(void *);
u32 FUN_0014af98(void);
s32 FUN_00162ea4(void);
void *jyoucyuGetTableEntry(u32);
void *FUN_0036bc6c(s32);

// Choose a free spatial sound actor or replace the highest-priority fallback candidate.
s32 soundAllocateSpatialActor(u32 sound, Vector4 position)
{
    s32 selected = -1;
    bool allocated = false;
    s32 highestPriority = -1;
    s32 replacement = -1;
    u32 context = FUN_0014af98();
    if (!jyoucyuGetTableEntry(1) && !FUN_00162ea4()) {
        for (s32 actor = 0; actor < 16; ++actor) {
            if (!asd3dSoundActorIsPlaying(actor)) {
                selected = actor;
                FUN_0032cc8c(selected, &position);
                if (sound - 0x100007cu <= 400) {
                    FUN_0036bca0(sound, selected);
                    selected += 100000;
                } else if (sound - 0x100020du <= 261) {
                    FUN_00359768(sound, selected, context);
                    break;
                }
                allocated = true;
            }
        }
        if (!allocated) {
            for (s32 actor = 0; actor < 16; ++actor) {
                s32 priority = asdSoundGetPlayerPriority(FUN_0036bc6c(actor));
                if (highestPriority < priority) {
                    highestPriority = priority;
                    replacement = actor;
                }
            }
            if (replacement != -1)
                FUN_00359768(sound, replacement, context);
        }
    }
    return selected;
}
}
