#include "AsdSDK/Source/Util/AsdListHelpers_LinkedItems.h"

extern "C" LinkedItem* effPartCreateDefault(void);

// Allocate an item and append it to the owner's doubly linked list.
extern "C" LinkedItem* effPartAppend(LinkedItems* list, u32 value)
{
    LinkedItem* item = effPartCreateDefault();
    item->next = NULL;
    item->value = value;
    linkedItemsAppend(list, item);
    return item;
}
