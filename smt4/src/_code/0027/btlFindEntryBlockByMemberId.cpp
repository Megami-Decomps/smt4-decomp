/* NON_MATCHING: with the NULL result held in a local the instruction sequence is retail's; only the outer index lives in r5 instead of retail's r3. */
#include "battle/BtlMainAccess.h"

extern "C" {

/* Returns the block (+0xCC) of the first battle entry whose id list contains `id`, or NULL. */
u8 *btlFindEntryBlockByMemberId(BtlMainState *battle, s32 id)
{
    u8 *result = NULL;
    for (s32 i = 0; i < 109; i++) {
        for (s32 j = 0; j < 0x32; j++) {
            s32 value = battle->entries[i].members.ids[j];
            if (value < 0) {
                break;
            }
            if (value == id) {
                result = reinterpret_cast<u8 *>(&battle->entries[i]) + 0xCC;
                return result;
            }
        }
    }
    return result;
}

} /* extern "C" */
