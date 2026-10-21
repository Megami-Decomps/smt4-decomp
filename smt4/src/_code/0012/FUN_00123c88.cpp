#include "common.h"

extern "C" {

/* Copies a stored word when an output pointer is supplied. */
void FUN_00123c88(const u32 *value, u32 *output)
{
    if (output != NULL) {
        *output = *value;
    }
}

} /* extern "C" */
