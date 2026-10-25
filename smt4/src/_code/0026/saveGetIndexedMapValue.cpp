#include "common.h"
extern "C" {
struct SavedRecord { u8 data[0x4C]; };
struct SavedRecordBlock { u8 unk00[0x2478C]; SavedRecord entries[12]; };
struct SavedRecordImage { u8 unk00[0x88]; SavedRecordBlock block; };
struct SavedRecordGlobals { u32 unk00; SavedRecordImage *image; };
extern SavedRecordGlobals g_gameDataBlocks;
/* Return one of twelve fixed-size saved records. */
SavedRecord *saveGetIndexedMapValue(u32 index)
{
    SavedRecord *record = NULL;
    if (index < 12) {
        SavedRecordBlock *block = &g_gameDataBlocks.image->block;
        record = &block->entries[index];
    }
    return record;
}
}
