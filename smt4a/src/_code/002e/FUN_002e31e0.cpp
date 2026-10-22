#include "common.h"

/* Appends a byte and advances the output cursor. */
extern "C" void FUN_002e31e0(u8 value, u8 **cursor)
{
    u8 *output = *cursor;
    *output = value;
    *cursor = output + 1;
}
