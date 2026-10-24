/* NON_MATCHING: stack frame is 80 bytes against retail's 48 (armcc copies the by-value Vector3 arguments of distSpatial/mathPositionHeadingDegrees through temporaries; retail loads them straight from the probe locals with vldmia), and the step-sign compare is emitted with swapped operands. */
#include "common.h"

struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
};

/* The battle/map view state: where the camera stands and which way it faces. */
struct ViewState {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ Vector3 position;
    /* 0x24 */ f32 heading;      /* degrees */
};

/* The map view the scan reads. */
struct MapViewState {
    /* 0x000 */ u8 unk000[0x50];
    /* 0x050 */ Vector3 target;
    /* 0x05C */ u8 unk05C[0x1BC];
    /* 0x218 */ f32 raised;      /* nonzero while the camera is raised */
};

/* The ray the collision test works on: from the camera position outwards. */
struct CameraRay {
    /* 0x00 */ Vector3 start;
    /* 0x0C */ Vector3 end;
};

struct CameraScratch {
    /* 0x000 */ u8 unk000[0x110];
    /* 0x110 */ CameraRay ray;
};

extern "C" {

extern ViewState g_battleViewState;
extern MapViewState *g_lmapView;
extern CameraScratch g_gameState;

f32 FUN_001bc124(f32 radians);
f32 FUN_001bbf0c(f32 radians);
s32 FUN_00330108(Vector3 *end, Vector3 *start, u8 *hit);
f32 distSpatial(Vector3 start, Vector3 end);
f32 mathPositionHeadingDegrees(Vector3 from, Vector3 to);
f32 mathAngleDeltaDegrees(f32 from, f32 to);
f32 calcHeadingRoundedToCardinalDirection(f32 heading);

/* When enabled, probes the view for obstacles in front of the camera and, if the line of sight is
 * blocked, tries the four cardinal headings around the current one and keeps the one whose probe
 * reaches furthest (or the first one that is not blocked). */
void FUN_002d0480(s32 enabled)
{
    f32 extra = 0.0f;
    f32 distance = 400.0f;
    f32 bestHeading;
    f32 bestDistance;
    f32 step;
    f32 offset;
    f32 radians;
    f32 height;
    Vector3 start;
    Vector3 end;
    u8 hit[16];
    s32 i;

    if (enabled == 0) {
        return;
    }
    bestHeading = g_battleViewState.heading;
    g_gameState.ray.start.x = g_battleViewState.position.x;
    if (g_lmapView->raised != 0.0f) {
        extra = 60.0f;
        distance = 150.0f;
    }
    height = extra + 100.0f;
    g_gameState.ray.start.y = g_battleViewState.position.y + height;
    g_gameState.ray.start.z = g_battleViewState.position.z;
    radians = bestHeading * 0.017453292f;
    g_gameState.ray.end.x = g_battleViewState.position.x + FUN_001bc124(radians) * distance;
    g_gameState.ray.end.y = g_battleViewState.position.y + height;
    g_gameState.ray.end.z = g_battleViewState.position.z + FUN_001bbf0c(radians) * distance;
    start = g_gameState.ray.start;
    end = g_gameState.ray.end;
    if (FUN_00330108(&end, &start, hit) == -1) {
        return;
    }
    bestDistance = distSpatial(start, end);
    step = 90.0f;
    if (mathAngleDeltaDegrees(bestHeading, mathPositionHeadingDegrees(g_battleViewState.position, g_lmapView->target)) < 0.0f) {
        step = -90.0f;
    }
    offset = 0.0f;
    for (i = 0; i < 4; i++) {
        f32 heading = calcHeadingRoundedToCardinalDirection(g_battleViewState.heading + offset);
        f32 candidate;

        radians = heading * 0.017453292f;
        g_gameState.ray.end.x = g_battleViewState.position.x + FUN_001bc124(radians) * distance;
        g_gameState.ray.end.z = g_battleViewState.position.z + FUN_001bbf0c(radians) * distance;
        start = g_gameState.ray.start;
        end = g_gameState.ray.end;
        if (FUN_00330108(&end, &start, hit) == -1) {
            g_battleViewState.heading = heading;
            return;
        }
        candidate = distSpatial(start, end);
        if (candidate < bestDistance) {
            bestHeading = heading;
            bestDistance = distSpatial(start, end);
        }
        offset += step;
    }
    radians = bestHeading * 0.017453292f;
    g_gameState.ray.end.x = g_battleViewState.position.x + FUN_001bc124(radians) * distance;
    g_gameState.ray.end.y = g_battleViewState.position.y + height;
    g_gameState.ray.end.z = g_battleViewState.position.z + FUN_001bbf0c(radians) * distance;
}

} /* extern "C" */
