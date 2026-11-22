/* NON_MATCHING: 20 lines: in the state 2 and 7 blocks retail adds the cosine term into the saved z (vmla s18) before
 * the argument moves; the build copies z into s2 first, as retail does in the other three offset blocks. */
#include "map/mapObj.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "util/TrigF32.h"

extern "C" {
extern MapObjectState *g_mapObj;

void FUN_00281b94(s32 slot, MapVector position, f32 heading, f32 a, f32 b, f32 c);
}

static __inline MapVector mapObjectPosition(const MapObjectSlot *object)
{
    MapVector position = { object->unk04, object->unk08, object->unk0c };
    return position;
}

/* Spawn the ambient effects of every active map object, by kind. */
extern "C" void mapObjectSpawnAmbientEffects(void)
{
    for (s32 i = 0; i < 24; i++) {
        MapObjectSlot *object = &g_mapObj->slots[i];
        if (object->active == 0)
            continue;
        if (g_gameState.mapId != 4 || g_gameState.areaId != 1) {
            if (object->state == 2) {
                MapVector position;
                position.x = object->unk04;
                position.y = object->unk08;
                position.z = object->unk0c;
                position.y -= 400.0f;
                position.x += libm_sinf(object->unk1c * 0.017453292f) * 20.0f;
                position.z += libm_cosf(object->unk1c * 0.017453292f) * 20.0f;
                FUN_00281b94(0, position, object->unk1c, 80.0f, 350.0f, 50.0f);
            }
            if (object->state == 10) {
                MapVector position;
                position.x = object->unk04;
                position.y = object->unk08;
                position.z = object->unk0c;
                position.y -= 550.0f;
                position.x += libm_sinf(object->unk1c * 0.017453292f) * 20.0f;
                position.z += libm_cosf(object->unk1c * 0.017453292f) * 20.0f;
                FUN_00281b94(0, position, object->unk1c, 80.0f, 500.0f, 50.0f);
            }
        }
        if (object->state == 7) {
            MapVector position;
            position.x = object->unk04;
            position.y = object->unk08;
            position.z = object->unk0c;
            position.x += libm_sinf(object->unk1c * 0.017453292f) * -17.5f;
            position.z += libm_cosf(object->unk1c * 0.017453292f) * -17.5f;
            FUN_00281b94(0, position, object->unk1c, 200.0f, 300.0f, 50.0f);
        }
        if (object->state == 9) {
            MapVector position;
            position.x = object->unk04;
            position.y = object->unk08;
            position.z = object->unk0c;
            position.x += libm_sinf(object->unk1c * 0.017453292f) * -17.5f;
            position.z += libm_cosf(object->unk1c * 0.017453292f) * -17.5f;
            FUN_00281b94(0, position, object->unk1c, 150.0f, 300.0f, 50.0f);
        }
        if (object->state == 11) {
            MapVector position;
            position.x = object->unk04;
            position.y = object->unk08;
            position.z = object->unk0c;
            position.x += libm_sinf(object->unk1c * 0.017453292f) * -17.5f;
            position.z += libm_cosf(object->unk1c * 0.017453292f) * -17.5f;
            FUN_00281b94(0, position, object->unk1c, 200.0f, 300.0f, 50.0f);
        }
        if (object->state == 15)
            FUN_00281b94(0, mapObjectPosition(object), object->unk1c, 50.0f, 50.0f, 50.0f);
        if (object->state == 16)
            FUN_00281b94(0, mapObjectPosition(object), object->unk1c, 50.0f, 50.0f, 50.0f);
        if (object->state == 17)
            FUN_00281b94(0, mapObjectPosition(object), object->unk1c, 100.0f, 50.0f, 60.0f);
    }
}
