#include "common.h"

extern "C" {

extern void *DAT_0057f244;
void hunterDatabaseDrawWithState(void *owner, s32 value);

s32 FUN_0039b960(s32 value)
{
    if (DAT_0057f244 != NULL) {
        hunterDatabaseDrawWithState(DAT_0057f244, value);
    }
    return 0;
}

} /* extern "C" */
