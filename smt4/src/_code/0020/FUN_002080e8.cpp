#include "common.h"
#include "battle/BattleUnitSlot.h"
#include "game/GameState.h"

extern "C" {

s32 FUN_0027d98c(void);

/* Whether the current mode's counter has reached 100. */
u32 FUN_002080e8(void)
{
    s32 mode = FUN_0027d98c();
    GameStateMapBlock *map = &g_gameState.map;
    GameState *state = &g_gameState;

    switch (mode) {
    case 0:
    case 3:
        if (map->savedLocationSet != 0 && state->savedMapId >= 100) {
            return 1;
        }
        break;
    case 1:
    case 2:
    case 4:
        if (map->savedLocationSet != 0 && state->targetMapId >= 100) {
            return 1;
        }
        break;
    }
    return 0;
}

} /* extern "C" */
