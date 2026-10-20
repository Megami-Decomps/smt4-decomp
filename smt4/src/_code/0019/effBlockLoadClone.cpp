#include "common.h"

extern "C" {

void *asdLoadFileSync(u32 path, u32 *size, s32 count, s32 flags);
void *effBlockCloneDeep(void *block);
void asdMemFree(void *block);

/* Loads a file, deep-clones it as an effect block, frees the loaded copy and returns the clone. */
void *effBlockLoadClone(u32 path)
{
    u32 size;
    void *file = asdLoadFileSync(path, &size, 1, 0x80);
    void *clone = effBlockCloneDeep(file);

    asdMemFree(file);
    return clone;
}

} /* extern "C" */
