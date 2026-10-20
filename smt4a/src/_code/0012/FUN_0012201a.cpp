#include "common.h"

extern "C" {

void FUN_002f4cd6(u32 object, u32 value);

/* Calls FUN_002f4cd6 with `object` and the word `*valueRef`. */
void FUN_0012201a(u32 object, u32 *valueRef)
{
    FUN_002f4cd6(object, *valueRef);
}

} /* extern "C" */
