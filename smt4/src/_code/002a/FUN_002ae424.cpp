#include "common.h"

extern "C" {

/* Whether `code` is in 0xF801-0xF88F. */
u8 FUN_002ae424(int code)
{
    return code - 0xf801U < 0x8f;
}

} /* extern "C" */
