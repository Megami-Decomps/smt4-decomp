/* NON_MATCHING: uses IV's stage setup. Retail sets and stores the color function before loading zero;
 * the build hoists zero and puts the function in r1. The attribute loop's cursor move also comes earlier. */
#include "shard/W6_W6Match7_CombinerState.h"

extern "C" {
extern u8 DAT_005cc554[];
u32 FUN_0042c5d0();
u32 *FUN_00177e6c(void *context, u32 size);
void FUN_00158b88(CombinerState *state);
u32 *FUN_0015fcec(const CombinerState *state, u32 *commands);
void sysMemClear(void *memory, u32 size);

/* Emit the selected combiner state followed by cleared draw and vertex-attribute commands. */
u32 *gfxBuildBlackAddCombinerCommands()
{
    u32 *commands = FUN_00177e6c(DAT_005cc554, FUN_0042c5d0());
    CombinerState combiner;
    gfxCombinerStateInitialize(&combiner);
    FUN_00158b88(&combiner);
    CombinerStage &stage = combiner.stages[1];
    stage.color.sources[1] = 0x0e;
    stage.color.function = 2;
    stage.constantColor.r = 0;
    stage.constantColor.g = 0;
    stage.constantColor.b = 0;
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
