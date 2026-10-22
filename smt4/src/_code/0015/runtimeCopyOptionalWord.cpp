#include "common.h"

/* Copy the callback's scalar only when an output slot was supplied. */
extern "C" void runtimeCopyOptionalWord(const s32 *value, s32 *output)
{
    if (output != NULL) {
        *output = *value;
    }
}
