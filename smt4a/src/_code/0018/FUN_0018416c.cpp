/* NON_MATCHING: save.sub@0x88 base is restored; ordered-row load scheduling, key narrowing and return tails differ. */
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {
extern GameDataBlocksA g_gameDataBlocks;
s32 gameFlagIsSet(u32);
u16 FUN_0019e52c(u32 key);

// Check whether the unit is in the unlocked portion of either saved availability list.
u32 FUN_0018416c(u32 unitId)
{
    struct SavedChoice { u16 id; u16 value; };
    struct AvailabilityView {
        u8 prefix[0x28310];
        SavedChoice ordered[20];
        SavedChoice categories[7];
    };
    typedef char AvailabilitySubOffsetCheck[offsetof(AvailabilityView, ordered) + 0x88 == 0x28398 ? 1 : -1];
    if (!gameFlagIsSet(0x45B))
        return 0;
    s32 rank = 0;
    u16 previous = 0;
    AvailabilityView *save = reinterpret_cast<AvailabilityView *>(&g_gameDataBlocks.saveBlock->save.sub);
    if (gameFlagIsSet(0x4F6)) {
        for (s32 i = 0; i < 20; ++i) {
            u16 id = save->ordered[i].id;
            u16 value = save->ordered[i].value & 0x3FF;
            if (previous != value) {
                rank = i + 1;
                previous = value;
            }
            if (id == unitId) {
                if (rank <= 10)
                    return 1;
                return 0;
            }
        }
    }
    if (gameFlagIsSet(0x4F7)) {
        for (s32 i = 0; i < 7; ++i) {
            u32 level = save->categories[i].value >> 10;
            u32 category = save->categories[i].id;
            for (s32 variant = 0; variant < 3; ++variant) {
                if (category - 1 < 8) {
                    s32 key = 0;
                    switch (category) {
                    case 1: key = 0xAE; break;
                    case 2: key = 0xAF; break;
                    case 3: key = 0xB0; break;
                    case 4: key = variant == 0 ? 0xB2 : 0xB9; break;
                    case 5:
                        if (variant == 0) key = 0xB1;
                        else if (variant == 1) key = 0xBF;
                        else key = 0xC0;
                        break;
                    case 6:
                    case 8: key = variant == 0 ? 0xB3 : 0xBA; break;
                    case 7: key = 5; break;
                    }
                    if (unitId == FUN_0019e52c(key))
                        return level - 1 <= 2;
                }
            }
        }
    }
    return 0;
}
}
