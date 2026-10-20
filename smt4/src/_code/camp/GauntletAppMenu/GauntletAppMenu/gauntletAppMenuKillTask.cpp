/* Kills the Gauntlet app menu's task if it still exists. */
#include "common.h"
#include "camp/GauntletAppMenu/GauntletAppMenu.h"

extern "C" {

int jobStop(u32 task, int flags);     /* kill a task */
int jobIsValid(u32 task);                /* nonzero while the task exists */

extern GauntletAppMenuWork *g_gauntletAppMenu;

void gauntletAppMenuKillTask(void)
{
    if (g_gauntletAppMenu != NULL && jobIsValid(g_gauntletAppMenu->task) != 0) {
        jobStop(g_gauntletAppMenu->task, 0);
    }
}

} /* extern "C" */
