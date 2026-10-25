#include "shard/W6_W6Match8_UiResourceParameters.h"
#include <string.h>

extern "C" {

/* Clear every count, pointer and padding byte in the resource packet. */
void paramsClearPacket(UiResourceParameters *parameters)
{
    memset(parameters, 0, sizeof(*parameters));
}

} /* extern "C" */
