/* NON_MATCHING: retail compares the threshold against the ID, reversing the compiler's CMP operands. */
#include "shard/W6_W6Match2_RecordCategory.h"

extern "C" CategoryRecord* dataTable1bOr1cGetRecord(u32 recordId);

// Category-nine records are active only in game mode 24.
extern "C" s32 FUN_00333aac(u32 recordId)
{
    if (recordId >= 0x15e) {
        CategoryRecord* record = dataTable1bOr1cGetRecord(recordId);
        if (record == NULL) {
            return 0;
        }
        if (record->category == 9 && g_gameState.mode == 24) {
            return 1;
        }
    }
    return 0;
}
