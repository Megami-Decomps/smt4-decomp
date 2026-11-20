#include "shard/S1ListPanel.h"
#include "classes/Obj422594.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct FlaggedEntry;

extern "C" {
u8 ifTouchGetSelectionModeForRegion(s32);
u32 uiListGetVisibleCount(const FlaggedEntry *);
s32 widgetGetVisibleLength(FlaggedEntry *);
s32 resourceRunEmbeddedOperationIfUnblocked(FlaggedEntry *);
s32 objectPartRunUnlessLocked(FlaggedEntry *);
s32 resourceRunOperationIfUnblocked(FlaggedEntry *);
s32 listCursorGetRowIfUnblocked(FlaggedEntry *);
void flaggedEntrySetValueA(FlaggedEntry *, s32);
void flaggedEntrySetValueB(FlaggedEntry *, s32);
void eventQueueAddUnique(u32);

u32 uiScrollHandleActionsOrTouch(FlaggedEntry *owner, const TextureTableEntryIV *sprite, const s16 *actions,
                  s32 firstAction, s32 secondAction, s32 thirdAction, s8 *specialAction,
                  s32 alternateAxis, s32 notify)
{
    u32 result = 0;
    ifTouchGetSelectionModeForRegion((s16)secondAction);
    ifTouchGetSelectionModeForRegion((s16)thirdAction);
    ifTouchGetSelectionModeForRegion((s16)firstAction);
    s32 special = 0;
    s32 selected = -1;
    s32 count = uiListGetVisibleCount(owner);
    if (actions != NULL) {
        if (alternateAxis)
            count = widgetGetVisibleLength(owner);
        for (s32 index = 0; index < count; ++index) {
            u8 state = ifTouchGetSelectionModeForRegion(actions[index]);
            if (state == 6) {
                special = 1;
                break;
            }
            if (state == 1 || state == 2) {
                selected = index;
                break;
            }
        }
    }
    s32 previousX = resourceRunEmbeddedOperationIfUnblocked(owner) + objectPartRunUnlessLocked(owner);
    s32 previousY = resourceRunOperationIfUnblocked(owner) + listCursorGetRowIfUnblocked(owner);
    if (selected >= 0) {
        if (alternateAxis)
            flaggedEntrySetValueB(owner, selected);
        else
            flaggedEntrySetValueA(owner, selected);
        result = 1;
    } else if (sprite != NULL) {
        Obj422594Pair rectangle = {
            sprite->x, sprite->y, sprite->placement->width, sprite->placement->height
        };
        result = FUN_0026ab64(owner, rectangle, firstAction, secondAction,
                              thirdAction, alternateAxis, notify);
    }
    if (notify) {
        s32 currentX = resourceRunEmbeddedOperationIfUnblocked(owner);
        currentX += objectPartRunUnlessLocked(owner);
        bool changed = currentX != previousX;
        if (!changed) {
            s32 currentY = resourceRunOperationIfUnblocked(owner);
            currentY += listCursorGetRowIfUnblocked(owner);
            changed = currentY != previousY;
        }
        if (changed)
            eventQueueAddUnique(0x100016c);
    }
    *specialAction = special != 0;
    return result;
}
}
