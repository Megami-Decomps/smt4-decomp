#include "common.h"

extern "C" {

void *asdLoadFileSync(s32 *result, void *context, const char *path, u32 *size, u32 flags, u32 alignment);

/* Loads a file into an owned buffer using the default request alignment. */
void *asdLoadFileSyncDefault(const char *path)
{
    return asdLoadFileSync(NULL, NULL, path, NULL, 0, 4);
}

} /* extern "C" */
