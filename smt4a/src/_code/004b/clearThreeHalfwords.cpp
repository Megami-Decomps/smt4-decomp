#include "shard/Shard004B.h"

extern "C" {

void clearThreeHalfwords(u16 *values)
{
    values[0] = 0;
    values[1] = 0;
    values[2] = 0;
}

} /* extern "C" */
