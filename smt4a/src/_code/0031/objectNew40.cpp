#include "shard/Shard0031.h"

extern "C" {

extern void *operatorNew(u32 size);
extern s32 FUN_00301490(void *object);

/* Allocates a 0x40-byte object and initializes it. */
void objectNew40(void)
{
    void *object = operatorNew(0x40);

    if (object != NULL) {
        FUN_00301490(object);
    }
}

} /* extern "C" */
