#include "common.h"
#include <string.h>

extern "C" {
extern const char DAT_004097a4[];
extern const char DAT_004097d0[];
extern const char DAT_004097e4[];

// Recognize the three event-model paths supplied by the patch archive.
s32 asdLoadFileIsPatched(const char *path)
{
    if (strcmp(path, DAT_004097a4) == 0 ||
        strcmp(path, DAT_004097d0) == 0 ||
        strcmp(path, DAT_004097e4) == 0)
        return 1;
    return 0;
}
}
