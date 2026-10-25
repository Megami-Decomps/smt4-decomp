#include "gamedata/UnitRecordAccess.h"

namespace {
struct GameData { u8 padding[0x8c]; struct Slot { u8 padding[0x90]; u8 data[0x574]; } slots[1]; };
struct GameBlocks { u32 first; GameData *data; };
}

extern "C" {
extern GameBlocks g_gameDataBlocks;
void *gameGetUnitRecord(u32 index)
{
    GameData::Slot *slots = g_gameDataBlocks.data->slots;
    return slots[index].data;
}
}
