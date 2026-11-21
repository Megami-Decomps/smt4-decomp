#include "code/Code002a_VariantA.h"
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
s32 gridNavigationHandleConfirm(ScrollList *list, s32 wrap);
s32 gridNavigationGetItemCount(ScrollList *list);
void eventQueueAddUniqueIfValid(u32 event);

/* Advances a page, stepping on while the scroll position is unchanged and the last page is not reached. */
void scrollListAdvancePage(ScrollPageOwner *owner, s32 pageSize)
{
    s32 oldTop = resourceRunOperationIfUnblocked(&owner->list);
    if (gridNavigationHandleConfirm(&owner->list, 0) != 0) {
        if (gridNavigationGetItemCount(&owner->list) > pageSize) {
            resourceRunOperationIfUnblocked(&owner->list);
            if (listCursorGetRowIfUnblocked(reinterpret_cast<const Object *>(&owner->list)) != pageSize - 1 && listCursorGetRowIfUnblocked(reinterpret_cast<const Object *>(&owner->list)) != 0) {
                eventQueueAddUniqueIfValid(0x100020D);
            }
            while (resourceRunOperationIfUnblocked(&owner->list) == oldTop) {
                if (resourceRunOperationIfUnblocked(&owner->list) == 0 && listCursorGetRowIfUnblocked(reinterpret_cast<const Object *>(&owner->list)) == 0)
                    break;
                if (resourceRunOperationIfUnblocked(&owner->list) == gridNavigationGetItemCount(&owner->list) - pageSize && listCursorGetRowIfUnblocked(reinterpret_cast<const Object *>(&owner->list)) == pageSize - 1)
                    break;
                gridNavigationHandleConfirm(&owner->list, 0);
            }
        }
        owner->savedTop = resourceRunOperationIfUnblocked(&owner->list);
    }
}
}
