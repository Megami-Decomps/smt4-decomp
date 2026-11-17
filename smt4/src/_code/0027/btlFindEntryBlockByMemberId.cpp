/* NON_MATCHING: with the NULL result held in a local the instruction sequence is retail's; only the outer index lives in r5 instead of retail's r3. */
#include "battle/BtlMainAccess.h"
#include "battle/BtlGlobals.h"

extern "C" {

/* Returns the block (+0xCC) of the first battle entry whose id list contains `id`, or NULL. */
BtlUnitData *btlFindEntryBlockByMemberId(BtlMainState *battle, s32 id)
{
    BtlUnitData *result = NULL;
    for (s32 i = 0; i < 109; i++) {
        for (s32 j = 0; j < 0x32; j++) {
            s32 value = battle->entries[i].ids[j];
            if (value < 0) {
                break;
            }
            if (value == id) {
                /* the entry's data block: the entry from 0xCC on */
                result = reinterpret_cast<BtlUnitData *>(reinterpret_cast<u8 *>(&battle->entries[i]) + 0xCC);
                return result;
            }
        }
    }
    return result;
}

} /* extern "C" */
