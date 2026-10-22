/* NON_MATCHING: retail clears ids with __aeabi_memset4 (4-aligned) and stores group/firstItem/itemCount with one stmib before the other fields. */
#include "shard/MessageIdList.h"
#include <string.h>

extern "C" {

void ifTouchRegionRemove(void);
u16 FUN_001643b4(u32 group, u32 item);

/* Resets the list and fills it with `itemCount` message ids from `group` starting at `firstItem`. */
void FUN_004d05c4(MessageIdList *list, u32 group, s32 firstItem, s32 itemCount)
{
    list->group = group;
    list->firstItem = firstItem;
    list->itemCount = itemCount;
    list->selected = 0xffff;
    list->unk11 = 0;
    list->unk12 = 0;
    list->unk16 = 0;
    if (list->idCount > 0) {
        s32 i;
        for (i = 0; i < list->idCount; i++) {
            ifTouchRegionRemove();
        }
        list->idCount = 0;
        memset(list->ids, 0xff, sizeof(list->ids));
    }
    s32 item;
    for (item = 0; item < itemCount; item++) {
        list->ids[item] = FUN_001643b4(group, firstItem + item);
        list->idCount++;
    }
}

} /* extern "C" */
