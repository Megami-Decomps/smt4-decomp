#include "common.h"
#include "shard/refCountIncrement.h"

extern "C" {

void refCountIncrement(int *counter)
{
    *counter = *counter + 1;
}

} /* extern "C" */
