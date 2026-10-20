#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {

void jobSetParent(u32 job, u32 value);

extern BustupCutAnimA *g_bustupCutAnim;

void bustupCutAnimSetJobParam(u32 value)
{
    jobSetParent(g_bustupCutAnim->job, value);
}

} /* extern "C" */
