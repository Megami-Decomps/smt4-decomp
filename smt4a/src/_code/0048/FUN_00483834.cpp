/* NON_MATCHING: timer arithmetic uses r0 instead of retail's r1, delaying the controller-to-r0 move; all 26 operations are present. */
#include "shard/W5_W5Match7_SceneState.h"

struct TimedController {
    u32 flags;
    u8 unk04[8];
    s32 timer; // 0x0c
};

extern "C" {
void FUN_00482f20(TimedController *controller);
void FUN_004834b0(TimedController *controller, s32 mode);

// Advance and update the controller only while its primary flag allows input.
void FUN_00483834(TimedController *controller)
{
    if (g_gameState.controllerFlags.primary == 0 && !(controller->flags & 1)) {
        if (!(controller->flags & 2)) {
            ++controller->timer;
            if (controller->timer >= 120) {
                controller->timer = 0;
                FUN_004834b0(controller, 2);
            }
        }
        FUN_00482f20(controller);
    }
}
}
