#include "common.h"

extern "C" {

u32 FUN_00100326(u32 (*callback)(u32), const u32 *value)
{
    return callback(*value);
}

} /* extern "C" */
