#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {

extern BustupCutAnim *g_bustupCutAnim;

void bustupCutAnimSetFlag(u8 value)
{
    if (g_bustupCutAnim != NULL) {
        g_bustupCutAnim->unk5F2 = value;
    }
}

} /* extern "C" */
