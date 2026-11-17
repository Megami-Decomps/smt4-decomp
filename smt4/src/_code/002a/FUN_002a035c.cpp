#include "camp/Unite/UniteGlobals.h"

extern "C" {
s32 sys43e188GetState(void);
void messageMainFinishWindow(void);
void FUN_002a035c(void)
{
    if (g_unite != NULL) {
        if (g_unite->menu.active != 0 && sys43e188GetState() == 0) { messageMainFinishWindow(); }
        UniteWork *work = g_unite;
        if (work != NULL) { work->scriptIV.pendingRequest = -1; }
    }
}
}
