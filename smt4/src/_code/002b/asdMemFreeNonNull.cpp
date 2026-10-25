#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

void asdMemFreeNonNull(void *block)
{
    if (block != 0) {
        asdMemFree(block);
    }
}

} /* extern "C" */
