#include "shard/W6_W6Match2_RecordCategory.h"

extern "C" CategoryRecord* dataTable1bOr1cGetRecord(u32 recordId);

// Category-nine records are active only in game mode 24.
extern "C" s32 recordCategoryNineIsActiveInMode24(u32 recordId)
{
    if (recordId < 0x15e) {
        return 0;
    }
    CategoryRecord* record = dataTable1bOr1cGetRecord(recordId);
    if (record == NULL) {
        return 0;
    }
    if (record->category == 9 && g_gameState.mode == 24) {
        return 1;
    }
    return 0;
}
