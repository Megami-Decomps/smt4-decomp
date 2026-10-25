#include "shard/Shard0036.h"
#include "shard/handleArray10Free.h"

extern "C" {

extern void asdMemFreeSlot(u32 handle);
extern void asdMemFree(void *ptr);

/* Releases the ten handles and then the array itself. */
void handleArray10Free(HandleArray10 *array)
{
    s32 i;

    if (array == NULL) {
        return;
    }
    for (i = 0; i < 10; i++) {
        asdMemFreeSlot(array->handles[i]);
    }
    asdMemFree(array);
}

} /* extern "C" */
