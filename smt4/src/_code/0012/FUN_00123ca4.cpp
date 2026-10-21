#include "common.h"

extern "C" {

/* Passes a stored word to its callback. */
u32 FUN_00123ca4(u32 (*callback)(u32), const u32 *value)
{
    return callback(*value);
}

} /* extern "C" */
