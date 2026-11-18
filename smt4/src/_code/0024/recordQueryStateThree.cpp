/* Uses completion only for a non-reversed mode-three position track. */
#include "ui/UiSpriteApi.h"
#include "battle/btlUI.h"
extern "C" s32 recordQueryStateThree(const BtlUiObjB *owner)
{
    if (uiSpriteGetOperationMode(&owner->timer) != 3)
        return 1;
    if (owner->timer.positionReverse != 0)
        return 1;
    return uiSpriteGetCompletionState(&owner->timer);
}
