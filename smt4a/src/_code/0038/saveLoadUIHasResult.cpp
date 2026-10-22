#include "common.h"

extern "C" {

s32 saveLoadUIGetFlag(void);

/* Forwards to saveLoadUIGetFlag, the function that follows it. */
s32 saveLoadUIHasResult(void)
{
    return saveLoadUIGetFlag();
}

} /* extern "C" */
