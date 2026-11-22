#include "battle/btlUI.h"

/* Clears the active flag of every cached position request. */
extern "C" void battleUiClearPositionActiveFlags(BtlUiObjC *work)
{
    for (s32 index = 0; index < work->positionCount; ++index) {
        work->positions[index].active = 0;
    }
}
