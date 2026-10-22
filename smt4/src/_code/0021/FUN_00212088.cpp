/* NON_MATCHING: The choice base and count accumulator use different registers across the availability call and unrolled loop. */
#include "shard/GameDataBlocks.h"
extern "C" s32 statusGetAvailableChoiceCount(void);

extern "C" s32 FUN_00212088(void)
{
    StatusChoiceData* choices = &g_gameDataBlocks.saveBlock->statusChoices;
    s32 count = statusGetAvailableChoiceCount();
    s32 used = 0;
    for (s32 index = 0; index < count; ++index) {
        if (choices->choices[index] != 0) {
            ++used;
        }
    }
    return used;
}
