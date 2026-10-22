#include "common.h"

extern "C" s32 FUN_002b8660(void *object);

/* Convert the helper's success result to the callback's negative sentinel. */
extern "C" s32 callbackNormalizeNegativeResult(void *object)
{
    return FUN_002b8660(object) != 0 ? -1 : 0;
}
