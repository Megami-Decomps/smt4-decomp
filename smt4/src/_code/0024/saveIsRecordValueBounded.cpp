#include "common.h"
extern "C" {
struct SavedUnitValue { u8 unk00[0x2C]; u16 value; u8 unk2E[6]; };
struct SavedUnitTable { u8 unk00[0xC1F8]; SavedUnitValue entries[0x501]; };
struct SavedUnitGlobals { u32 unk00; SavedUnitTable *table; };
extern SavedUnitGlobals g_gameDataBlocks;
/* Read the selected saved-unit value, or zero beyond the table limit. */
u32 saveIsRecordValueBounded(u32 index)
{
    if (index > 0x500) {
        return 0;
    }
    SavedUnitTable *table = g_gameDataBlocks.table;
    SavedUnitValue *entry = &table->entries[index];
    return entry->value;
}
}
