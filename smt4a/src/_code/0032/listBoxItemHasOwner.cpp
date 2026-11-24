#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"
#include "shard/W6_W6Match2_GeometryResources.h"

extern "C" {

/* Tests whether the selected list-box item exists and its toggle value is nonzero. */
s32 listBoxItemHasOwner(u32 listBox, u32 id)
{
    AsdListBoxItem *item = asdListBoxFindItem(listBox, id);
    if (item == NULL) {
        return 0;
    }
    return item->intValue != 0;
}
} /* extern "C" */
