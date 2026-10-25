/* NON_MATCHING: map request prefix and slot-relative fields are corrected; ambient-effect register scheduling still differs. */
#include "map/mapObj.h"
#include "map/mapDepart.h"
#include "util/TrigF32.h"

extern "C" {
extern MapObjectState *g_mapObj;
extern GameState g_gameState;
void FUN_002671f4(s32 slot, MapVector position, f32 heading, f32 a, f32 b, f32 c);
}

static inline MapVector mapObjectPosition(const MapObjectSlot *object)
{
    MapVector position = { object->unk04, object->unk08, object->unk0c };
    return position;
}

/* Spawn the effect of one map object kind, offset along its heading. */
static __inline void spawnOffsetEffect(const MapObjectSlot *object, f32 height, f32 distance, f32 a, f32 b, f32 c)
{
    MapVector position = mapObjectPosition(object);
    position.y -= height;
    position.x += FUN_0028250c(object->unk1c * 0.017453292f) * distance;
    position.z += FUN_00282390(object->unk1c * 0.017453292f) * distance;
    FUN_002671f4(0, position, object->unk1c, a, b, c);
}

/* Spawn the ambient effects of every active map object, by kind. */
extern "C" void FUN_0027ae90(void)
{
    for (s32 i = 0; i < 24; i++) {
        MapObjectSlot *object = &g_mapObj->slots[i];
        if (object->active == 0)
            continue;
        if (g_gameState.unk000 != 4 || g_gameState.unk004Value != 1) {
            if (object->state == 2)
                spawnOffsetEffect(object, 400.0f, 20.0f, 80.0f, 350.0f, 50.0f);
            if (object->state == 10)
                spawnOffsetEffect(object, 550.0f, 20.0f, 80.0f, 500.0f, 50.0f);
        }
        if (object->state == 7)
            spawnOffsetEffect(object, 0.0f, -17.5f, 200.0f, 300.0f, 50.0f);
        if (object->state == 9)
            spawnOffsetEffect(object, 0.0f, -17.5f, 150.0f, 300.0f, 50.0f);
        if (object->state == 11)
            spawnOffsetEffect(object, 0.0f, -17.5f, 200.0f, 300.0f, 50.0f);
        if (object->state == 15)
            FUN_002671f4(0, mapObjectPosition(object), object->unk1c, 50.0f, 50.0f, 50.0f);
        if (object->state == 16)
            FUN_002671f4(0, mapObjectPosition(object), object->unk1c, 50.0f, 50.0f, 50.0f);
        if (object->state == 17)
            FUN_002671f4(0, mapObjectPosition(object), object->unk1c, 100.0f, 50.0f, 60.0f);
    }
}
