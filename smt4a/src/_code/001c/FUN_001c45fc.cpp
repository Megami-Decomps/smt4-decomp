#include "common.h"

extern "C" {

/* Passes a stored word to its callback. */
u32 FUN_001c45fc(u32 (*callback)(u32), const u32 *value)
{
    return callback(*value);
}

} /* extern "C" */
