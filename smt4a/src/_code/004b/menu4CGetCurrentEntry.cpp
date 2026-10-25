#include "shard/Shard004B.h"
#include "shard/Shard004A.h"

extern "C" {


ListEntry20 *menu4CGetCurrentEntry(Menu4C *obj)
{
    s32 index = flaggedValueHolderGetTotal(reinterpret_cast<const FlaggedValueHolder *>(obj));

    return obj->list[index];
}

} /* extern "C" */
