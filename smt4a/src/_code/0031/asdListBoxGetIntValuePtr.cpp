#include "AsdSDK/Source/Util/AsdListBox.h"

extern "C" {

extern AsdListBoxItem *asdListBoxFindItem(u32 listBox, s32 id);

/* The int value field of list box item `id`, or NULL when there is no such item. */
s32 *asdListBoxGetIntValuePtr(u32 listBox, s32 id)
{
    AsdListBoxItem *item = asdListBoxFindItem(listBox, id);

    if (item != NULL) {
        return &item->intValue;
    }
    return NULL;
}

} /* extern "C" */
