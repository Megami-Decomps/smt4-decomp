#include "shard/W6_W6Match2_ScrollList.h"
#include "gamedata/GameDataAccess_Smt4a.h"

extern "C" {

s32 scrollListGetTop(const ScrollList *list);

// Stores a new selection value when unlocked, marking the owner changed if it differs.
void recordTrackDirtyValue(ScrollSelectionOwner *owner, s32 value)
{
    if (owner->locked == 0) {
        if (scrollListGetTop(&owner->list) != value) {
            owner->changed = 1;
        }
        owner->list.offset = value;
    }
}

} /* extern "C" */
