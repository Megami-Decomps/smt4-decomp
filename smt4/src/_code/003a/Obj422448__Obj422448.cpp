#include "classes/Obj422448.h"

Obj422448::Obj422448()
{
    for (s32 i = 0; i < 13; ++i) {
        handlers[i] = NULL;
        enterHandlers[i] = NULL;
        leaveHandlers[i] = NULL;
    }
    handlers[0] = &Obj422448::FUN_003abad4;
    handlers[1] = &Obj422448::bibleScreenStartScript;
    handlers[2] = &Obj422448::FUN_003ab348;
    handlers[3] = &Obj422448::FUN_003abed8;
    handlers[4] = &Obj422448::menuUpdateCollectionSort;
    handlers[5] = &Obj422448::FUN_003ab9a4;
    handlers[6] = &Obj422448::itemMenuTakeSelected;
    handlers[7] = &Obj422448::itemMenuTakeSelected;
    handlers[8] = &Obj422448::sceneScriptDoneSetState;
    handlers[9] = &Obj422448::FUN_003ab128;
    handlers[10] = &Obj422448::FUN_003ab7c8;
    handlers[11] = &Obj422448::FUN_003ab948;
    leaveHandlers[2] = &Obj42247c::FUN_003ab3dc;
    leaveHandlers[3] = &Obj42247c::FUN_003ab3dc;
    leaveHandlers[4] = &Obj42247c::FUN_003ab3dc;
    leaveHandlers[10] = &Obj42247c::FUN_003ab3dc;
    leaveHandlers[5] = &Obj42247c::FUN_003abd84;
    leaveHandlers[6] = &Obj42247c::FUN_003abd84;
    leaveHandlers[7] = &Obj42247c::FUN_003ab3dc;
    leaveHandlers[8] = &Obj42247c::FUN_003ab3d8;
    leaveHandlers[9] = &Obj42247c::FUN_003ab3dc;
}
