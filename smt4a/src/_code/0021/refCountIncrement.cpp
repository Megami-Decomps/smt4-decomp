#include "common.h"
#include "sys/RuntimeObjects_VariantC.h"

extern "C" {

/* Increments the referenced word. */
void refCountIncrement(s32 *counter)
{
    *counter = *counter + 1;
}

} /* extern "C" */
