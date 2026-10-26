#include "shard/GameDataBlocks.h"
extern "C" s32 statusGetAvailableChoiceCount(void);

extern "C" s32 statusCountSelectableChoices(void)
{
    s32 used = 0;
    StatusChoiceData* choices = &g_gameDataBlocks.saveBlock->statusChoices;
    s32 count = statusGetAvailableChoiceCount();
    for (s32 index = 0; index < count; ++index) {
        if (choices->choices[index] != 0) {
            ++used;
        }
    }
    return used;
}
