#include "common.h"
#include "sys/RuntimeObjects.h"

extern "C" {

void refCountIncrement(int *counter)
{
    *counter = *counter + 1;
}

} /* extern "C" */
