#ifndef SMT4A_STATUS_STATUS_TAB_TRANSITION_H
#define SMT4A_STATUS_STATUS_TAB_TRANSITION_H

#include "game/GameGlobalsRef.h"
#include "status/StatusMenuMode.h"

/* Clear the old tab, apply the new tab mode and clear the navigation state: FUN_00285800's body. */
static __inline void statusResetTabTransition()
{
    ObjB *game = g_gameGlobals.instance;
    g_gameGlobals.instance->unk1374 = 0;
    gameTransitionStartStep();
    game->mode = 0;
}

#endif
