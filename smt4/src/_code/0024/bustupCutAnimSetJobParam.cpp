#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {

void FUN_002c425c(u32 job, u32 value);

extern BustupCutAnim *g_bustupCutAnim;

void bustupCutAnimSetJobParam(u32 value)
{
    FUN_002c425c(g_bustupCutAnim->job, value);
}

} /* extern "C" */
