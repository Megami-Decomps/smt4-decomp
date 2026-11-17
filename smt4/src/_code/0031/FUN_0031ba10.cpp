#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {

/* Marks the effect editor dirty and makes its selection's template object current when it has one. */
u32 FUN_0031ba10(void)
{
    g_effectEditor.dirty = 1;
    if (g_effectEditor.selection->object != NULL) {
        g_effectEditor.object = g_effectEditor.selection->object;
    }
    return 0;
}

} /* extern "C" */
