/* NON_MATCHING: compiler folds the two accepted indices into a range check and combines record offsets. */
#include "common.h"

namespace {
struct Record { u8 data[8]; };
struct GameData { u8 padding[0x24bb4]; Record records[2]; };
struct Blocks { u32 first; GameData *data; };
}
extern "C" {
extern Blocks g_gameDataBlocks;

/* Returns a saved record for the first two indices, otherwise the supplied fallback. */
Record *FUN_00298d98(u32 index, Record *fallback)
{
    return index < 2 ? &g_gameDataBlocks.data->records[index] : fallback;
}
}
