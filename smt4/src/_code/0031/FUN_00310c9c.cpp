#include "common.h"

extern "C" {

extern int lmapMainGetUnkCC(void);

u8 FUN_00310c9c(void)
{
    if (lmapMainGetUnkCC() == 5) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
