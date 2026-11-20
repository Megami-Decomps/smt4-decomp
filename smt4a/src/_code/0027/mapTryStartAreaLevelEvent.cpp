/* NON_MATCHING: the area read may be an inlined getter; the flag narrowing and zero-return blocks also differ. */
#include "util/Random.h"
#include "map/mapDepart.h"
#include "gamedata/EncountData.h"
#include "game/GameStateA.h"
#include "gamedata/FlagBitTests.h"
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {

f32 partyGetAverageLevel(s32 kind);
void gameFlagsWriteBit(s32 flag, s32 value);

/* Fires the current area's one-time event when the party's level is below its threshold. */
s32 mapTryStartAreaLevelEvent(void)
{
    s32 id = g_gameState.areaId;
    switch (g_gameState.mapId) {
    case 28:
        break;
    case 29:
        id += 20;
        break;
    case 30:
        id += 40;
        break;
    case 31:
        id += 60;
        break;
    default:
        return 0;
    }
    if (id != 0) {
        s16 flag = (s16)id;
        if (gameFlagsTestThirdBank(flag) == 0 && flagsBit7Get(g_gameState.mapId, g_gameState.areaId) != 0) {
            EncountRecordA *record = dataTable02FindConditionalMapRecord(g_gameState.mapId, g_gameState.areaId);
            if ((s32)partyGetAverageLevel(2) < record->levelThreshold) {
                gameFlagsWriteBit(flag, 1);
                return randRange(1) + 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
