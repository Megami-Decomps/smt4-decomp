/* NON_MATCHING: packed rectangle loads and boolean-output normalization fold more aggressively, and coordinate registers differ; an optimization flag may explain this. */
#include "shard/S1ListPanel.h"
#include "classes/Obj422594.h"

struct FlaggedEntry;

extern "C" {
u8 ifTouchGetSelectionModeForRegion(s32);
u32 FUN_0029d644(const FlaggedEntry *);
s32 FUN_0028cfbc(FlaggedEntry *);
s32 FUN_0029e93c(FlaggedEntry *);
s32 objectPartRunUnlessLocked(FlaggedEntry *);
s32 FUN_0029efc0(FlaggedEntry *);
s32 FUN_0029efa8(FlaggedEntry *);
void flaggedEntrySetValueA(FlaggedEntry *, s32);
void flaggedEntrySetValueB(FlaggedEntry *, s32);
void eventQueueAddUnique(u32);

u32 uiScrollHandleActionsOrTouch(FlaggedEntry *owner, const SpriteInfo *sprite, const s16 *actions,
                  s32 firstAction, s32 secondAction, s32 thirdAction, bool *specialAction,
                  s32 alternateAxis, s32 notify)
{
    u32 result = 0;
    ifTouchGetSelectionModeForRegion((s16)secondAction);
    ifTouchGetSelectionModeForRegion((s16)thirdAction);
    ifTouchGetSelectionModeForRegion((s16)firstAction);
    bool special = false;
    s32 selected = -1;
    s32 count = FUN_0029d644(owner);
    if (actions != NULL) {
        if (alternateAxis)
            count = FUN_0028cfbc(owner);
        for (s32 index = 0; index < count; ++index) {
            u8 state = ifTouchGetSelectionModeForRegion(actions[index]);
            if (state == 6) {
                special = true;
                break;
            }
            if (state == 1 || state == 2) {
                selected = index;
                break;
            }
        }
    }
    s32 previousX = FUN_0029e93c(owner);
    previousX += objectPartRunUnlessLocked(owner);
    s32 previousY = FUN_0029efc0(owner);
    previousY += FUN_0029efa8(owner);
    if (selected >= 0) {
        if (alternateAxis)
            flaggedEntrySetValueB(owner, selected);
        else
            flaggedEntrySetValueA(owner, selected);
        result = 1;
    } else if (sprite != NULL) {
        Obj422594Pair rectangle;
        rectangle.first = (u16)sprite->x | ((u32)(u16)sprite->y << 16);
        rectangle.second = (u16)sprite->size[0] | ((u32)(u16)sprite->size[1] << 16);
        result = FUN_0026ab64(owner, rectangle, firstAction, secondAction,
                              thirdAction, alternateAxis, notify);
    }
    if (notify) {
        s32 currentX = FUN_0029e93c(owner);
        currentX += objectPartRunUnlessLocked(owner);
        bool changed = currentX != previousX;
        if (!changed) {
            s32 currentY = FUN_0029efc0(owner);
            currentY += FUN_0029efa8(owner);
            changed = currentY != previousY;
        }
        if (changed)
            eventQueueAddUnique(0x100016c);
    }
    *specialAction = special;
    return result;
}
}
