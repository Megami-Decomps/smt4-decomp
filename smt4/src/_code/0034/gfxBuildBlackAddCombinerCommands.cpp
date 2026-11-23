#include "shard/W6_W6Match7_CombinerState.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

extern u8 DAT_0047e554[];

u32 FUN_00356e94(void);
u32 *FUN_002b5cf0(u8 *buffer, u32 size);
void FUN_002b612c(CombinerState *state);
void nn_gr_CTR_Combiner_Stage_SetupPrimaryModulateTexture0(CombinerStage *stage);
u32 *nn_gr_CTR_Combiner_MakeCommand(CombinerState *state, u32 *commands);

/* Builds a GPU command list: the combiner (texture modulated by primary color, then black added), a clear 0x98-byte parameter block and twelve numbered (index, header, 0, 0, 0, 0) register records; returns the end of the list. */
u32 *gfxBuildBlackAddCombinerCommands(void)
{
    u32 *commands = FUN_002b5cf0(DAT_0047e554, FUN_00356e94());
    CombinerState combiner;
    FUN_002b612c(&combiner);
    nn_gr_CTR_Combiner_Stage_SetupPrimaryModulateTexture0(&combiner.stages[0]);
    CombinerStage &stage = combiner.stages[1];
    stage.color.sources[1] = 0x0e;
    stage.color.function = 2;
    stage.constantColor.r = 0;
    stage.constantColor.g = 0;
    stage.constantColor.b = 0;
    u32 *cursor = nn_gr_CTR_Combiner_MakeCommand(&combiner, commands);
    *cursor++ = 0;
    *cursor++ = 0xf0201;
    *cursor++ = 0;
    *cursor++ = 0xf0202;
    memClear(cursor, 0x98);
    cursor[1] = 0x823f0203;
    cursor += 0x26;
    for (u32 index = 0; index < 12; ++index) {
        *cursor++ = index;
        *cursor++ = 0x803f0232;
        *cursor++ = 0;
        *cursor++ = 0;
        *cursor++ = 0;
        *cursor++ = 0;
    }
    return cursor;
}

} /* extern "C" */
