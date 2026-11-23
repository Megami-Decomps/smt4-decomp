#include "AsdSDK/Source/Util/AsdListHelpers_LinkedItems.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"

struct EffBlock;

extern "C" {

EffBlock *effBlockCloneDeep(void *data);
void asdMemFree(void *ptr);
LinkedItem *effPartCreateDefault(void);

// Load a block from a file, clone it into a new node, append the node to the list and return it.
LinkedItem *effPartAppendFromFile(LinkedItems *list, const char *path)
{
    u32 size;
    void *data = asdLoadFileSyncNoContext(path, &size, 1, 0x80);
    EffBlock *block = effBlockCloneDeep(data);
    asdMemFree(data);
    LinkedItem *node = effPartCreateDefault();
    node->next = NULL;
    node->resource = block;
    linkedItemsAppend(list, node);
    return node;
}

} /* extern "C" */
