#include "common.h"

extern "C" void submitDefaultFloatParameters(void *context);

// Forward the callback to the recovered common implementation.
extern "C" void forwardRecoveredCallback(void *context)
{
    submitDefaultFloatParameters(context);
}
