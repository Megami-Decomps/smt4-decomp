#include "AsdSDK/Source/Util/AsdListBox.h"

extern "C" {

extern AsdListBoxItem *asdListBoxFindItem(u32 listBox, s32 id);
extern void asdListBoxMarkDirty(u32 listBox);

/* Turns the list box item `id` into a TOGGLE item with the given value. */
void asdListBoxSetToggleItem(u32 listBox, s32 id, s32 value)
{
    AsdListBoxItem *item = asdListBoxFindItem(listBox, id);

    if (item != NULL) {
        item->type = ASD_LISTBOX_TOGGLE;
        item->intValue = value;
        item->min.i = 0;
        item->max.i = 1;
        asdListBoxMarkDirty(listBox);
    }
}

} /* extern "C" */
