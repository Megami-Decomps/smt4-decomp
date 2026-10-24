#include "common.h"

extern "C" {

/* Copies the word to the destination when there is one. */
void FUN_001bc5f4(const u32 *source, u32 *destination)
{
    if (destination != NULL) {
        *destination = *source;
    }
}

} /* extern "C" */
