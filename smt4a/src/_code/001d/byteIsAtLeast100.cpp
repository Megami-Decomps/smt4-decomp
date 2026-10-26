#include "common.h"
#include "util/BitsAndBytes.h"

extern "C" {

/* Returns whether the referenced byte is at least 100. */
u8 byteIsAtLeast100(const u8 *valueRef)
{
    return *valueRef >= 100;
}

} /* extern "C" */
