#include "common.h"

/* Orders entries by their leading unsigned 16-bit key. */
extern "C" int FUN_00476dfc(const u16 *left, const u16 *right)
{
    return *left - *right;
}
