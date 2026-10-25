#include "common.h"

extern "C" {

void *asdLoadFileSyncNoContext(u32 path, u32 *size, s32 count, s32 flags);
void *FUN_00290edc(void *block);
void asdMemFree(void *block);

/* Loads a file, deep-clones it as an effect block, frees the loaded copy and returns the clone. */
void *effBlockLoadClone(u32 path)
{
    u32 size;
    void *file = asdLoadFileSyncNoContext(path, &size, 1, 0x80);
    void *clone = FUN_00290edc(file);

    asdMemFree(file);
    return clone;
}

} /* extern "C" */
