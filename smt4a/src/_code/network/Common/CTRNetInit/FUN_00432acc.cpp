#include "common.h"
#include "network/Common/CTRNetInit.h"

extern "C" {

u8 FUN_00432ad0(void);

/* Forwards to FUN_00432ad0, the function that follows it. */
u8 FUN_00432acc(void)
{
    return FUN_00432ad0();
}

} /* extern "C" */
