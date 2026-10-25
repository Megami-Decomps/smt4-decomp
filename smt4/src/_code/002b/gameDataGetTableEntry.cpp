#include "common.h"

namespace {
struct RecordRegion {
    /* 0x00000 */ u8 padding[0x1ec54];
    /* 0x1ec54 */ u32 value;
};
struct GameData {
    /* 0x00 */ u8 padding[0x88];
    /* 0x88 */ u32 records[1];
};
struct Blocks { u32 first; GameData *data; };
}

extern "C" {
extern Blocks g_gameDataBlocks;
u32 gameDataFindEntryIndex(void);

/* Returns the current indexed record's trailing value address. */
u32 *gameDataGetTableEntry(void)
{
    u32 index = gameDataFindEntryIndex();
    u32 *records = g_gameDataBlocks.data->records;
    RecordRegion *record = (RecordRegion *)&records[index];
    return &record->value;
}
}
