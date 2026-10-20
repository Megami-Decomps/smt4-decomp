#include "common.h"

extern "C" {

void refCountIncrement(int *counter)
{
    *counter = *counter + 1;
}

} /* extern "C" */
