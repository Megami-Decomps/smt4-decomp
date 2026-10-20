#include "common.h"

extern "C" {

void FUN_0030edec(u32 *vector, u32 begin, u32 end);

/* Calls FUN_0030edec(vector, begin, end) with the vector's first two words. */
void FUN_00306d44(u32 *vector)
{
    FUN_0030edec(vector, vector[0], vector[1]);
}

} /* extern "C" */
