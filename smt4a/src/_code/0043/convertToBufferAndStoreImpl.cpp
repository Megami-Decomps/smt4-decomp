#include "common.h"

extern "C" {

int FUN_00438948(const u16 *text);

/* Forwards to FUN_00438948, the function that follows it. */
int convertToBufferAndStoreImpl(const u16 *text)
{
    return FUN_00438948(text);
}

} /* extern "C" */
