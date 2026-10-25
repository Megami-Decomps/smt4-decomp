/* NON_MATCHING: register allocation only (retail uses r0 for the NULL result and r2-r6 for the walk, the build r0/r2-r5); instruction sequence is the same. */
#include "battle/BtlMainAccess.h"

extern "C" {

/* Returns the block (+0xCC) of the first battle entry whose id list contains `id`, or NULL. */
u8 *FUN_0027da30(BtlMainState *battle, s32 id)
{
    for (s32 i = 0; i < 109; i++) {
        for (s32 j = 0; j < 0x32; j++) {
            s32 value = battle->entries[i].members.ids[j];
            if (value < 0) {
                break;
            }
            if (value == id) {
                return reinterpret_cast<u8 *>(&battle->entries[i]) + 0xCC;
            }
        }
    }
    return NULL;
}

} /* extern "C" */
