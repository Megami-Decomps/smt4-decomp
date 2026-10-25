#include "shard/Shard004B.h"
#include "shard/menu4CGetEntry.h"

extern "C" {

ListEntry20 *menu4CGetEntry(Menu4C *obj, s32 index)
{
    return obj->list[index];
}

} /* extern "C" */
