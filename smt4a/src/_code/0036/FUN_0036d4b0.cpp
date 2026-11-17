/* NON_MATCHING: control flow and every instruction match except registers in the two record address
 * computations (retail loads the save block into a register separate from the +0x88 body pointer). */
#include "shard/W4_W4Match6b_GameDataBlock.h"
#include "AsdSDK/AsdMemCopy.h"

extern "C" {
void rt_aeabi_memclr(void *destination, u32 bytes);
}

/* The saved records as the save body (the block's part at +0x88) holds them. */
struct SavedRecordBody {
    /* 0x00000 */ u8 unk00000[0x27184];
    /* 0x27184 */ SavedRecord100 records[32];
};

static __inline SavedRecord100 *getSavedRecord(u32 index)
{
    SavedRecord100 *record = NULL;
    if (index < 32) {
        SavedRecordBody *body = (SavedRecordBody *)&g_gameDataBlocks.saveBlock->body;
        record = &body->records[index];
    }
    return record;
}

/* Overwrites saved record `index` (when in range) with a copy of `record`. */
static __inline void setSavedRecord(u32 index, const SavedRecord100 *record)
{
    if (index >= 32) {
        return;
    }
    SavedRecordBody *body = (SavedRecordBody *)&g_gameDataBlocks.saveBlock->body;
    memcpySrcFirst(record, &body->records[index], sizeof(SavedRecord100));
}

/* Remove one saved record, shifting later records down and clearing the last. */
extern "C" void FUN_0036d4b0(s32 index)
{
    if ((u32)index >= 32) {
        return;
    }
    for (; index < 31; ++index) {
        setSavedRecord(index, getSavedRecord(index + 1));
    }
    rt_aeabi_memclr(getSavedRecord(31), sizeof(SavedRecord100));
}
