#include "battle/btlUI.h"
#include "ui/UiSpriteApi.h"

/* Read completion for a mode-three timer when the position isn't reversed. */
extern "C" s32 recordQueryStateThree(BtlUiObjB *owner)
{
    if (uiSpriteGetOperationMode(&owner->timer) == 3 && owner->timer.positionReverse == 0) {
        return uiSpriteGetCompletionState(&owner->timer);
    }
    return 1;
}
