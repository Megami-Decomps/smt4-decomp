#include "common.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"

extern "C" {

/* Forwards its four arguments to asdLoadFileSync after two NULL arguments. */
void *asdLoadFileSyncNoContext(const char *path, u32 *size, u32 flags, u32 alignment)
{
    return asdLoadFileSync(NULL, NULL, path, size, flags, alignment);
}

} /* extern "C" */
