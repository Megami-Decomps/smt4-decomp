#include "common.h"
#include "util/BitsAndBytes.h"

extern "C" {

u8 byteIsAtLeast100(const u8 *value)
{
    return *value >= 100;
}

} /* extern "C" */
