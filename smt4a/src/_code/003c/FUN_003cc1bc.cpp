#include "shard/W6_W6Match2_EffectEditor.h"

/* Makes the selection's template object current when it has one. */
extern "C" s32 FUN_003cc1bc(void)
{
    EffectSelectionTemplate *object = g_effectEditor.selection->object;
    if (object != NULL) {
        g_effectEditor.object = object;
    }
    return 0;
}
