#include "shard/Shard003B.h"

/* Report whether the optional object's state flag is set. */
extern "C" s32 FUN_003bc9b8(const StateFlag46 *object)
{
    if (object == NULL)
        return 0;
    return object->state != 0;
}
