#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {

/* Activates the effect editor. */
void FUN_002d81c8(void)
{
    g_effectEditor.active = 1;
}

} /* extern "C" */
