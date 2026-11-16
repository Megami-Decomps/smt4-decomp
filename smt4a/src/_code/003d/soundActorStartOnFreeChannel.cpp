#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {
s32 FUN_00162ea4();
u32 asd3dSoundActorIsPlaying(u32 channel);
void asd3dSoundActorSetPosition(u32 channel, const BattleVector3 *position);
u8 asd3dSoundActorStart(s32 sound, u32 channel);
u8 FUN_0032cb58(s32 sound, u32 channel);
u32 asd3dSoundActorGetSlotValue(u32 channel);
s32 asdSoundGetPlayerPriority(u32 soundId);

// Start a sound on free actor channels, or choose the highest-priority replacement channel.
s32 soundActorStartOnFreeChannel(u32 sound, BattleVector3 position)
{
    s32 result = -1;
    bool assigned = false;
    s32 highestPriority = -1;
    s32 replacement = -1;
    if (!jyoucyuGetTableEntry(1) && !FUN_00162ea4()) {
        for (s32 channel = 0; channel < 16; ++channel) {
            if (!asd3dSoundActorIsPlaying(channel)) {
                asd3dSoundActorSetPosition(result = channel, &position);
                if (sound - 0x100007c <= 0x190) {
                    asd3dSoundActorStart(sound, result);
                    result += 100000;
                } else if (sound - 0x100020d <= 0x105) {
                    FUN_0032cb58(sound, result);
                    break;
                }
                assigned = true;
            }
        }
        if (!assigned) {
            for (s32 channel = 0; channel < 16; ++channel) {
                s32 priority = asdSoundGetPlayerPriority(asd3dSoundActorGetSlotValue(channel));
                if (highestPriority < priority) {
                    highestPriority = priority;
                    replacement = channel;
                }
            }
            if (replacement != -1)
                FUN_0032cb58(sound, replacement);
        }
    }
    return result;
}
}
