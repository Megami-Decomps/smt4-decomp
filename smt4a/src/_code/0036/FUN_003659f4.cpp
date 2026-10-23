/* NON_MATCHING: actor/index and coordinate registers differ; effect-branch placement and VFP scheduling differ. */
#include "map/mapIf.h"
#include "map/mapDepart.h"

extern "C" {
extern MapIfStateA *g_mapIf;
extern GameStateA g_gameState;
f32 distSpatial(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);
void FUN_003d4ed8(u32 effect, f32 x, f32 y, f32 z);

/* Activate the first nearby eligible map record and emit its proximity effect. */
void FUN_003659f4(f32 x, f32 y, f32 z)
{
    MapIfStateA *map = g_mapIf;
    for (s32 i = 0; i < 128; ++i) {
        MapIfRecord *record = &map->records[i];
        if (!record->active)
            continue;
        s32 category = record->display.category;
        if (
            (category == 0x1d || category == 0x31 || category == 0x1e || category == 0x1f ||
             category == 0x30 || category == 0x22 || category == 0x23) && record->state == 6) {
            union { f32 value; s32 bits; } distance;
            distance.value = distSpatial(x, y, z, record->position.x, record->position.y, record->position.z);
            if (distance.bits < 0x41200000) {
                if (!g_gameState.inputBlocked) {
                    f32 effectX = record->position.x;
                    f32 effectY = y + 120.0f;
                    f32 effectZ = record->position.z;
                    if (record->display.category != 0x31 && record->display.category != 0x30) {
                        FUN_003d4ed8(0x10002ab, effectX, effectY, effectZ);
                    } else {
                        FUN_003d4ed8(0x10002ab, effectX * 0.33333334f,
                                     effectY * 0.33333334f, effectZ * 0.33333334f);
                    }
                }
                record->state = 7;
                record->proximity.timer = 0;
                return;
            }
        }
    }
}
}
