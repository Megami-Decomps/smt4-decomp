#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {
void effBlockCopyDataB(void *entry, u32 *value, u32 size, u32 mode);
/* Clears the current effect entry's scalar value. */
u32 FUN_003bfeb8()
{
    u32 value = 0;
    effBlockCopyDataB(g_effectEditor.block, &value, 4, 4);
    return 0x400002;
}
}
