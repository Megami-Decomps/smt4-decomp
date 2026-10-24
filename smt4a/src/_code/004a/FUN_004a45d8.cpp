#include "common.h"

extern "C" {

/* Comparator: orders records by their leading u16 id. */
s32 FUN_004a45d8(const u16 *a, const u16 *b)
{
    return *a - *b;
}

} /* extern "C" */
