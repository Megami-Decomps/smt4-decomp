/* NON_MATCHING: getter ldr r0,[r0,#4] (game-state submode) compiled in the same multifile run (r1 live across it); getter not in image. */
#include "map/mapDepart.h"
#include "gamedata/EncountData.h"
#include "game/GameStateA.h"
#include "gamedata/FlagBitTests.h"

extern "C" {

s32 gameFlagsTestThirdBank(void);
f32 partyGetAverageLevel(s32 kind);
void gameFlagsWriteBit(s32 flag, s32 value);
s32 randRange(u32 max);

/* Returns the one-time event flag of the current area in modes 28-31, or 0. */
static __inline s32 areaEventFlag(void)
{
    s32 flag = g_gameState.areaId;

    switch (g_gameState.mapId) {
    case 28:
        return flag;
    case 29:
        return flag + 20;
    case 30:
        return flag + 40;
    case 31:
        return flag + 60;
    }
    return 0;
}

/* In modes 28-31, fires the current area's one-time event when its threshold exceeds the current
 * value: sets its flag and returns 1 or 2; returns 0 otherwise. */
s32 FUN_00272d44(void)
{
    s32 id = areaEventFlag();
    s16 flag;
    EncountRecordA *record;

    if (id == 0) {
        return 0;
    }
    flag = id;
    if (gameFlagsTestThirdBank() != 0) {
        return 0;
    }
    if (flagsBit7Get(g_gameState.mapId, g_gameState.areaId) == 0) {
        return 0;
    }
    record = dataTable02FindConditionalMapRecord(g_gameState.mapId, g_gameState.areaId);
    if ((s32)partyGetAverageLevel(2) >= record->levelThreshold) {
        return 0;
    }
    gameFlagsWriteBit(flag, 1);
    return randRange(1) + 1;
}

} /* extern "C" */
