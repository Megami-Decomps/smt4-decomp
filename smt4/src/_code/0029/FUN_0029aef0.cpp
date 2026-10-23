/* NON_MATCHING: retail expands the five lower-level support checks; the readable scan remains a loop and folds the level address. */
#include "gamedata/SavedUnitInitialization.h"

extern "C" {
u16 *gameDataBlocksGetCounterPtr(void);
u8 *gameDataBlocksGetSaveData(void);
u32 FUN_0029ea68(u32 index);
void memClear(void *memory, u32 size);

// Find the highest registered level with enough support from its count and nearby occupied levels.
s32 FUN_0029aef0(void)
{
    s32 first = gameDataBlocksGetCounterPtr()[4];
    s32 last = gameDataBlocksGetCounterPtr()[5];
    u8 counts[100];
    memClear(counts, sizeof(counts));
    for (s32 index = first; index <= last; ++index) {
        if (FUN_0029ea68((u16)index)) {
            SavedUnitDataBody *body = (SavedUnitDataBody *)gameDataBlocksGetSaveData();
            u32 level = body->units[index].values.level;
            if (level - 1 <= 98 && counts[level] < 20) {
                ++counts[level];
            }
        }
    }
    for (s32 level = 99; level > 0; --level) {
        s32 count = counts[level];
        if (count == 0) {
            continue;
        }
        s32 support = count;
        if (support >= 3) {
            return level;
        }
        for (s32 distance = 1; distance <= 5 && distance < level; ++distance) {
            if (counts[level - distance] != 0) {
                support += count;
                if (support >= 3) {
                    return level;
                }
            }
        }
    }
    return 1;
}
}
