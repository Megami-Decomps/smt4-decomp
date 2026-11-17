#include "shard/W5_W5Match7_SceneState.h"
#include "game/GameStateA.h"
#include "code/Code0048_Smt4a.h"

struct TimedController {
    u32 flags;
    u8 unk04[8];
    s32 timer; // 0x0c
};

extern "C" {
void controllerPoolUpdate(TimedController *controller);
void enemySpawnChooseCandidates(TimedController *controller, s32 mode);

static __inline void advanceControllerTimer(TimedController *controller)
{
    if (controller->flags & 2)
        return;
    ++controller->timer;
    if (controller->timer >= 120) {
        controller->timer = 0;
        enemySpawnChooseCandidates(controller, 2);
    }
}

// Advance and update the controller only while its primary flag allows input.
void controllerUpdateWithIdleTimer(TimedController *controller)
{
    if (g_gameState.paused == 0 && !(controller->flags & 1)) {
        advanceControllerTimer(controller);
        controllerPoolUpdate(controller);
    }
}
}
