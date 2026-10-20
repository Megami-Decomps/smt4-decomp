#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {

extern BustupCutAnimA *g_bustupCutAnim;

void bustupCutAnimSetFlag(u8 value)
{
    if (g_bustupCutAnim != NULL) {
        g_bustupCutAnim->unk5F6 = value;
    }
}

} /* extern "C" */
