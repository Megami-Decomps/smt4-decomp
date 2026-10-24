#include "common.h"

extern "C" {

void FUN_00107784(s32 mode);

/* Text system callback: forwards mode 0 to FUN_00107784 and reports success as 0. */
s32 FUN_00102d4c(void)
{
    FUN_00107784(0);
    return 0;
}

}
