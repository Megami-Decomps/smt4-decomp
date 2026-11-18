/* NON_MATCHING: block layout matches retail (scaled arm first, vector computed before the input-blocked test); remaining: the loop index/record registers (retail r4/r5) are swapped, retail loads the effect x before z, multiplies x, y, z in order, and pools 120.0f before g_gameState. */
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
        if (!record->active)
            continue;
        s32 category = record->category;
        if (
            (category == 0x1d || category == 0x31 || category == 0x1e || category == 0x1f ||
             category == 0x30 || category == 0x22 || category == 0x23) && record->state == 6) {
            union { f32 value; s32 bits; } distance;
            distance.value = distSpatial(position, record->position);
            if (distance.bits < 0x41200000) {
                f32 effectX = record->position.x;
                f32 effectY = position.y + 120.0f;
                f32 effectZ = record->position.z;
                if (!g_gameState.inputBlocked) {
                    if (record->category == 0x31 || record->category == 0x30) {
                        SoundActorQueuePosition scaled = {effectX * 0.33333334f, effectY * 0.33333334f, effectZ * 0.33333334f};
                        soundActorStartOnFreeChannel(0x10002ab, scaled);
                    } else {
                        SoundActorQueuePosition effect = {effectX, effectY, effectZ};
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
