#include "common.h"
#include "game/GameGlobalsRef.h"

namespace {
struct UnitRecord;
}

extern "C" {
void btlBuildDemonSnapshot(void *record, UnitRecord *unit);

/* Forwards the game data's record at 0x18B0 and the unit to btlBuildDemonSnapshot. */
void btlBuildDemonSnapshotFromSaveRecord(UnitRecord *unit)
{
    GameData *data = g_gameGlobals.data;
    btlBuildDemonSnapshot(data->unk18B0, unit);
}
}
