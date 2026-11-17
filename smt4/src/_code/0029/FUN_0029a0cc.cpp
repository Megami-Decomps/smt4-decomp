#include "common.h"
#include "game/GameGlobalsRef.h"

namespace {
struct UnitRecord;
}

extern "C" {
void FUN_0024d94c(void *record, UnitRecord *unit);

/* Forwards the game data's record at 0x18B0 and the unit to FUN_0024d94c. */
void FUN_0029a0cc(UnitRecord *unit)
{
    GameData *data = g_gameGlobals.data;
    FUN_0024d94c(data->unk18B0, unit);
}
}
