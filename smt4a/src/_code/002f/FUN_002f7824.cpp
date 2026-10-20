#include "common.h"

extern "C" {

void FUN_00310d0a(u32 *vector, u32 begin, u32 end);

/* Calls FUN_00310d0a(vector, begin, end) with the vector's first two words. */
void FUN_002f7824(u32 *vector)
{
    FUN_00310d0a(vector, vector[0], vector[1]);
}

} /* extern "C" */
