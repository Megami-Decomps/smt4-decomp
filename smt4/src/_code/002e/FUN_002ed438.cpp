#include "common.h"

extern "C" {

u32 messageIsWindowIdle(void);

/* Forwards to messageIsWindowIdle, the function placed right after it. */
u32 FUN_002ed438(void)
{
    return messageIsWindowIdle();
}

} /* extern "C" */
