/* NON_MATCHING: retail computes the saved record's address in full (add #23552; add #644; ldrh [r0]) where the build folds
   the offset into the load, sets the histogram base (mov r6, sp) up after the bounds test, and keeps a separate found
   test for the frequency >= 3 exit. */
#include "gamedata/GameData.h"
#include "gamedata/GameSaveDataA.h"
#include "Model/MoriModelManager.h"
#include "code/Code002a_Smt4a.h"

extern "C" {
u16 *gameDataGetSmallBlock(void);
void sysMemClear(void *memory, u32 size);

// Find the highest populated record value with enough support in its five-value neighborhood.
s32 histogramFindHighestSupportedValue(void)
{
    u16 first = gameDataGetSmallBlock()[4];
    u16 last = gameDataGetSmallBlock()[5];
    u8 histogram[1000];
    sysMemClear(histogram, sizeof(histogram));
    for (s32 index = first; index <= last; ++index) {
        if (compendiumEntryIsRegistered(static_cast<u16>(index))) {
            GameSaveBodyA *save = (GameSaveBodyA *)gameDataBlocksGetSaveData();
            u32 value = save->items[index].variant;
            if (value >= 1 && value <= 999) {
                if (histogram[value] < 20)
                    ++histogram[value];
            }
        }
    }
    for (s32 value = 999; value > 0; --value) {
        s32 found = 0;
        s32 frequency = histogram[value];
        if (frequency != 0) {
            s32 support = frequency;
            if (support >= 3) {
                found = value;
            } else {
                for (s32 offset = 1; offset <= 5; ++offset) {
                    if (value - offset > 0 && histogram[value - offset] != 0) {
                        support += frequency;
                        if (support >= 3) {
                            found = value;
                            break;
                        }
                    }
                }
            }
        }
        if (found != 0)
            return found;
    }
    return 1;
}
}
