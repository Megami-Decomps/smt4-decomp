#include "common.h"

extern "C" {

void FUN_00107784(s32 mode);

/* Text system callback: forwards mode 1 to FUN_00107784 and reports success as 0. */
s32 FUN_00102d38(void)
{
    FUN_00107784(1);
    return 0;
}

}
