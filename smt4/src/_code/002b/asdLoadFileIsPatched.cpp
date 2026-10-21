#include "common.h"

extern "C" {
extern const char DAT_004097a4[];
extern const char DAT_004097d0[];
extern const char DAT_004097e4[];
s32 libc_strcmp(const char *, const char *);

// Recognize the three event-model paths supplied by the patch archive.
s32 asdLoadFileIsPatched(const char *path)
{
    if (libc_strcmp(path, DAT_004097a4) == 0 ||
        libc_strcmp(path, DAT_004097d0) == 0 ||
        libc_strcmp(path, DAT_004097e4) == 0)
        return 1;
    return 0;
}
}
