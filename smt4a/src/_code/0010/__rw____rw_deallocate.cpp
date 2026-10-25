#include "AsdSDK/AsdMemUtil.h"

extern "C" {

/* Forwards the block to asdOperatorDelete. */
void _ZN4__rw15__rw_deallocateEPvji(void *block, u32 count, s32 alignment)
{
    asdOperatorDelete(block);
}

} /* extern "C" */
