#include "classes/Obj4223f8.h"

void Obj4223f8::resetHandlers()
{
    for (s32 i = 0; i < 9; ++i) {
        handlers[i] = NULL;
        enterHandlers[i] = NULL;
        leaveHandlers[i] = NULL;
    }
    handlers[0] = &Obj4223f8::enterList;
    handlers[1] = &Obj4223f8::followCursorAndDescribe;
    handlers[2] = &Obj4223f8::updateBrowse;
    handlers[3] = &Obj4223f8::finishUseCounterMotion;
    handlers[4] = &Obj4223f8::updateBrowse;
    handlers[5] = &Obj4223f8::confirmSelection;
    handlers[6] = &Obj4223f8::updatePointerTransition;
    handlers[7] = &Obj4223f8::enableKindEight;
}
