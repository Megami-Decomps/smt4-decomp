#include "shard/Shard004B.h"

extern "C" {

extern s32 flaggedValueHolderGetTotal(Menu4C *obj);

ListEntry20 *menu4CGetCurrentEntry(Menu4C *obj)
{
    s32 index = flaggedValueHolderGetTotal(obj);

    return obj->list[index];
}

} /* extern "C" */
