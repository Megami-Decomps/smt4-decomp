#include "code/Code002a_Smt4a.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameDataAccess_VariantH_Shard0031.h"
#include "gfx/TrackedRecord.h"
#include "sys/RuntimeObjects.h"
#include "code/Code002a_VariantA.h"
#include "shard/Shard0031.h"
#include "ui/IfTouch.h"
#include "code/Code002a.h"
#include "classes/Obj422594.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
s32 uiSearchPrimary(const FlaggedEntry *);
s32 uiSearchSecondary(const FlaggedEntry *);
u32 FUN_002e2848(FlaggedEntry *, Obj422594Pair, u32, u32, u32, s32, s32);

/* Apply the first accepted mode or touch selection, reporting blocked modes and optional changes. */
u32 uiScrollHandleActionsOrTouch(FlaggedEntry *entry, const TextureTableEntryIV *rectangle,
                 const s16 *ids, u32 firstKey, u32 secondKey, u32 thirdKey,
                 s8 *blockedMode, s32 secondary, s32 notify)
{
    u32 result = 0;
    recordGetModeForId((s16)secondKey);
    recordGetModeForId((s16)thirdKey);
    recordGetModeForId((s16)firstKey);
    u8 blocked = 0;
    s32 accepted = -1;
    s32 count = uiSearchPrimary(entry);
    if (ids != NULL) {
        if (secondary)
            count = uiSearchSecondary(entry);
        for (s32 index = 0; index < count; ++index) {
            s32 mode = recordGetModeForId(ids[index]);
            if (mode == 6) {
                blocked = 1;
                break;
            }
            if (mode == 1 || mode == 2) {
                accepted = index;
                break;
            }
        }
    }
    s32 primaryBefore = resourceRunEmbeddedOperationIfUnblocked(reinterpret_cast<Object *>(entry)) + listCursorGetRowOfChildIfUnblocked(entry);
    s32 secondaryBefore = resourceRunOperationIfUnblocked(reinterpret_cast<Object *>(entry)) + listCursorGetRowIfUnblocked(reinterpret_cast<const Object *>(entry));
    if (accepted >= 0) {
        if (secondary) {
            flaggedEntrySetValueB(entry, accepted);
        } else {
            flaggedEntrySetValueA(entry, accepted);
        }
        result = 1;
    } else if (rectangle != NULL) {
        Obj422594Pair bounds = {
            rectangle->x, rectangle->y,
            rectangle->placement->width, rectangle->placement->height
        };
        result = FUN_002e2848(entry, bounds, firstKey, secondKey, thirdKey,
                              secondary, notify);
    }
    if (notify) {
        s32 primaryAfter = resourceRunEmbeddedOperationIfUnblocked(reinterpret_cast<Object *>(entry));
        primaryAfter += listCursorGetRowOfChildIfUnblocked(entry);
        bool changed = primaryAfter != primaryBefore;
        if (!changed) {
            s32 secondaryAfter = resourceRunOperationIfUnblocked(reinterpret_cast<Object *>(entry));
            secondaryAfter += listCursorGetRowIfUnblocked(reinterpret_cast<const Object *>(entry));
            changed = secondaryAfter != secondaryBefore;
        }
        if (changed)
            eventQueueAddUnique(0x100020D);
    }
    *blockedMode = blocked != 0;
    return result;
}
}
