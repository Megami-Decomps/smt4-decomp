/* NON_MATCHING: Earned-bit addressing folds the retail final base adjustment into LDRB. */
#include "gamedata/DataTable.h"
#include "shard/Shard003D.h"
struct UnlockTableRecord {
    /* 0x00 */ u8 unk00[0x2C];
};
extern "C" GameBlock2830C* gameDataBlocksGetSaveData(void);

static __inline bool unlockBitIsEarned(s32 index)
{
    s32 byteIndex = index / 8;
    s32 bitIndex = index % 8;
    return (gameDataBlocksGetSaveData()->unlocks.earned[byteIndex] & (1u << bitIndex)) != 0;
}

extern "C" s32 FUN_0035a9fc(void)
{
    s32 count = (s32)dataTableGetCount(dataTableGet(0x4A, 0));
    s32 earned = 0;
    for (s32 index = 0; index < count; ++index) {
        UnlockTableRecord* entry = (UnlockTableRecord*)dataTableGetEntries(dataTableGet(0x4A, 0)) + index;
        if (entry != NULL && unlockBitIsEarned(index)) {
            ++earned;
        }
    }
    return earned;
}
