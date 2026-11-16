#include "code/Code002a_VariantA.h"
#include "shard/Shard0031.h"

struct NineRowListInput {
    u8 unk000[0x124];
    FlaggedEntry grid;
    s32 top;
};
extern "C" {
s32 resourceRunOperationIfUnblocked(FlaggedEntry *);
s32 objectApplyIfUnblocked(FlaggedEntry *);
u32 FUN_00228b04(FlaggedEntry *, u32);
u32 padQueryLogicalKey(u32, u32);
u32 flaggedEntryGetValueA(FlaggedEntry *);
void scrollOwnerSetValue(FlaggedEntry *, s32);
void eventQueueAddUniqueIfValid(u32);

/* Keeps the nine-row list's top row in step with its cursor and scrolls it on the up/down buttons. */
void updateNineRowListInput(NineRowListInput *list)
{
    s32 previousTop = resourceRunOperationIfUnblocked(&list->grid);
    if (FUN_00228b04(&list->grid, 0)) {
        if (objectApplyIfUnblocked(&list->grid) > 9) {
            resourceRunOperationIfUnblocked(&list->grid);
            while (resourceRunOperationIfUnblocked(&list->grid) == previousTop) {
                if (resourceRunOperationIfUnblocked(&list->grid) == 0 &&
                    listCursorGetRowIfUnblocked(reinterpret_cast<const Object *>(&list->grid)) == 0)
                    break;
                if (resourceRunOperationIfUnblocked(&list->grid) == objectApplyIfUnblocked(&list->grid) - 9 &&
                    listCursorGetRowIfUnblocked(reinterpret_cast<const Object *>(&list->grid)) == 8)
                    break;
                FUN_00228b04(&list->grid, 0);
            }
        }
        list->top = resourceRunOperationIfUnblocked(&list->grid);
    }
    if (list->top != previousTop)
        eventQueueAddUniqueIfValid(0x100020d);
    if (padQueryLogicalKey(9, 0)) {
        if (resourceRunOperationIfUnblocked(&list->grid) == 0)
            return;
        eventQueueAddUniqueIfValid(0x100020d);
        scrollOwnerSetValue(&list->grid, --list->top);
    }
    if (padQueryLogicalKey(10, 0) && objectApplyIfUnblocked(&list->grid) >= 9) {
        s32 top = resourceRunOperationIfUnblocked(&list->grid);
        s32 count = objectApplyIfUnblocked(&list->grid);
        if (top != count - 9 &&
            (flaggedEntryGetValueA(&list->grid) != 0 || objectApplyIfUnblocked(&list->grid) >= 9)) {
            eventQueueAddUniqueIfValid(0x100020d);
            scrollOwnerSetValue(&list->grid, ++list->top);
        }
    }
}
}
