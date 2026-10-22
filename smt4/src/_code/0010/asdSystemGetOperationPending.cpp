#include "common.h"

extern "C" {

extern s8 g_operationPending;

s32 asdSystemGetOperationPending(void)
{
    return g_operationPending;
}

} /* extern "C" */
