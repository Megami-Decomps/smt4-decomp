#include "common.h"

extern "C" {

void vectorDestroyRange(u32 *vector, u32 begin, u32 end);

/* Calls vectorDestroyRange(vector, begin, end) with the vector's first two words. */
void clearStringVector(u32 *vector)
{
    vectorDestroyRange(vector, vector[0], vector[1]);
}

} /* extern "C" */
