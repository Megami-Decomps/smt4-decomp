/* NON_MATCHING: the bounded record accessor and nested persistent-data address form use different registers and one fewer address-add instruction. */
#include "shard/W4_W4Match6b_GameDataBlock.h"
#include "AsdSDK/AsdMemCopy.h"

extern "C" {
void rt_aeabi_memclr(void *destination, u32 bytes);
}

static __inline SavedRecord100 *getSavedRecord(s32 index)
{
    if (index >= 32) {
        return NULL;
    }
    SavedRecordTable *table = (SavedRecordTable *)g_gameDataBlocks.saveBlock;
    return &table->records[index];
}

/* Remove one saved record, shifting later records down and clearing the last. */
extern "C" void FUN_0036d4b0(s32 index)
{
    if ((u32)index >= 32) {
        return;
    }
    for (; index < 31; ++index) {
        FUN_002e59f8(getSavedRecord(index + 1), getSavedRecord(index), sizeof(SavedRecord100));
    }
    rt_aeabi_memclr(getSavedRecord(31), sizeof(SavedRecord100));
}
