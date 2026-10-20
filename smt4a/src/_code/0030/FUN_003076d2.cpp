#include "common.h"

extern "C" {

void bitFieldSet(u32 dest, u32 value);
u32 bitFieldTest(u32 source);

/* Calls bitFieldSet(dest, bitFieldTest(source)). */
void FUN_003076d2(u32 dest, u32 source)
{
    u32 value;

    value = bitFieldTest(source);
    bitFieldSet(dest, value);
}

} /* extern "C" */
