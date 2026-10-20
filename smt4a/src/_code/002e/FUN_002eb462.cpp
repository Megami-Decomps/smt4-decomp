#include "common.h"

extern "C" {

/* Packs a nibble pair into a byte: `high` in bits 4-7 and `low` in bits 0-3. */
void FUN_002eb462(u8 *dest, s8 high, u8 low)
{
    *dest = (high << 4) | low;
}

} /* extern "C" */
