#include "common.h"

extern "C" u8 g_operationPending;

// Mark the pending operation.
extern "C" void operationSetPending()
{
    g_operationPending = 1;
}
