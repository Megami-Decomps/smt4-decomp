/* NON_MATCHING: one position-setter argument move uses r6 rather than retail r4; all other instructions match. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"

extern "C" {
void *jyoucyuGetTableEntry(u32 table);
s32 FUN_00162ea4();
s32 asd3dSoundActorIsPlaying(s32 channel);
void FUN_0032cc8c(s32 channel, const BattleVector3 *position);
void FUN_0036bca0(u32 sound, s32 channel);
void FUN_0032cb58(u32 sound, s32 channel);
void *FUN_0036bc6c(s32 channel);
s32 asdSoundGetPlayerPriority(void *player);

// Start a sound on free actor channels, or choose the highest-priority replacement channel.
s32 FUN_003d4ed8(u32 sound, BattleVector3 position)
{
    s32 result = -1;
    bool assigned = false;
    s32 highestPriority = -1;
    s32 replacement = -1;
    if (!jyoucyuGetTableEntry(1) && !FUN_00162ea4()) {
        for (s32 channel = 0; channel < 16; ++channel) {
            if (!asd3dSoundActorIsPlaying(channel)) {
                result = channel;
                FUN_0032cc8c(channel, &position);
                if (sound - 0x100007c <= 0x190) {
                    FUN_0036bca0(sound, result);
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
                s32 priority = asdSoundGetPlayerPriority(FUN_0036bc6c(channel));
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
