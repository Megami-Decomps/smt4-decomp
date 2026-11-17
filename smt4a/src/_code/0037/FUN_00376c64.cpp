/* NON_MATCHING: the Vec3 stack copies and the order of the corner/stop float computations differ from retail (168 vs 182 rows); the camera move planning is the same. */
#include "common.h"
#include "map/LmapViewGlobals.h"
#include <math.h>
#include "util/MathFunctions.h"

extern "C" {

typedef MapVector MapVec3;

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


s32 FUN_003033d4(void);
s32 FUN_0033a374(LmapViewA *view);
void FUN_00303460(s32 arg);
f32 libm_sinf(f32 radians);
f32 libm_cosf(f32 radians);
s32 FUN_00330108(MapVec3 *from, MapVec3 *to, MapVec3 *out);
void FUN_002d1e44(CameraMoveRequest *request);

/* Steps the map camera's recentre: in phase 0 plans a move from the current focus to a point
 * beside the scene anchor (stopping at obstacles), in phase 1 adopts the saved view once the
 * move is done. */
void FUN_00376c64(void)
{
    s32 index = FUN_003033d4();
    LmapViewA *view = g_lmapViewHolder.view;

    if (view->phase != 0) {
        if (view->phase == 1 && FUN_0033a374(view) != 0) {
            view = g_lmapViewHolder.view;
            view->raised = 0.0f;
            view->unk21C = 0.0f;
            view->heading = view->move.heading;
            view->unk210 = 0.0f;
            view->unk214 = 0.0f;
            view->savedEye = *reinterpret_cast<MapVector *>(&view->move.value.target.second); /* the same three floats */
            view->savedTarget.x = view->move.value.target.first.x;
            view->savedTarget.y = view->move.value.target.first.y;
            view->savedTarget.z = view->move.value.target.first.z;
            FUN_00303460(0);
            view = g_lmapViewHolder.view;
            view->phase++;
            view->unk008 = 0;
        }
        return;
    }
    f32 dx = view->savedTarget.x - view->savedEye.x;
    f32 dy = view->savedTarget.y - view->savedEye.y;
    f32 dz = view->savedTarget.z - view->savedEye.z;

    if (sqrtf(dx * dx + dy * dy + dz * dz) < 200.0f) {
        FUN_00303460(0);
        return;
    }
    CameraMoveRequest request;
    MapVec3 corner;
    MapVec3 stop;
    MapVec3 hit;

    view->unk00C = 0;
    request.from = view->savedTarget;
    request.to = view->savedEye;
    view = g_lmapViewHolder.view;
    view->heading = mathPositionHeadingDegrees(g_lmapScene->pose.position, g_lmapScene->movementCurrent);
    f32 turned = (view->heading - 90.0f) * 0.017453292f;
    f32 facing = view->heading * 0.017453292f;

    corner.x = g_lmapScene->pose.targetPosition.x + libm_sinf(turned) * view->lateralDistance[index];
    corner.y = g_lmapScene->pose.targetPosition.y + view->targetHeight[index];
    corner.z = g_lmapScene->pose.targetPosition.z + libm_cosf(turned) * view->lateralDistance[index];
    stop.x = g_lmapScene->pose.targetPosition.x - libm_sinf(facing) * view->rearDistance[index];
    stop.z = g_lmapScene->pose.targetPosition.z - libm_cosf(facing) * view->rearDistance[index];
    stop.y = g_lmapScene->pose.targetPosition.y + view->eyeHeight[index] + view->heightBias;
    stop.x += libm_sinf(turned) * view->lateralDistance[index];
    stop.z += libm_cosf(turned) * view->lateralDistance[index];
    FUN_00330108(&corner, &stop, &hit);
    request.destination = hit;
    request.unk48 = 0;
    request.frames = 20;
    request.unk6c = 0.0f;
    FUN_002d1e44(&request);
    view = g_lmapViewHolder.view;
    view->moving = 1;
    view->phase++;
    view->unk008 = 0;
    view->unk00C = 0;
}

}
