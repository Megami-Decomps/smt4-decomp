#include "common.h"

extern "C" {

void byteVectorErase(u32 *vector, u32 begin, u32 end);

/* Calls byteVectorErase(vector, begin, end) with the vector's first two words. */
void FUN_002f7824(u32 *vector)
{
    byteVectorErase(vector, vector[0], vector[1]);
}

} /* extern "C" */
