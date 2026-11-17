#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {
void engineFreeCallback(void *callback);
}

extern "C" void FUN_0037cda4(void)
{
    if (g_effectEditor.label != NULL) {
        engineFreeCallback(g_effectEditor.label);
        g_effectEditor.label = NULL;
    }
}
