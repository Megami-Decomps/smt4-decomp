/* Fills the 3-word result for slot `index` of the table: copies the slot's pair and appends the FUN_001d13dc value; returns 1. */
#include "common.h"

extern "C" {

typedef struct SlotData {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
    /* 0x08 */ u8 unk08[0x0C];
} SlotData; /* 0x14 */

typedef struct SlotTable {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 *slots;       /* 0x14-byte slots; the pair lives at +4 */
} SlotTable;

typedef struct SlotResult {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
    /* 0x08 */ u32 value;
} SlotResult;

extern u32 FUN_001d13dc(u32 *pair);

/* A pass-through hook the release build removed (armlink turned the call into a nop). */
__weak u32 FUN_001cd210_hook(u32 value);

u32 slotTableFillResult(SlotTable *table, SlotResult *result, s32 index)
{
    u32 *pair = (u32 *)(table->slots + index * 0x14 + 4);

    result->first = pair[0];
    result->second = pair[1];
    result->value = FUN_001cd210_hook(FUN_001d13dc(pair));
    return 1;
}

}
