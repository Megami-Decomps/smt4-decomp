#include "AsdSDK/Source/Util/AsdListBox.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {
AsdListBoxItem *asdListBoxFindItem(AsdListBox *, u32);
void asdListBoxMarkDirty(AsdListBox *);

// Configure an existing list-box row as a ranged floating-point item.
void asdListBoxSetFloatItem(AsdListBox *listBox, u32 id, f32 value, s32 minimum, s32 maximum)
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
