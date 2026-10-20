#include "shard/Shard0036.h"

extern "C" {

extern void FUN_00237210(u32 handle);
extern void asdMemFree(void *ptr);

/* Releases the ten handles and then the array itself. */
void handleArray10Free(HandleArray10 *array)
{
    s32 i;

    for (i = 0; i < 10; i++) {
        FUN_00237210(array->handles[i]);
    }
    asdMemFree(array);
}

} /* extern "C" */
