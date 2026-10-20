#include "common.h"

extern "C" {

void FUN_00106d16(u32 value);

/* Calls FUN_00106d16 with the word `*valueRef`. */
void FUN_0011cdf8(u32 *valueRef)
{
    FUN_00106d16(*valueRef);
}

} /* extern "C" */
