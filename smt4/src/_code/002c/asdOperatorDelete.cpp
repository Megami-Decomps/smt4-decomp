#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

void asdOperatorDelete(void *memory)
{
    if (memory != 0) {
        asdMemFree(memory);
        return;
    }
}

} /* extern "C" */
