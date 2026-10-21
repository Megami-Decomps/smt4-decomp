/* NON_MATCHING: compiler folds the save-array base differently from the retail nested-header addressing. */
#include "common.h"
extern "C" {
struct SavedRecord { u8 data[0x4C]; };
struct SavedRecordImage { u8 unk00[0x24814]; SavedRecord entries[12]; };
struct SavedRecordGlobals { u32 unk00; SavedRecordImage *image; };
extern SavedRecordGlobals g_gameDataBlocks;
/* Return one of twelve fixed-size saved records. */
SavedRecord *saveGetIndexedMapValue(u32 index) { return index<12 ? &g_gameDataBlocks.image->entries[index] : NULL; }
}
