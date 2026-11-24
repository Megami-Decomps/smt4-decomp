/* NON_MATCHING: the two groups of panel flags and their tests match; armcc folds the initial pointer copy into the address calculation. */
#include "battle/ActorCardAnimations.h"
#include "battle/BtlUiObjCQuery.h"

/* Reports whether all five command panels are visible. */
extern "C" u32 FUN_002f934c(BtlUiObjCA *obj)
{
    /* BtlUiA describes the end of objC separately; the actor-card view spans the whole display. */
    const ActorCardAnimationsA *card = (const ActorCardAnimationsA *)obj;
    const ActorCardPanelVisibilityA *visibility = &card->panelVisibility;
    u32 visible = 1;
    if (visibility->hidden[0] || visibility->hidden[1]) {
        visible = 0;
    } else if (visibility->hidden[2] || visibility->hidden[3] || visibility->hidden[4]) {
        visible = 0;
    }
    return visible;
}
