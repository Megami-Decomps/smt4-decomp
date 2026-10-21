/* NON_MATCHING: retail redundantly loads the setting byte and conditionally clears r0 before returning zero. */
#include "common.h"
extern "C" {

/* This settings callback always reports zero. */
u8 campCecSettingQueryZero(void)
{
    return 0;
}
}
