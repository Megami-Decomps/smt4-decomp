#include "common.h"

extern "C" {

s32 FUN_00124234(s32 first, u32 second);

/* Forwards the request to the shared handler. */
s32 FUN_0039474c(s32 first, u32 second)
{
    return FUN_00124234(first, second);
}

}
