/* NON_MATCHING: distance-vector VFP allocation and motion-flag reuse/store scheduling differ; controller synchronization body matches. */
#include "shard/W5_W5Match7_ControllerPose.h"
#include <math.h>

struct MapActorControllerLink {
    u32 unk00;
    ControllerPose *controller;
};
struct MapActorMotion {
    u8 unk00[0xc];
    u8 flags;
    u8 unk0d[0x1f];
    MapVector position;
    u8 unk38[0xc];
    MapVector orientation;
    MapVector controllerPosition;
    u8 unk5c[0x1c];
    MapActorControllerLink *model;
    u32 motionFlags;
    u8 unk80[0x30];
    MapVector offset;
};

extern "C" {
void controllerSetDestination(ControllerPose *controller, const MapVector *destination);
void controllerSetRotationEulerDegrees(ControllerPose *controller, f32 x, f32 y, f32 z);
void controllerSetPosition(ControllerPose *controller, f32 x, f32 y, f32 z);

void mapActorUpdateDistanceMotionAndController(MapActorMotion *actor)
{
    if (actor->motionFlags & 4) {
        MapVector delta = {
            actor->position.x - g_lmapScene->position.x,
            actor->position.y - g_lmapScene->position.y,
            actor->position.z - g_lmapScene->position.z
        };
        if (sqrtf(delta.x * delta.x + delta.y * delta.y + delta.z * delta.z) > 300.0f) {
            actor->motionFlags = (actor->motionFlags & ~4) | 1;
        }
    }
    if (actor->motionFlags & 1) {
        actor->offset.y += 50.0f;
        if (actor->offset.y > 0.0f) {
            actor->offset.y = 0.0f;
            actor->motionFlags &= ~1;
            actor->flags &= ~4;
        }
    }
    if (actor->model != NULL) {
        MapVector destination = {
            actor->position.x + actor->offset.x,
            actor->position.y + actor->offset.y,
            actor->position.z + actor->offset.z
        };
        ControllerPose *controller = actor->model->controller;
        controllerSetDestination(controller, &destination);
        controllerSetRotationEulerDegrees(controller, actor->orientation.x, actor->orientation.y, actor->orientation.z);
        controllerSetPosition(controller, actor->controllerPosition.x, actor->controllerPosition.y, actor->controllerPosition.z);
        if (g_gameState.controllerFlags.primary) {
            controller->flags.value |= 3;
        } else {
            controller->flags.value &= ~3;
        }
        if (actor->motionFlags & 4) {
            controller->flags.value |= 3;
        } else if (g_gameState.controllerFlags.secondary) {
            controller->flags.value |= 3;
        } else {
            controller->flags.value &= ~3;
        }
    }
}
}
