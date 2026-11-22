#include "common.h"

extern "C" {

void placedEffectUpdate(void);

/* Forwards to placedEffectUpdate, the function placed right after it. */
void FUN_001d1df0(void)
{
    placedEffectUpdate();
}

} /* extern "C" */
