#include "shard/Shard004B.h"

extern "C" {

extern s32 FUN_004cfe4c(Menu4C *obj);

ListEntry20 *menu4CGetCurrentEntry(Menu4C *obj)
{
    s32 index = FUN_004cfe4c(obj);

    return obj->list[index];
}

} /* extern "C" */
