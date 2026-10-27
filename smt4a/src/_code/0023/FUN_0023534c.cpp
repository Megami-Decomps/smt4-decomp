#include "common.h"

extern "C" {

typedef struct Vec3f {
    /* 0x0 */ f32 x;
    /* 0x4 */ f32 y;
    /* 0x8 */ f32 z;
} Vec3f;

typedef struct MapObjModel {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 flags;
    /* 0x008 */ u8 unk008[0x1fc - 0x8];
    /* 0x1FC */ f32 speed;
} MapObjModel;

typedef struct MapObjHandle {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ MapObjModel *model;
} MapObjHandle;

/* One 0x48-byte map object slot. */
typedef struct MapObjSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 dirty;
    /* 0x02 */ u8 moved;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ Vec3f position;
    /* 0x10 */ u8 unk10[0xc];
    /* 0x1C */ f32 yaw;
    /* 0x20 */ s32 clip;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ MapObjHandle *handle;
    /* 0x2C */ u8 unk2c[0x1c];
} MapObjSlot;

typedef struct MapObjs {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ MapObjSlot slots[24];
} MapObjs;

typedef struct GameStateView {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ s8 hideMapObjects;
} GameStateView;

extern MapObjs *g_mapObj;
extern GameStateView g_gameState;

void controllerSetDestination(MapObjModel *model, Vec3f *position);
void controllerSetRotationEulerDegrees(MapObjModel *model, f32 x, f32 y, f32 z);
s32 slots4FGetActiveValue(MapObjModel *model);
void FUN_003fe86c(MapObjModel *model, u32 index, u8 flags, f32 time, f32 blend);

/* Updates the 24 map objects: applies visibility, then for changed ones their placement and clip. */
void FUN_0023534c(void)
{
    s32 i;

    for (i = 0; i < 24; i++) {
        MapObjSlot *slot = &g_mapObj->slots[i];
        MapObjModel *model;

        if (!slot->active) {
            continue;
        }
        model = slot->handle->model;
        if (model != NULL) {
            if (g_gameState.hideMapObjects == 0) {
                model->flags &= ~3;
            } else {
                model->flags |= 3;
            }
        }
        if (slot->dirty) {
            if (slot->moved) {
                controllerSetDestination(model, &slot->position);
                controllerSetRotationEulerDegrees(model, 0.0f, slot->yaw, 0.0f);
            }
            if (slots4FGetActiveValue(model) != slot->clip) {
                FUN_003fe86c(model, slot->clip, 2, 0.0f, 0.0f);
                model->speed = 1.0f;
            }
            slot->dirty = 0;
        }
    }
}

} /* extern "C" */
