#include "common.h"

extern "C" {

void bgmRequestSelectedChannelFade(void);

/* Script command: requests the selected BGM channel's fade. */
u32 FUN_00370590(void)
{
    bgmRequestSelectedChannelFade();
    return 1;
}

} /* extern "C" */
