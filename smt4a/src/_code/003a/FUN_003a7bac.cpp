#include "status/StatusDownA.h"

extern "C" {




/* Whether the status screen is absent or its skill menu is in state 5. */
u32 FUN_003a7bac(void)
{
    u32 result = 1;

    if (StatusDownStateA *down = g_statusDown) {
        StatusDownSkillMenuA *menu = &down->menu;

        if (menu->step.state != 5) {
            result = 0;
        }
    }
    return result;
}

}
