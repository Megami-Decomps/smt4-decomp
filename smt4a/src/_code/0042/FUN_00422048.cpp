/* NON_MATCHING: header command stores, sysMemClear and attribute loop match; remaining: mov r5, #0 is hoisted before the combiner stage stores (retail places it between them) and mov r0, ip precedes mov r1, #0 / mov r2, #12 before the loop. */
#include "shard/W6_W6Match7_CombinerState.h"

extern "C" {
extern u8 DAT_005cc554[];
u32 FUN_0042c5d0();
u32 *FUN_00177e6c(void *context, u32 size);
void FUN_00158b88(CombinerState *state);
u32 *FUN_0015fcec(const CombinerState *state, u32 *commands);
void sysMemClear(void *memory, u32 size);

/* Emit the selected combiner state followed by cleared draw and vertex-attribute commands. */
u32 *FUN_00422048()
{
    u32 *commands = FUN_00177e6c(DAT_005cc554, FUN_0042c5d0());
    CombinerState combiner;
    gfxCombinerStateInitialize(&combiner);
    FUN_00158b88(&combiner);
    combiner.stages[1].color.function = 2;
    combiner.stages[1].color.sources[1] = 14;
    combiner.stages[1].constantColor.r = 0;
    combiner.stages[1].constantColor.g = 0;
    combiner.stages[1].constantColor.b = 0;
    u32 *cmd = FUN_0015fcec(&combiner, commands);
    cmd[0] = 0;
    cmd[1] = 0xf0201;
    cmd += 2;
    *cmd++ = 0;
    *cmd++ = 0xf0202;
    sysMemClear(cmd, 0x98);
    cmd[1] = 0x823f0203;
    cmd += 0x26;
    for (u32 index = 0; index < 12; ++index) {
        *cmd++ = index;
        *cmd++ = 0x803f0232;
        *cmd++ = 0;
        *cmd++ = 0;
        *cmd++ = 0;
        *cmd++ = 0;
    }
    return cmd;
}
}
