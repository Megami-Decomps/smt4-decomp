/* NON_MATCHING: retail outlines the next-node loop after the return block; compiled code keeps it before the found-item check. */
#include "AsdSDK/Source/Util/AsdListBox.h"

extern "C" AsdListBoxModel* jobGetWork(u32 job);

// Look up a list-box item by its id.
extern "C" AsdListBoxItem* asdListBoxFindItem(u32 job, u32 id)
{
    AsdListBoxItem* item = NULL;
    AsdListNode* node = jobGetWork(job)->items.first;
    for (; node != NULL; node = node->next) {
        if (((AsdListBoxItem*)node->item)->id == id)
            break;
    }
    if (node != NULL)
        item = (AsdListBoxItem*)node->item;
    return item;
}
