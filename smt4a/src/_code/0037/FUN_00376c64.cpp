/* NON_MATCHING: the Vec3 stack copies and the order of the corner/stop float computations differ from retail (168 vs 182 rows); the camera move planning is the same. */
#include "common.h"
#include <math.h>

extern "C" {

typedef struct MapVec3 {
    f32 x, y, z;
} MapVec3;

/* The map camera view (only the fields used here). */
typedef struct MapView {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ s32 phase;
    /* 0x008 */ s32 timer;
    /* 0x00C */ s32 unk00c;
    /* 0x010 */ u8 unk010[8];
    /* 0x018 */ f32 heading;
    /* 0x01C */ f32 heightOffset;
    /* 0x020 */ u8 unk020[0x30];
    /* 0x050 */ MapVec3 start;
    /* 0x05C */ MapVec3 target;
    /* 0x068 */ u8 unk068[0x64];
    /* 0x0CC */ f32 lift[0x10];
    /* 0x10C */ f32 lowerLift[0x10];
    /* 0x14C */ f32 side[0x10];
    /* 0x18C */ f32 back[0x10];
    /* 0x1CC */ u8 unk1cc[0x44];
    /* 0x210 */ f32 unk210;
    /* 0x214 */ f32 unk214;
    /* 0x218 */ f32 unk218;
    /* 0x21C */ f32 unk21c;
    /* 0x220 */ u8 moving;
    /* 0x221 */ u8 unk221[3];
    /* 0x224 */ u8 unk224[0x18];
    /* 0x23C */ f32 unk23c;
    /* 0x240 */ f32 unk240;
    /* 0x244 */ f32 unk244;
    /* 0x248 */ MapVec3 savedStart;
    /* 0x254 */ u8 unk254[0x40];
    /* 0x294 */ f32 savedHeading;
} MapView;

typedef struct MapViewGlobals {
    u32 unk0;
    MapView *view;
} MapViewGlobals;

/* The map scene (only the vectors read here). */
typedef struct MapScene {
    /* 0x000 */ u8 unk000[0x1C];
    /* 0x01C */ MapVec3 position;
    /* 0x028 */ MapVec3 anchor;
    /* 0x034 */ u8 unk034[0x1BC];
    /* 0x1F0 */ MapVec3 focus;
} MapScene;

/* The camera move request handed to the camera mover. */
typedef struct CameraMoveRequest {
    /* 0x00 */ MapVec3 from;
    /* 0x0C */ MapVec3 to;
    /* 0x18 */ u8 unk18[0xC];
    /* 0x24 */ MapVec3 destination;
    /* 0x30 */ u8 unk30[0x18];
    /* 0x48 */ s32 unk48;
    /* 0x4C */ s32 frames;
    /* 0x50 */ u8 unk50[0x1C];
    /* 0x6C */ f32 unk6c;
} CameraMoveRequest;

extern MapViewGlobals DAT_005806a0;
extern MapScene *g_lmapScene;

s32 FUN_003033d4(void);
s32 FUN_0033a374(MapView *view);
void FUN_00303460(s32 arg);
f32 mathPositionHeadingDegrees(MapVec3 position, MapVec3 focus);
f32 FUN_001bc124(f32 radians);
f32 FUN_001bbf0c(f32 radians);
s32 FUN_00330108(MapVec3 *from, MapVec3 *to, MapVec3 *out);
void FUN_002d1e44(CameraMoveRequest *request);

/* Steps the map camera's recentre: in phase 0 plans a move from the current focus to a point
 * beside the scene anchor (stopping at obstacles), in phase 1 adopts the saved view once the
 * move is done. */
void FUN_00376c64(void)
{
    s32 index = FUN_003033d4();
    MapView *view = DAT_005806a0.view;

    if (view->phase != 0) {
        if (view->phase == 1 && FUN_0033a374(view) != 0) {
            view = DAT_005806a0.view;
            view->unk218 = 0.0f;
            view->unk21c = 0.0f;
            view->heading = view->savedHeading;
            view->unk210 = 0.0f;
            view->unk214 = 0.0f;
            view->start = view->savedStart;
            view->target.x = view->unk23c;
            view->target.y = view->unk240;
            view->target.z = view->unk244;
            FUN_00303460(0);
            view = DAT_005806a0.view;
            view->phase++;
            view->timer = 0;
        }
        return;
    }
    f32 dx = view->target.x - view->start.x;
    f32 dy = view->target.y - view->start.y;
    f32 dz = view->target.z - view->start.z;

    if (sqrtf(dx * dx + dy * dy + dz * dz) < 200.0f) {
        FUN_00303460(0);
        return;
    }
    CameraMoveRequest request;
    MapVec3 corner;
    MapVec3 stop;
    MapVec3 hit;

    view->unk00c = 0;
    request.from = view->target;
    request.to = view->start;
    view = DAT_005806a0.view;
    view->heading = mathPositionHeadingDegrees(g_lmapScene->position, g_lmapScene->focus);
    f32 turned = (view->heading - 90.0f) * 0.017453292f;
    f32 facing = view->heading * 0.017453292f;

    corner.x = g_lmapScene->anchor.x + FUN_001bc124(turned) * view->side[index];
    corner.y = g_lmapScene->anchor.y + view->lift[index];
    corner.z = g_lmapScene->anchor.z + FUN_001bbf0c(turned) * view->side[index];
    stop.x = g_lmapScene->anchor.x - FUN_001bc124(facing) * view->back[index];
    stop.z = g_lmapScene->anchor.z - FUN_001bbf0c(facing) * view->back[index];
    stop.y = g_lmapScene->anchor.y + view->lowerLift[index] + view->heightOffset;
    stop.x += FUN_001bc124(turned) * view->side[index];
    stop.z += FUN_001bbf0c(turned) * view->side[index];
    FUN_00330108(&corner, &stop, &hit);
    request.destination = hit;
    request.unk48 = 0;
    request.frames = 20;
    request.unk6c = 0.0f;
    FUN_002d1e44(&request);
    view = DAT_005806a0.view;
    view->moving = 1;
    view->phase++;
    view->timer = 0;
    view->unk00c = 0;
}

}
