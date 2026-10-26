#include "common.h"

/* Passes 0 and 1 through, anything else becomes 3. */
extern "C" u32 FUN_001d07e0(u32 value)
{
    if (value == 0 || value == 1) {
        return value;
    }
    return 3;
}
