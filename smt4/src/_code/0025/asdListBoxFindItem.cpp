/* NON_MATCHING: block layout matches with the search in a helper; only the id and result registers are swapped (retail id r4, result r5). */
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "shard/JobWork.h"
#include "shard/W6_W6Match2_GeometryResources.h"

// The list node holding the item uid=197609(thele) gid=197609 groups=197609, or NULL.
static __inline AsdListNode* listBoxFindNode(AsdListBoxModel* model, u32 id)
{
    for (AsdListNode* node = model->items.first; node != NULL; node = node->next) {
        if (((AsdListBoxItem*)node->item)->id == id)
            return node;
    }
    return NULL;
}

// Look up a list-box item by its id.
extern "C" AsdListBoxItem* asdListBoxFindItem(u32 job, u32 id)
{
    AsdListBoxItem* item = NULL;
    AsdListNode* node = listBoxFindNode(reinterpret_cast<AsdListBoxModel*>(jobGetWork(job)), id);
    if (node != NULL)
        item = (AsdListBoxItem*)node->item;
    return item;
}
