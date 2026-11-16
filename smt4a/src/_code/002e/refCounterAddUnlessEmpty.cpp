#include "common.h"

extern "C" {

extern u8 g_rwEmptyStringRep; /* the shared empty instance, never counted */

/* Adds a reference unless `counter` is the shared empty instance. */
void refCounterAddUnlessEmpty(s32 *counter)
{
    if (counter != (s32 *)&g_rwEmptyStringRep) {
        (*counter)++;
    }
}

} /* extern "C" */
