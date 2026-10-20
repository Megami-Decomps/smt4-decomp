#include "common.h"

extern "C" {

int FUN_00253d60(u16 *dst, u32 src);
extern u32 FUN_002b63ac(void);

u16 FUN_00257e40(int index)
{
    u32 source = FUN_002b63ac();
    u16 values[20];

    FUN_00253d60(values, source);
    return values[index] >> 10;
}

} /* extern "C" */
