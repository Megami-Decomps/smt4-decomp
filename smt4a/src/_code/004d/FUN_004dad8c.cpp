/* NON_MATCHING: histogram bounds fold into conditional loads and threshold-return branches are simplified. */
#include "gamedata/GameData.h"

struct HistogramSaveRecordA {
    u16 value;
    u8 unk02[0x4e];
};
struct HistogramSaveViewA {
    u8 unk0000[0x5e84];
    HistogramSaveRecordA records[1];
};
extern "C" {
u16 *gameDataGetSmallBlock(void);
GameDataBlock *gameDataBlocksGetSaveData(void);
s32 FUN_002a4b28(u32 index);
void sysMemClear(void *memory, u32 size);

// Find the highest populated record value with enough support in its five-value neighborhood.
s32 FUN_004dad8c(void)
{
    s32 first = gameDataGetSmallBlock()[4];
    u16 last = gameDataGetSmallBlock()[5];
    u8 histogram[1000];
    sysMemClear(histogram, sizeof(histogram));
    for (s32 index = first; index <= last; ++index) {
        if (FUN_002a4b28(static_cast<u16>(index))) {
            const HistogramSaveViewA *save = reinterpret_cast<const HistogramSaveViewA *>(gameDataBlocksGetSaveData());
            u32 value = save->records[index].value;
            if (value - 1 < 999 && histogram[value] < 20)
                ++histogram[value];
        }
    }
    for (s32 value = 999; value > 0; --value) {
        s32 frequency = histogram[value];
        if (frequency != 0) {
            if (frequency >= 3)
                return value;
            s32 support = frequency;
            if ((value >= 2 && histogram[value - 1] && (support += frequency) >= 3) ||
                (value >= 3 && histogram[value - 2] && (support += frequency) >= 3) ||
                (value >= 4 && histogram[value - 3] && (support += frequency) >= 3) ||
                (value >= 5 && histogram[value - 4] && (support += frequency) >= 3) ||
                (value >= 6 && histogram[value - 5] && (support += frequency) >= 3))
                return value;
        }
    }
    return 1;
}
}
