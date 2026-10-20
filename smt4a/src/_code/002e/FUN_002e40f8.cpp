#include "common.h"

extern "C" {

extern u8 DAT_0064c004; /* the shared empty instance, never counted */

/* Adds a reference unless `counter` is the shared empty instance. */
void FUN_002e40f8(s32 *counter)
{
    if (counter != (s32 *)&DAT_0064c004) {
        (*counter)++;
    }
}

} /* extern "C" */
