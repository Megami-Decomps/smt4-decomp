/* NON_MATCHING: retail stores group/firstItem/itemCount with one stmib before the other fields (built: strd+str scheduled after them). */
#include "shard/MessageIdList.h"

extern "C" {

void ifTouchRegionRemove(void);
void __aeabi_memset4(void *dst, u32 size, s32 value);
u16 FUN_002b8584(u32 group, u32 item);

/* Resets the list and fills it with `itemCount` message ids from `group` starting at `firstItem`. */
void FUN_00233670(MessageIdList *list, u32 group, s32 firstItem, s32 itemCount)
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
        __aeabi_memset4(list->ids, sizeof(list->ids), -1);
    }
    s32 item;
    for (item = 0; item < itemCount; item++) {
        list->ids[item] = FUN_002b8584(group, firstItem + item);
        list->idCount++;
    }
}

} /* extern "C" */
