#include "map/mapTrap.h"
#include "game/GameStateA.h"
#include "shard/W5_W5Match7_ControllerPose.h"

struct MapTrapControllerLink { u32 unk00; ControllerPose* controller; };
// The shared trap's padding union starts at an unaligned byte offset; do not enlarge its alignment.
struct MapTrapDisplayView {
    u8 enabled;
    u8 unk01[3];
    MapVector destination;
    f32 heading;
    u32 mode;
    u8 dirty;
    u8 unk19[3];
    MapTrapControllerLink* primary;
    MapTrapControllerLink* secondary;
};
extern "C" {
extern MapTrapA* g_mapTrap;
f32 FUN_001f3f34(f32 first, f32 second, f32 duration, f32 frame);
void controllerSetDestination(ControllerPose* controller, const MapVector* destination);
void controllerSetRotationEulerDegrees(ControllerPose* controller, f32 x, f32 y, f32 z);
void controllerSetPosition(ControllerPose* controller, f32 x, f32 y, f32 z);
void modelPlayClip(ControllerPose* controller, u32 kind, s32 option, f32 first, f32 second);

/* Per-frame update of the trap's display model: visibility, the swinging motion and pending placement. */
void FUN_0024aeb0(void)
{
    MapTrapDisplayView* display = reinterpret_cast<MapTrapDisplayView*>(&g_mapTrap->display.phase);
    if (display) {
        MapTrapControllerLink* owner;
        if (!g_mapTrap->motion.alternateController) {
            owner = display->primary;
        } else {
            owner = display->secondary;
        }
        if (owner) {
            ControllerPose* controller = owner->controller;
            if (g_gameState.departLoading) {
                controller->flags.value |= 3;
                return;
            }
            if (display->enabled) {
                controller->flags.value &= ~3u;
            } else {
                controller->flags.value |= 3;
            }
            if (g_mapTrap->motion.active && display->mode == 1) {
                s32 frame = g_mapTrap->motion.alternating ? g_mapTrap->motion.count : g_mapTrap->motion.reverseCount;
                f32 offset = FUN_001f3f34(g_mapTrap->motion.initialValue, 0.0f,
                    static_cast<f32>(g_mapTrap->motion.halfCount), static_cast<f32>(frame));
                MapTrapA* trap = g_mapTrap;
                if (trap->motion.alternating) {
                    trap->motion.alternating = 0;
                    ++trap->motion.count;
                } else {
                    offset = -offset;
                    ++trap->motion.reverseCount;
                    trap->motion.alternating = 1;
                }
                s32 integralOffset = static_cast<s32>(offset);
                trap->motion.delta = static_cast<f32>(integralOffset);
                trap->motion.previousDelta = static_cast<f32>(integralOffset);
                display->destination.x += trap->motion.delta;
                display->destination.z += trap->motion.previousDelta;
                controllerSetDestination(controller, &display->destination);
                trap = g_mapTrap;
                if (trap->motion.count >= trap->motion.halfCount) {
                    trap->motion.halfCount = 0;
                    trap->motion.active = 0;
                    trap->motion.delta = 0.0f;
                    trap->motion.previousDelta = 0.0f;
                }
            }
            if (display->dirty) {
                controllerSetDestination(controller, &display->destination);
                controllerSetRotationEulerDegrees(controller, 0.0f, display->heading, 0.0f);
                controllerSetPosition(controller, 1.0f, 1.0f, 1.0f);
                modelPlayClip(controller, display->mode, 2, 0.0f, 0.0f);
                display->dirty = 0;
            }
        }
    }
}
}
