/* NON_MATCHING: retail loads 90.0f and 80.0f into s17/s16 at entry and compares with vcmpe; the literal compares
 * build as integer compares of the bit patterns (fpmode fast), and the saved VFP registers shift by one pair. */
#include "battle/btlView.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {
extern BattleViewState g_battleViewState;
/* Retail loads the camera position into s0-s2 for this call. */
void FUN_002d8614(s8 enable, MapVector position);

/* Activates the camera navigation point while the player is close to it and facing it. */
void btlViewUpdateNavigationPoint(MapVector position, f32 heading)
{
    if (g_battleViewState.unk28 != 0)
        return;
    g_battleViewState.navigationSetting = 0;
    if (g_gameState.inputBlocked)
        return;
    /* within 90 units of the point and facing it within 80 degrees */
    if (distSpatial(position, g_battleViewState.camera.position) < 90.0f &&
        mathAbsHeadingErrorToPoint(position, heading, g_battleViewState.camera.position) < 80.0f) {
        if (g_battleViewState.navigationSetting)
            return;
        g_battleViewState.unk2c = 7;
        g_battleViewState.navigationSetting = 1;
        FUN_002d8614(g_battleViewState.navigationSetting, g_battleViewState.camera.position);
    }
    if (!g_battleViewState.navigationSetting)
        FUN_002d8614(0, g_battleViewState.camera.position);
}
}
