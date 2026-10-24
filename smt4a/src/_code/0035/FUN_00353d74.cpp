/* NON_MATCHING: near miss: only register allocation and constant load order differ (retail addresses the object relative to its active byte with writeback and loads the hoisted constants in another order). */
#include "common.h"

struct MapVec3 {
    f32 x, y, z;
};

/* A map object slot (0x48 bytes, accessed fields). */
struct MapObject {
    u8 unk00[4];
    MapVec3 position;       // 0x04
    u8 unk10[4];
    u8 active;              // 0x14
    u8 unk15[7];
    f32 heading;            // 0x1C (degrees)
    u8 unk20[4];
    s32 kind;               // 0x24
    u8 unk28[0x20];
};

extern "C" {
extern MapObject *g_mapObj;
extern struct { s32 mode; s32 submode; } g_gameState;
f32 FUN_001bc124(f32 radians);
f32 FUN_001bbf0c(f32 radians);
void FUN_00281b94(s32 slot, MapVec3 position, f32 heading, f32 a, f32 b, f32 c);
}

/* Spawn the effect of one map object kind, offset along its heading. */
static __inline void spawnOffsetEffect(const MapObject *object, f32 height, f32 distance, f32 a, f32 b, f32 c)
{
    MapVec3 position = object->position;
    position.y = object->position.y - height;
    position.x += FUN_001bc124(object->heading * 0.017453292f) * distance;
    position.z += FUN_001bbf0c(object->heading * 0.017453292f) * distance;
    FUN_00281b94(0, position, object->heading, a, b, c);
}

/* Spawn the ambient effects of every active map object, by kind. */
extern "C" void FUN_00353d74(void)
{
    for (s32 i = 0; i < 24; i++) {
        MapObject *object = &g_mapObj[i];
        if (object->active == 0)
            continue;
        if (g_gameState.mode != 4 || g_gameState.submode != 1) {
            if (object->kind == 2)
                spawnOffsetEffect(object, 400.0f, 20.0f, 80.0f, 350.0f, 50.0f);
            if (object->kind == 10)
                spawnOffsetEffect(object, 550.0f, 20.0f, 80.0f, 500.0f, 50.0f);
        }
        if (object->kind == 7)
            spawnOffsetEffect(object, 0.0f, -17.5f, 200.0f, 300.0f, 50.0f);
        if (object->kind == 9)
            spawnOffsetEffect(object, 0.0f, -17.5f, 150.0f, 300.0f, 50.0f);
        if (object->kind == 11)
            spawnOffsetEffect(object, 0.0f, -17.5f, 200.0f, 300.0f, 50.0f);
        if (object->kind == 15)
            FUN_00281b94(0, object->position, object->heading, 50.0f, 50.0f, 50.0f);
        if (object->kind == 16)
            FUN_00281b94(0, object->position, object->heading, 50.0f, 50.0f, 50.0f);
        if (object->kind == 17)
            FUN_00281b94(0, object->position, object->heading, 100.0f, 50.0f, 60.0f);
    }
}
