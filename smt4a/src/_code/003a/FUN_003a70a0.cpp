#include "common.h"

extern "C" {

s32 lmapMainGetUnkCC(void);

/* Script condition: whether the map main's state is anything but five. */
s32 FUN_003a70a0(void)
{
    if (lmapMainGetUnkCC() == 5)
        return 0;
    return 1;
}

} /* extern "C" */
