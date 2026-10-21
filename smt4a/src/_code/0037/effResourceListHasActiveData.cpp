#include "shard/Resource.h"
#include "shard/W5_W5Match2_LinkedItems.h"

extern "C" u32 effResourceListHasActiveData(LinkedItems* resources)
{
    for (LinkedItem* item = resources->head; item != NULL; item = item->next) {
        Resource* resource = reinterpret_cast<Resource*>(item->value);
        s32 (*isActive)(void*) = g_handlerTable[resource->type].status.isActive;
        if (isActive != NULL && isActive(resource->data) != 0) {
            return 1;
        }
    }
    return 0;
}
