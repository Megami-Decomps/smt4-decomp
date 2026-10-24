/* NON_MATCHING: instruction scheduling and register choice only (same statements, different order of the address adds and stores) */
/* Builds the battle unit snapshot for `unitId` and records the battle entry mode: 6 for a demon-side request, 2
 * otherwise, plus the request's flag byte. */
#include "shard/GameGlobals.h"

extern "C" {
void btlBuildUnitSnapshot(void *snapshot, u32 unitId);

void FUN_0029d8f4(u32 unitId, s32 demonSide, u8 flag)
{
    GameData *data = g_gameGlobals.data;

    btlBuildUnitSnapshot(&data->unk1300, unitId);
    data->unk1E66 = demonSide != 0 ? 6 : 2;
    data->unk1E70[0] = flag;
    data->unk1EB8 = 1;
    data->unk1E71 = 0;
}
}
