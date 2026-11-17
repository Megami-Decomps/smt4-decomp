#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {
extern u8 DAT_00400002;
void effBlockSetBlobB(void *entry, u32 *value, u32 size, u32 mode);
/* Clears the current effect entry's scalar value. The returned constant 0x400002 lies inside the image, so retail names it as a data address (DAT_00400002). */
u32 FUN_00321c64()
{
    u32 value = 0;
    effBlockSetBlobB(g_effectEditor.block, &value, 4, 4);
    return reinterpret_cast<u32>(&DAT_00400002);
}
}
