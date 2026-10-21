#include "common.h"

extern "C" {

extern s32 FUN_001478f4(void);

/* Normalizes the subsystem status to a boolean. */
bool FUN_00139c4c(void)
{
    bool available = false;
    if (FUN_001478f4() != 0) {
        available = true;
    }
    return available;
}

} /* extern "C" */
