#include "common.h"

extern "C" {

void copyValueIfDestination(const u32 *source, u32 *destination)
{
    if (destination != NULL) {
        *destination = *source;
    }
}

} /* extern "C" */
