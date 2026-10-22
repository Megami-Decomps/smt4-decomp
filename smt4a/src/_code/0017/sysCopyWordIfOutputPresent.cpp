#include "common.h"

extern "C" {

void sysCopyWordIfOutputPresent(const u32 *source, u32 *destination)
{
    if (destination != NULL) {
        *destination = *source;
    }
}

} /* extern "C" */
