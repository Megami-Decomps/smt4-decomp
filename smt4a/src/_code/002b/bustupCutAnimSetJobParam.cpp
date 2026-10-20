#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {

void FUN_0014bdb4(u32 job, u32 value);

extern BustupCutAnimA *g_bustupCutAnim;

void bustupCutAnimSetJobParam(u32 value)
{
    FUN_0014bdb4(g_bustupCutAnim->job, value);
}

} /* extern "C" */
