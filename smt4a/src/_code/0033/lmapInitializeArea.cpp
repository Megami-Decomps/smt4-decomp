/* NON_MATCHING: the FUN_002a2e98 arms now match retail (per-arm calls); remaining: retail copies the position's x,y words with ldm/stm and z from a register (here ldrd/strd) and orders the global loads differently. */
#include "map/lmapMain.h"
#include "shard/W6_W6Match2_AocTable23.h"

struct AreaHandleOwner { u32 unk00; u32 flags; };
struct AreaHandle { u32 unk00; AreaHandleOwner *owner; };
struct AreaMainState {
    u8 unk000[0x40];
    s32 map;
    u32 unk044;
    u32 area;
    u8 unk04c[0xa8];
    LmapObj setter; // 0x0f4
    u8 unk0f5[0x95f];
    AreaHandle *handles[32]; // 0xa54
};
struct AreaPosition { f32 x, y, z; };
struct AreaScene {
    u8 unk000[0x1c];
    AreaPosition position, targetPosition, previousPosition;
    u8 unk040[0xc];
    f32 heading, targetHeading;
};
struct AreaSpawn {
    s8 map, area;
    u8 place;
    u8 unk03;
    s16 x, y, z;
};
struct AreaGameFlags {
    u32 unk00;
    u32 area;
    u8 unk08[0x1b];
    u8 pending; // 0x23
};
extern "C" {
extern AreaMainState *g_lmapMainState;
extern AreaScene *g_lmapScene;
extern AreaGameFlags g_gameState;
extern void *g_handleRegistry;
u32 FUN_003b5714(s32 category, s32 subtype, u32 variant);
Table23Record *dataTableGetRecord23(u32 index);
void mapPlaceSet(s32, s32, s32);
void FUN_00227a70();
void FUN_002a2e98(s32, u32, u32, u32);
void FUN_002df914();
void lmapApplyMapAndArea();
void FUN_00378000();
void FUN_00483acc(LmapObj *);
void stateSetterSetFromBase(LmapObj *, s32, u32);
void fieldBuildAreaPlacementList(LmapObj *);
void FUN_004bc95c(s32, u32);
void FUN_0036a434(AreaMainState *);
void FUN_003699e4();
void lmapApplyAreaHandleVisibility();
void FUN_003ca5a4();
void ptrListRemoveClearOwner(void *, AreaHandleOwner *);
void lmapInitializeActorHandles();
void FUN_0036aa04(AreaMainState *);
void controllerUpdateWithIdleTimer(LmapObj *);
void FUN_00297c3c();
void FUN_00234b30();
void FUN_002737a8();

void lmapInitializeArea(u32 area, u32 spawnId)
{
    AreaMainState *state = g_lmapMainState;
    const AreaSpawn *spawn = reinterpret_cast<const AreaSpawn *>(
        dataTableGetRecord23(FUN_003b5714(state->map, area, spawnId)));
    mapPlaceSet(spawn->map, spawn->area, spawn->place);
    state->area = area;
    AreaScene *scene = g_lmapScene;
    g_gameState.area = area;
    scene->position.x = (f32)spawn->x;
    scene->position.y = (f32)spawn->y;
    scene->position.z = (f32)spawn->z;
    scene->previousPosition = scene->targetPosition = scene->position;
    scene->heading = 180.0f;
    scene->targetHeading = 180.0f;
    FUN_00227a70();
    if (state->map == 101) {
        FUN_002a2e98(state->map, state->area, 101, 10);
    } else {
        FUN_002a2e98(state->map, state->area, 0, 0);
    }
    FUN_002df914();
    lmapApplyMapAndArea();
    FUN_00378000();
    FUN_00483acc(&state->setter);
    stateSetterSetFromBase(&state->setter, state->map - 100, state->area);
    fieldBuildAreaPlacementList(&state->setter);
    FUN_004bc95c(state->map, area);
    FUN_0036a434(state);
    FUN_003699e4();
    lmapApplyAreaHandleVisibility();
    FUN_003ca5a4();
    for (s32 i = 0; i < 32; ++i) {
        AreaHandle *handle = state->handles[i];
        if (handle && handle->owner)
            ptrListRemoveClearOwner(g_handleRegistry, handle->owner);
    }
    lmapInitializeActorHandles();
    state = g_lmapMainState;
    if (state->map != 100)
        FUN_003699e4();
    for (s32 i = 0; i < 32; ++i) {
        AreaHandle *handle = state->handles[i];
        if (handle)
            handle->owner->flags &= ~3u;
    }
    g_gameState.pending = 0;
    FUN_0036aa04(state);
    controllerUpdateWithIdleTimer(&state->setter);
    FUN_00297c3c();
    FUN_00234b30();
    FUN_002737a8();
    mapPlaceSet(-1, -1, -1);
}
}
