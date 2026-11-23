#include "AsdSDK/Source/Util/AsdListHelpers_LinkedItems.h"

extern "C" {

extern void *effBlockCloneDeep(void *block);
extern LinkedItem *effPartCreateDefault(void);

/* Appends a node holding a deep copy of `block` to the list and returns it. */
LinkedItem *effPartAppendClone(LinkedItems *list, void *block)
{
    void *clone = effBlockCloneDeep(block);
    LinkedItem *node = effPartCreateDefault();

    node->next = NULL;
    node->resource = clone;
    linkedItemsAppend(list, node);
    return node;
}

} /* extern "C" */
