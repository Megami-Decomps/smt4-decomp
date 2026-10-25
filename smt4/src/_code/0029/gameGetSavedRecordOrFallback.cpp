#include "common.h"

namespace {
struct Record { u8 data[8]; };
struct GameDataBlock { u8 padding[0x24b2c]; Record records[2]; };
struct GameData { u8 padding[0x88]; GameDataBlock block; };
struct Blocks { u32 first; GameData *data; };
}
extern "C" {
extern Blocks g_gameDataBlocks;

/* Returns a saved record for the first two indices, otherwise the supplied fallback. */
Record *gameGetSavedRecordOrFallback(u32 index, Record *fallback)
{
    Record *result = fallback;
    if (index == 0 || index == 1) {
        GameDataBlock *block = &g_gameDataBlocks.data->block;
        result = &block->records[index];
    }
    return result;
}
}
