#include "common.h"

extern "C" {

void btlEffectBeginEncounterFade(void);

extern void *g_btlAux;

void FUN_0023f4e4(void)
{
    if (g_btlAux != NULL) {
        btlEffectBeginEncounterFade();
    }
}

} /* extern "C" */
