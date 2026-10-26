#include "code/Code002a_VariantA.h"
/* NON_MATCHING: loop condition is rotated below its body; retained scroll/page values use different saved registers. */
#include "shard/W6_W6Match2_ScrollList.h"
#include <stddef.h>
#include "shard/Shard0031.h"

namespace {
struct ScrollPageOwner {
    u8 unk00[0x50];
    s32 savedTop; // 0x50
    u8 unk54[0x68];
    ScrollList list; // 0xBC
};
typedef char ScrollPageOwnerOffsetsCheck[
    offsetof(ScrollPageOwner, savedTop) == 0x50 && offsetof(ScrollPageOwner, list) == 0xBC ? 1 : -1];
}

extern "C" {
s32 resourceRunOperationIfUnblocked(ScrollList *list);
s32 FUN_00228b04(ScrollList *list, s32 wrap);
s32 objectApplyIfUnblocked(ScrollList *list);
void eventQueueAddUniqueIfValid(u32 event);

// Advance a page without stopping on an unchanged scroll position or a partial page.
void FUN_003f6f68(ScrollPageOwner *owner, s32 pageSize)
{
    s32 oldTop = resourceRunOperationIfUnblocked(&owner->list);
    if (FUN_00228b04(&owner->list, 0) != 0) {
        if (objectApplyIfUnblocked(&owner->list) > pageSize) {
            resourceRunOperationIfUnblocked(&owner->list);
            if (FUN_002a4894(reinterpret_cast<const Object *>(&owner->list)) != pageSize - 1 && FUN_002a4894(reinterpret_cast<const Object *>(&owner->list)) != 0) {
                eventQueueAddUniqueIfValid(0x100020D);
            }
            for (s32 top = resourceRunOperationIfUnblocked(&owner->list);
                 top == oldTop &&
                     (resourceRunOperationIfUnblocked(&owner->list) != 0 || FUN_002a4894(reinterpret_cast<const Object *>(&owner->list)) != 0);
                 top = resourceRunOperationIfUnblocked(&owner->list)) {
                top = resourceRunOperationIfUnblocked(&owner->list);
                s32 count = objectApplyIfUnblocked(&owner->list);
                if (top == count - pageSize && FUN_002a4894(reinterpret_cast<const Object *>(&owner->list)) == pageSize - 1) {
                    break;
                }
                FUN_00228b04(&owner->list, 0);
            }
        }
        owner->savedTop = resourceRunOperationIfUnblocked(&owner->list);
    }
}
}
