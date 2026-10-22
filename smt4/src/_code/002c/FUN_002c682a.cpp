#include "common.h"

/* Appends a byte and advances the output cursor. */
extern "C" void FUN_002c682a(u8 value, u8 **cursor)
{
    u8 *output = *cursor;
    *output = value;
    *cursor = output + 1;
}
