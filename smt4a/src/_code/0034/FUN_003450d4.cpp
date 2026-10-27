#include "code/Code002a_VariantA.h"
/* NON_MATCHING: packed coordinates build through 16-bit bitfields like retail; remaining: the packed-pair instruction order and the trailing call arguments copy through VFP (vldr/vstr) instead of retail's ldr + stm. */
#include "shard/Shard0031.h"
#include "ui/TouchRectangleRequest.h"
#include "code/Code002a.h"

union PackedPair {
    struct {
        u32 low : 16;
        u32 high : 16;
    } fields;
    u32 word;
};

extern "C" {
s32 recordGetModeForId(s32);
s32 uiSearchPrimary(const FlaggedEntry *);
s32 uiSearchSecondary(const FlaggedEntry *);
s32 resourceRunEmbeddedOperationIfUnblocked(const FlaggedEntry *);
s32 resourceRunOperationIfUnblocked(const FlaggedEntry *);
void flaggedEntrySetValueA(FlaggedEntry *, s32);
void flaggedEntrySetValueB(FlaggedEntry *, s32);
u32 FUN_002e2848(FlaggedEntry *, u32, u32, u32, u32, u32, s32, s32);
void eventQueueAddUnique(u32);

/* Apply the first accepted mode or touch selection, reporting blocked modes and optional changes. */
u32 FUN_003450d4(FlaggedEntry *entry, const TouchRectangleRequest *rectangle,
                 const s16 *ids, u32 firstKey, u32 secondKey, u32 thirdKey,
                 bool *blockedMode, s32 secondary, s32 notify)
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
    s32 primaryBefore = resourceRunEmbeddedOperationIfUnblocked(entry) + FUN_002a4878(entry);
    s32 secondaryBefore = resourceRunOperationIfUnblocked(entry) + FUN_002a4894(reinterpret_cast<const Object *>(entry));
    if (accepted >= 0) {
        if (secondary)
            flaggedEntrySetValueB(entry, accepted);
        else
            flaggedEntrySetValueA(entry, accepted);
        result = 1;
    } else if (rectangle != NULL) {
        PackedPair position = {{ (u32)rectangle->x, (u32)rectangle->y }};
        PackedPair dimensions = {{ (u32)rectangle->dimensions->width, (u32)rectangle->dimensions->height }};
        result = FUN_002e2848(entry, position.word, dimensions.word, firstKey, secondKey, thirdKey,
                              secondary, notify);
    }
    if (notify) {
        s32 primaryAfter = resourceRunEmbeddedOperationIfUnblocked(entry);
        primaryAfter += FUN_002a4878(entry);
        bool changed = primaryAfter != primaryBefore;
        if (!changed) {
            s32 secondaryAfter = resourceRunOperationIfUnblocked(entry);
            secondaryAfter += FUN_002a4894(reinterpret_cast<const Object *>(entry));
            changed = secondaryAfter != secondaryBefore;
        }
        if (changed)
            eventQueueAddUnique(0x100020D);
    }
    *blockedMode = blocked != 0;
    return result;
}
}
