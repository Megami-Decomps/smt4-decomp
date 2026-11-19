/* NON_MATCHING: armcc loads the view pointer before the flag check; retail loads it after (ldrne). Everything else matches. */
#include "battle/btlView.h"
#include "util/MathFunctions.h"
#include "util/TrigF32.h"

extern "C" {
extern BattleViewState g_battleViewState;

s32 gameFlagIsSet(u32 flag);
f32 libm_sinf(f32 radians);

/* Places the battle view 150 units out from `target` along `heading` (+30 degrees) and turns it to face the target. */
void FUN_002d02cc(BattleViewVec3 target, f32 heading)
{
    BattleViewState *view = &g_battleViewState;
    f32 angle;

    if (!gameFlagIsSet(0x4D0)) {
        return;
    }
    angle = (heading + 30.0f) * 0.017453292f;
    view->camera.position = target;
    view->camera.position.x += libm_sinf(angle) * 150.0f;
    view->camera.position.z += libm_cosf(angle) * 150.0f;
    view->unk30 = 1;
    view->value = mathPositionHeadingDegrees(view->camera.position, target);
    view->unk2c = 2;
    view->unk70 = 5.0f;
    view->unk28 = 0;
    view->unkAC = 0;
}

} /* extern "C" */
