/* NON_MATCHING: retail uses a six-entry jump table; compiler emits a comparison tree and delays common return. */
#include "map/lmapMain.h"
struct MapElevationView {
    u8 prefix[0xB];
    u8 active;
    u8 unk0C[0xC];
    u32 phase;
    s32 frame;
    MapVector start;
    MapVector target;
    u8 unk38[8];
    s32 map;
    u32 unk44;
    u32 variant;
    u8 unk4C[0x44];
    f32 radius;
    u8 unk94[0x48];
    f32 opacity;
    u8 dirty;
    u8 unkE1[0x13];
    u32 flags;
};
typedef char MapElevationOffsets[offsetof(MapElevationView, phase) == 0x18 &&
    offsetof(MapElevationView, opacity) == 0xDC && offsetof(MapElevationView, flags) == 0xF4 ? 1 : -1];
extern "C" {
extern LmapMainStateA *g_lmapMainState;
extern LmapSceneA *g_lmapScene;
extern GameStateA g_gameState;
void FUN_00227a70(void);
void FUN_002a2e98(s32 map, u32 variant, u32 specialMap, u32 mode);
void FUN_0033feb8(LmapMainStateA *state);
void FUN_002df914(void);
void FUN_00244ac8(void);
void FUN_002747dc(void);
void FUN_00364740(s32 map, u32 variant);
void FUN_002ddea0(void);
void stateSetterSetFromBase(LmapObj *object, s32 map, u32 variant);
void fieldBuildAreaPlacementList(LmapObj *object);

u32 FUN_00386720(void)
{
    // Local view includes the state setter's flags; its full class is not yet recovered.
    MapElevationView *state = (MapElevationView *)g_lmapMainState;
    switch (state->phase) {
    case 0:
        state->start = *(const MapVector *)g_lmapScene->transform.position;
        state->target = state->start;
        state->target.y = 800.0f;
        state->opacity = 0.0f;
        state->dirty = 1;
        state->variant = 99;
        g_gameState.submode = 99;
        FUN_00227a70();
        FUN_002a2e98(state->map, state->variant, state->map == 101 ? 101 : 0, state->map == 101 ? 10 : 0);
        state->phase = 1;
        state->frame = 0;
        break;
    case 1:
        FUN_0033feb8((LmapMainStateA *)state);
        ++state->frame;
        g_lmapScene->transform.position[1] = state->start.y +
            (state->target.y - state->start.y) * (f32)state->frame * (1.0f / 30.0f);
        if (state->frame >= 30) {
            g_gameState.inputBlocked = 0;
            g_gameState.request.unk25E = 1;
            state->opacity = 1.0f;
            state->dirty = 1;
            state->phase = 2;
        }
        break;
    case 2:
        FUN_0033feb8((LmapMainStateA *)state);
        break;
    case 5:
        state->radius = 200.0f;
        FUN_002df914();
        state = (MapElevationView *)g_lmapMainState;
        state->active = 0;
        state->flags &= ~2;
        FUN_00244ac8();
        {
            s32 map = state->map;
            LmapMainStateA *current = g_lmapMainState;
            FUN_002747dc();
            FUN_00364740(map, ((MapElevationView *)current)->variant);
        }
        FUN_002ddea0();
        stateSetterSetFromBase((LmapObj *)&state->flags, state->map - 100, state->variant);
        fieldBuildAreaPlacementList((LmapObj *)&state->flags);
        g_gameState.inputBlocked = 0;
        g_gameState.request.unk25E = 1;
        break;
    }
    return 0;
}
}
