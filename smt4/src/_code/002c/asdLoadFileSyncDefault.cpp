#include "common.h"
#include "util/AsdLoadFileSyncDefault.h"

extern "C" {

void *asdLoadFileSync(const char *path, u32 *size, u32 flags, u32 priority);

/* Loads a file into an owned buffer using the default request priority. */
void *asdLoadFileSyncDefault(const char *path)
{
    return asdLoadFileSync(path, NULL, 0, 4);
}

} /* extern "C" */
