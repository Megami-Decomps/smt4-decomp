#include "common.h"

extern "C" {

void wideBufferAppend(u32 object, u32 value);
u32 onlineUrlGetText(u32 value);

/* Converts `value` with onlineUrlGetText and passes it to wideBufferAppend. */
void FUN_00123306(u32 object, u32 value)
{
    wideBufferAppend(object, onlineUrlGetText(value));
}

} /* extern "C" */
