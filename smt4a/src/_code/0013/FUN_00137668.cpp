#include "common.h"

extern "C" {

void FUN_0013c00c(s32 mode);

/* Text system callback: forwards mode 1 to FUN_0013c00c and reports success as 0. */
s32 FUN_00137668(void)
{
    FUN_0013c00c(1);
    return 0;
}

}
