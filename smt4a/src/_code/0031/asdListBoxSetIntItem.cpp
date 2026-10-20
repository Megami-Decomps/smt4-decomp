#include "AsdSDK/Source/Util/AsdListBox.h"

extern "C" {

extern AsdListBoxItem *asdListBoxFindItem(u32 listBox, s32 id);
extern void asdListBoxMarkDirty(u32 listBox);

/* Turns the list box item `id` into an INT item with the given value and range. */
void asdListBoxSetIntItem(u32 listBox, s32 id, s32 value, s32 min, s32 max, u8 flags)
{
    AsdListBoxItem *item = asdListBoxFindItem(listBox, id);

    if (item != NULL) {
        item->intValue = value;
        item->type = ASD_LISTBOX_INT;
        item->min.i = min;
        item->max.i = max;
        item->flags = flags;
        asdListBoxMarkDirty(listBox);
    }
}

} /* extern "C" */
