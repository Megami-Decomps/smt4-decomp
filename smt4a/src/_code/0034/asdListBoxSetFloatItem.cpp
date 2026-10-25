#include "AsdSDK/Source/Util/AsdListBox.h"
#include "shard/asdListBoxSetFloatItem.h"

extern "C" {
AsdListBoxItem *asdListBoxFindItem(AsdListBox *, u32);
void asdListBoxMarkDirty(AsdListBox *);

// Configure an existing list-box row as a ranged floating-point item.
void asdListBoxSetFloatItem(AsdListBox *listBox, u32 id, s32 minimum, s32 maximum, f32 value)
{
    AsdListBoxItem *item = asdListBoxFindItem(listBox, id);
    if (item != NULL) {
        item->floatValue = value;
        item->min.i = minimum;
        item->type = ASD_LISTBOX_FLOAT;
        item->max.i = maximum;
        asdListBoxMarkDirty(listBox);
    }
}
}
