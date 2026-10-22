#include "common.h"

extern "C" s8 g_operationPending;

/* Clear the pending request flag. */
extern "C" s32 FUN_003336c8(void)
{
    g_operationPending = 0;
    return 0;
}
