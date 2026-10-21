#include "common.h"

extern "C" {

extern s32 FUN_00110690(void);

/* Normalizes the subsystem status to a boolean. */
bool FUN_00105478(void)
{
    bool available = false;
    if (FUN_00110690() != 0) {
        available = true;
    }
    return available;
}

} /* extern "C" */
