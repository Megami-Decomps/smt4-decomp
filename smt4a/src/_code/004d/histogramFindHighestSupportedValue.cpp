/* NON_MATCHING: retail forms the histogram base after testing the scan bounds; this build keeps the base across sysMemClear. */
#include "gamedata/GameData.h"
#include "AsdSDK/AsdMemUtil.h"
#include "gamedata/GameSaveDataA.h"
#include "Model/MoriModelManager.h"
#include "code/Code002a_Smt4a.h"

extern "C" {
u16 *gameDataGetSmallBlock(void);

/* Finds the highest populated level with enough support in its five-level neighborhood. */
s32 histogramFindHighestSupportedValue(void)
{
    enum { MIN_LEVEL = 1, MAX_LEVEL = 999, FREQUENCY_CAP = 20, MIN_SUPPORT = 3, SUPPORT_RADIUS = 5 };
    s32 first = gameDataGetSmallBlock()[4];
    s32 last = gameDataGetSmallBlock()[5];
    u8 histogram[MAX_LEVEL + 1];
    sysMemClear(histogram, sizeof(histogram));
    for (s32 index = first; index <= last; ++index) {
        if (compendiumEntryIsRegistered((u16)index)) {
            GameSaveBodyA *save = (GameSaveBodyA *)gameDataBlocksGetSaveData();
            GameSavedItemA *entry = &save->items[index];
            u32 level = entry->level;
            if (level - MIN_LEVEL <= MAX_LEVEL - MIN_LEVEL && histogram[level] < FREQUENCY_CAP) {
                ++histogram[level];
            }
        }
    }
    s32 result = 0;
    for (s32 level = MAX_LEVEL; level > 0; --level) {
        s32 frequency = histogram[level];
        if (frequency == 0) {
            continue;
        }
        s32 support = frequency;
        if (support >= MIN_SUPPORT) {
            result = level;
            break;
        }
        for (s32 distance = 1; distance <= SUPPORT_RADIUS; ++distance) {
            if (level - distance > 0 && histogram[level - distance] != 0) {
                support += frequency;
                if (support >= MIN_SUPPORT) {
                    result = level;
                    break;
                }
            }
        }
        if (result != 0) {
            break;
        }
    }
    return result != 0 ? result : MIN_LEVEL;
}
} /* extern "C" */
