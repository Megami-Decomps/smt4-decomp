/* NON_MATCHING: retail compares the threshold against the ID, reversing the compiler's CMP operands. */
#include "shard/W6_W6Match2_RecordCategory.h"

extern "C" CategoryRecord* FUN_001ad9b4(u32 recordId);

// Category-nine records are active only in game mode 24.
extern "C" s32 FUN_003dee58(u32 recordId)
{
    if (recordId >= 0x15e) {
        CategoryRecord* record = FUN_001ad9b4(recordId);
        if (record == NULL) {
            return 0;
        }
        if (record->category == 9 && g_gameState.mode == 24) {
            return 1;
        }
    }
    return 0;
}
