/* NON_MATCHING: Thumb argument swap uses r2 to save the opposite input. */
#include "common.h"

extern "C" void FUN_00119da2(void *target, void *source);

/* Adapt the virtual operation to the target-first helper. */
extern "C" void copyWithReversedArguments(void *source, void *target)
{
    FUN_00119da2(target, source);
}
