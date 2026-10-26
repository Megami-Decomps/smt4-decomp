/* Clears a 64-bit value (a tick count or timestamp). */
#include "common.h"

extern "C" void FUN_001f3e28(u64 *value)
{
    *value = 0;
}
