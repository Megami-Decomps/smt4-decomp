#ifndef SMT4_STATUS_STATUS_TAB_TRANSITION_H
#define SMT4_STATUS_STATUS_TAB_TRANSITION_H

#include "shard/GameGlobals.h"
#include "status/StatusMenuMode.h"

/* Clear the old tab, apply the new tab mode and clear the navigation state: FUN_0026d670's body. */
static __inline void statusResetTabTransition()
{
    GameData *data = g_gameGlobals.data;
    g_gameGlobals.data->unk12E4 = 0;
    statusDownRestoreTabForMode();
    data->unk1E63 = 0;
}

#endif
