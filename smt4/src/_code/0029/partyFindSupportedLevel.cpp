#include "gamedata/SavedUnitInitialization.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
u16 *gameDataBlocksGetCounterPtr(void);
u8 *gameDataBlocksGetSaveData(void);
u32 itemGetFlagBit1(u32 index);

// Find the highest registered level with enough support from its count and nearby occupied levels.
s32 partyFindSupportedLevel(void)
{
    s32 first = gameDataBlocksGetCounterPtr()[4];
    s32 last = gameDataBlocksGetCounterPtr()[5];
    u8 counts[100];
    memClear(counts, sizeof(counts));
    for (s32 index = first; index <= last; ++index) {
        if (itemGetFlagBit1((u16)index)) {
            SavedUnitDataBody *body = (SavedUnitDataBody *)gameDataBlocksGetSaveData();
            SavedUnitInitialization *unit = &body->units[index];
            u32 level = unit->values.level;
            if (level - 1 <= 98 && counts[level] < 20) {
                ++counts[level];
            }
        }
    }
    s32 result = 0;
    for (s32 level = 99; level > 0; --level) {
        s32 count = counts[level];
        if (count == 0) {
            continue;
        }
        s32 support = count;
        if (support >= 3) {
            result = level;
            break;
        }
        for (s32 distance = 1; distance <= 5; ++distance) {
            if (level - distance > 0 && counts[level - distance] != 0) {
                support += count;
                if (support >= 3) {
                    result = level;
                    break;
                }
            }
        }
        if (result != 0) {
            break;
        }
    }
    return result != 0 ? result : 1;
}
}
