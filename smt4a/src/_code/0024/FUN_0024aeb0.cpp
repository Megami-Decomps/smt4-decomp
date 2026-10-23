/* NON_MATCHING: global-state and zero saved registers swap; reverse-motion counter scratch registers also differ. */
#include "map/mapTrap.h"
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
extern GameStateA g_gameState;
f32 FUN_001f3f34(f32 first, f32 second, f32 duration, f32 frame);
void controllerSetDestination(ControllerPose* controller, const MapVector* destination);
void controllerSetRotationEulerDegrees(ControllerPose* controller, f32 x, f32 y, f32 z);
void controllerSetPosition(ControllerPose* controller, f32 x, f32 y, f32 z);
void FUN_003fe86c(ControllerPose* controller, u32 kind, s32 option, f32 first, f32 second);

void FUN_0024aeb0(void)
{
    MapTrapA* work = g_mapTrap;
    MapTrapDisplayView* display = reinterpret_cast<MapTrapDisplayView*>(&work->display.phase);
    if (display) {
        MapTrapControllerLink* owner;
        if (!work->motion.alternateController) {
            owner = display->primary;
        } else {
            owner = display->secondary;
        }
        if (owner) {
            ControllerPose* controller = owner->controller;
            if (g_gameState.controllerFlags.secondary) {
                controller->flags.value |= 3;
                return;
            }
            if (display->enabled) {
                controller->flags.value &= ~3u;
            } else {
                controller->flags.value |= 3;
            }
            if (work->motion.active && display->mode == 1) {
                s32 frame = work->motion.alternating ? work->motion.count : work->motion.reverseCount;
                f32 offset = FUN_001f3f34(work->motion.initialValue, 0.0f,
                    static_cast<f32>(work->motion.halfCount), static_cast<f32>(frame));
                MapTrapA* motion = g_mapTrap;
                if (motion->motion.alternating) {
                    motion->motion.alternating = 0;
                    ++motion->motion.count;
                } else {
                    offset = -offset;
                    motion->motion.alternating = 1;
                    ++motion->motion.reverseCount;
                }
                s32 integralOffset = static_cast<s32>(offset);
                motion->motion.delta = static_cast<f32>(integralOffset);
                motion->motion.previousDelta = static_cast<f32>(integralOffset);
                display->destination.x += motion->motion.delta;
                display->destination.z += motion->motion.previousDelta;
                controllerSetDestination(controller, &display->destination);
                motion = g_mapTrap;
                if (motion->motion.count >= motion->motion.halfCount) {
                    motion->motion.halfCount = 0;
                    motion->motion.active = 0;
                    motion->motion.delta = 0.0f;
                    motion->motion.previousDelta = 0.0f;
                }
            }
            if (display->dirty) {
                controllerSetDestination(controller, &display->destination);
                controllerSetRotationEulerDegrees(controller, 0.0f, display->heading, 0.0f);
                controllerSetPosition(controller, 1.0f, 1.0f, 1.0f);
                FUN_003fe86c(controller, display->mode, 2, 0.0f, 0.0f);
                display->dirty = 0;
            }
        }
    }
}
}
