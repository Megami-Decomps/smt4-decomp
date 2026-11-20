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
    enum { AREAS_PER_EVENT_GROUP = 20 };
    s32 id;
    switch (g_gameState.mapId) {
    case 28:
        id = g_gameState.areaId;
        break;
    case 29:
        id = g_gameState.areaId + AREAS_PER_EVENT_GROUP;
        break;
    case 30:
        id = g_gameState.areaId + 2 * AREAS_PER_EVENT_GROUP;
        break;
    case 31:
        id = g_gameState.areaId + 3 * AREAS_PER_EVENT_GROUP;
        break;
    default:
        return 0;
    }
    if (id != 0 && gameFlagsTestThirdBank((s16)id) == 0) {
        if (flagsBit7Get(g_gameState.mapId, g_gameState.areaId) == 0) {
            return 0;
        }
        const EncountRecordA *record = dataTable02FindConditionalMapRecord(g_gameState.mapId, g_gameState.areaId);
        if ((s32)partyGetAverageLevel(2) < record->levelThreshold) {
            gameFlagsWriteBit((s16)id, 1);
            return randRange(1) + 1;
        }
    }
    return 0;
}

} /* extern "C" */
