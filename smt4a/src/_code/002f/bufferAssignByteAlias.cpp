#include "common.h"

extern "C" {

void bufferAssignByte(void);

/* Forwards to bufferAssignByte. */
void bufferAssignByteAlias(void)
{
    bufferAssignByte();
}

} /* extern "C" */
