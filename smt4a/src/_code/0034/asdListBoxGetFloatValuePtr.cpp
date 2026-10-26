#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"

extern "C" {

extern AsdListBoxItem *asdListBoxFindItem(u32 listBox, s32 id);

/* The float value field of list box item `id`, or NULL when there is no such item. */
f32 *asdListBoxGetFloatValuePtr(u32 listBox, s32 id)
{
    AsdListBoxItem *item = asdListBoxFindItem(listBox, id);

    if (item != NULL) {
        return &item->floatValue;
    }
    return NULL;
}

} /* extern "C" */
