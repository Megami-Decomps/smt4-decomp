#include "common.h"

extern "C" {

void FUN_0013c00c(s32 mode);

/* Text system callback: forwards mode 0 to FUN_0013c00c and reports success as 0. */
s32 FUN_0013767c(void)
{
    FUN_0013c00c(0);
    return 0;
}

}
