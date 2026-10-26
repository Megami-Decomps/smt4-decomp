/* NON_MATCHING: retail outlines the next-node loop after the return block; compiled code keeps it before the found-item check. */
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "shard/JobWork.h"
#include "shard/W6_W6Match2_GeometryResources.h"

// Look up a list-box item by its id.
extern "C" AsdListBoxItem* asdListBoxFindItem(u32 job, u32 id)
{
    AsdListBoxItem* item = NULL;
    AsdListNode* node = reinterpret_cast<AsdListBoxModel*>(jobGetWork(job))->items.first;
    for (; node != NULL; node = node->next) {
        if (((AsdListBoxItem*)node->item)->id == id)
            break;
    }
    if (node != NULL)
        item = (AsdListBoxItem*)node->item;
    return item;
}
