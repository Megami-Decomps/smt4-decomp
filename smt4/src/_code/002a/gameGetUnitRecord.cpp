/* NON_MATCHING: compiler combines the record base offsets and allocates the index arithmetic differently. */
#include "common.h"

namespace {
struct UnitRecord { u8 data[0x604]; };
struct GameData { u8 padding[0x8c]; struct Slot { u8 padding[0x90]; u8 data[0x574]; } slots[1]; };
struct GameBlocks { u32 first; GameData *data; };
}

extern "C" {
/* Computes or forwards the requested value. */
extern GameBlocks g_gameDataBlocks;
UnitRecord *gameGetUnitRecord(u32 index)
{
    return (UnitRecord *)g_gameDataBlocks.data->slots[index].data;
}
}
