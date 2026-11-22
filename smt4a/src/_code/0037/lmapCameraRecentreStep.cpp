/* NON_MATCHING: 235 lines. The move request carries the point beside the anchor (+0x18) and the heading (+0x70);
 * the corner and stop points are built in registers and copied into it, as retail does. Left: retail reloads the
 * view from g_lmapViewHolder after every call and keeps 0.0f in s16 from entry, loads the anchor's x/y/z before
 * the first sine, and the frame is 4 bytes larger. */
#include "common.h"
#include "map/LmapViewGlobals.h"
#include <math.h>
#include "util/MathFunctions.h"
#include "util/TrigF32.h"

extern "C" {

typedef MapVector MapVec3;

/* The camera move request handed to the camera mover. */
typedef struct CameraMoveRequest {
    /* 0x00 */ MapVec3 from;
    /* 0x0C */ MapVec3 to;
    /* 0x18 */ MapVec3 via;         /* the point beside the anchor the move passes */
    /* 0x24 */ MapVec3 destination;
    /* 0x30 */ u8 unk30[0x18];
    /* 0x48 */ s32 unk48;
    /* 0x4C */ s32 frames;
    /* 0x50 */ u8 unk50[0x1C];
    /* 0x6C */ f32 unk6c;
    /* 0x70 */ f32 heading;
} CameraMoveRequest;

s32 lmapResolveContextValue(void);
s32 vectorPairTransitionStep(LmapViewA *view);
void lmapCameraSetMode(s32 arg);

s32 FUN_00330108(MapVec3 *from, MapVec3 *to, MapVec3 *out);
void vectorPairTransitionStart(CameraMoveRequest *request);

/* Steps the map camera's recentre: in phase 0 plans a move from the current focus to a point
 * beside the scene anchor (stopping at obstacles), in phase 1 adopts the saved view once the
 * move is done. */
void lmapCameraRecentreStep(void)
{
    s32 index = lmapResolveContextValue();
    LmapViewA *view = g_lmapViewHolder.view;

    if (view->phase != 0) {
        if (view->phase == 1 && vectorPairTransitionStep(view) != 0) {
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
            lmapCameraSetMode(0);
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
        lmapCameraSetMode(0);
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
    view->heading = request.heading = mathPositionHeadingDegrees(g_lmapScene->pose.position, g_lmapScene->movementCurrent);
    corner.x = g_lmapScene->pose.targetPosition.x + libm_sinf((view->heading - 90.0f) * 0.017453292f) * view->lateralDistance[index];
    corner.y = g_lmapScene->pose.targetPosition.y + view->targetHeight[index];
    corner.z = g_lmapScene->pose.targetPosition.z + libm_cosf((view->heading - 90.0f) * 0.017453292f) * view->lateralDistance[index];
    request.via = corner;
    stop.x = g_lmapScene->pose.targetPosition.x - libm_sinf(view->heading * 0.017453292f) * view->rearDistance[index];
    stop.z = g_lmapScene->pose.targetPosition.z - libm_cosf(view->heading * 0.017453292f) * view->rearDistance[index];
    stop.y = g_lmapScene->pose.targetPosition.y + view->eyeHeight[index] + view->heightBias;
    stop.x += libm_sinf((view->heading - 90.0f) * 0.017453292f) * view->lateralDistance[index];
    stop.z += libm_cosf((view->heading - 90.0f) * 0.017453292f) * view->lateralDistance[index];
    request.destination = stop;
    FUN_00330108(&request.via, &request.destination, &hit);
    request.destination = hit;
    request.unk48 = 0;
    request.frames = 20;
    request.unk6c = 0.0f;
    vectorPairTransitionStart(&request);
    view = g_lmapViewHolder.view;
    view->moving = 1;
    view->phase++;
    view->unk008 = 0;
    view->unk00C = 0;
}

}
