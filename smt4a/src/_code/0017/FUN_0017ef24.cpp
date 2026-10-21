#include "common.h"

extern "C" {

u32 FUN_0017ef24(u32 (*callback)(u32), const u32 *value)
{
    return callback(*value);
}

} /* extern "C" */
