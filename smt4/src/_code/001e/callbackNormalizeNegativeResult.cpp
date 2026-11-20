#include "common.h"

extern "C" s32 resultIsIdle(void *object);

/* Convert the helper's success result to the callback's negative sentinel. */
extern "C" s32 callbackNormalizeNegativeResult(void *object)
{
    return resultIsIdle(object) != 0 ? -1 : 0;
}
