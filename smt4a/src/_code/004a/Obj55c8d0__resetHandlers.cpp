#include "classes/Obj55c8d0.h"

void Obj55c8d0::resetHandlers()
{
    for (s32 i = 0; i < 9; ++i) {
        handlers[i] = NULL;
        enterHandlers[i] = NULL;
        leaveHandlers[i] = NULL;
    }
    handlers[0] = &Obj55c8d0::FUN_004a4c74;
    handlers[1] = &Obj55c8d0::FUN_004a4d70;
    handlers[2] = &Obj55c8d0::FUN_004a677c;
    handlers[3] = &Obj55c8d0::itemListMenuWaitUseCounter;
    handlers[4] = &Obj55c8d0::FUN_004a677c;
    handlers[5] = &Obj55c8d0::FUN_004a4658;
    handlers[6] = &Obj55c8d0::FUN_004a527c;
    handlers[7] = &Obj55c8d0::enableKindEight;
}
