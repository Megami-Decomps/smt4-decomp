#include "common.h"

extern "C" {

s32 FUN_002bf810(s32 first, u32 second);

/* Forwards the request to the shared handler. */
s32 FUN_0039471c(s32 first, u32 second)
{
    return FUN_002bf810(first, second);
}

}
