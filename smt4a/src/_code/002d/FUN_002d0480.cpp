/* NON_MATCHING: stack frame is 80 bytes against retail's 48 (armcc copies the by-value Vector3 arguments of distSpatial/mathPositionHeadingDegrees through temporaries; retail loads them straight from the probe locals with vldmia), and the step-sign compare is emitted with swapped operands. */
#include "common.h"
#include "map/LmapViewGlobals.h"
#include "game/GameStateA.h"
#include "util/MathFunctions.h"
#include "util/TrigF32.h"

typedef MapVector Vector3;

/* The battle/map view state: where the camera stands and which way it faces. */
struct ViewState {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ Vector3 position;
    /* 0x24 */ f32 heading;      /* degrees */
};

/* The ray the collision test works on: from the camera position outwards. */
extern "C" {

extern ViewState g_battleViewState;

f32 libm_sinf(f32 radians);
s32 FUN_00330108(Vector3 *end, Vector3 *start, u8 *hit);
f32 distSpatial(Vector3 start, Vector3 end);
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
    g_gameState.rayStart.x = g_battleViewState.position.x;
    if (g_lmapView->raised != 0.0f) {
        extra = 60.0f;
        distance = 150.0f;
    }
    height = extra + 100.0f;
    g_gameState.rayStart.y = g_battleViewState.position.y + height;
    g_gameState.rayStart.z = g_battleViewState.position.z;
    radians = bestHeading * 0.017453292f;
    g_gameState.rayEnd.x = g_battleViewState.position.x + libm_sinf(radians) * distance;
    g_gameState.rayEnd.y = g_battleViewState.position.y + height;
    g_gameState.rayEnd.z = g_battleViewState.position.z + libm_cosf(radians) * distance;
    start = g_gameState.rayStart;
    end = g_gameState.rayEnd;
    if (FUN_00330108(&end, &start, hit) == -1) {
        return;
    }
    bestDistance = distSpatial(start, end);
    step = 90.0f;
    if (mathAngleDeltaDegrees(bestHeading, mathPositionHeadingDegrees(g_battleViewState.position, g_lmapView->savedEye)) < 0.0f) {
        step = -90.0f;
    }
    offset = 0.0f;
    for (i = 0; i < 4; i++) {
        f32 heading = calcHeadingRoundedToCardinalDirection(g_battleViewState.heading + offset);
        f32 candidate;

        radians = heading * 0.017453292f;
        g_gameState.rayEnd.x = g_battleViewState.position.x + libm_sinf(radians) * distance;
        g_gameState.rayEnd.z = g_battleViewState.position.z + libm_cosf(radians) * distance;
        start = g_gameState.rayStart;
        end = g_gameState.rayEnd;
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
    g_gameState.rayEnd.x = g_battleViewState.position.x + libm_sinf(radians) * distance;
    g_gameState.rayEnd.y = g_battleViewState.position.y + height;
    g_gameState.rayEnd.z = g_battleViewState.position.z + libm_cosf(radians) * distance;
}

} /* extern "C" */
