#include "common.h"

extern "C" {
void asdLoadFileSync(const char *path, void *output, u32 flags, u32 mode);

/* Loads a file synchronously using mode 4. */
void FUN_002c3124(const char *path, void *output, u32 flags)
{
    asdLoadFileSync(path, output, flags, 4);
}
}
