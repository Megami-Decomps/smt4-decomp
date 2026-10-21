/* NON_MATCHING: compiler folds the indexed save-record address differently from the retail two-step base. */
#include "common.h"
extern "C" {
struct SavedUnitValue { u8 unk00[0x2C]; u16 value; u8 unk2E[6]; };
struct SavedUnitTable { u8 unk00[0xC1F8]; SavedUnitValue entries[1281]; };
struct SavedUnitGlobals { u32 unk00; SavedUnitTable *table; };
extern SavedUnitGlobals g_gameDataBlocks;
/* Read the selected saved-unit value, or zero beyond the table limit. */
u32 saveIsRecordValueBounded(u32 index) { return index<=1280 ? g_gameDataBlocks.table->entries[index].value : 0; }
}
