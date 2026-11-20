/* NON_MATCHING: written as smt4's FUN_002e8a78; the loop index and the record pointer take each other's register (r5/r4 here, r4/r5 in retail), the effect position loads its x after the y sum, and the scaled arm multiplies z first (retail x, y, z). */
#include "map/MapIfGlobals.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {

/* Activate the first nearby eligible map record and emit its proximity effect. */
void FUN_003659f4(MapVector position)
{
    MapIfStateA *map = g_mapIf.state;
    for (s32 i = 0; i < 128; ++i) {
        MapIfRecord *record = &map->records[i];
        if (record->active &&
            (record->category == 0x1d || record->category == 0x31 || record->category == 0x1e ||
             record->category == 0x1f || record->category == 0x30 || record->category == 0x22 ||
             record->category == 0x23) && record->state == 6) {
            if (distSpatial(position, record->position) < 10.0f) {
                SoundActorQueuePosition effect = { record->position.x, position.y + 120.0f, record->position.z };
                if (!g_gameState.inputBlocked) {
                    if (record->category == 0x31 || record->category == 0x30) {
                        effect.x *= 1.0f / 3.0f;
                        effect.y *= 1.0f / 3.0f;
                        effect.z *= 1.0f / 3.0f;
                        soundActorStartOnFreeChannel(0x10002ab, effect);
                    } else {
                        soundActorStartOnFreeChannel(0x10002ab, effect);
                    }
                }
                record->state = 7;
                record->proximityTimer = 0;
                return;
            }
        }
    }
}
}
