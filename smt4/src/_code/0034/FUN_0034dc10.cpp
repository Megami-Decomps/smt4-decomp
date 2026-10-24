/* NON_MATCHING: retail walks the twelve register records with post-incremented stores (str [r0], #20 then #4) and loads the constants 2/14 in swapped registers; this build addresses the records by offset. */
#include "shard/W6_W6Match7_CombinerState.h"

extern "C" {

extern u8 DAT_0047e554[];

u32 FUN_00356e94(void);
u32 *FUN_002b5cf0(u8 *buffer, u32 size);
void FUN_002b612c(CombinerState *state);
void nn_gr_CTR_Combiner_Stage_SetupPrimaryModulateTexture0(CombinerStage *stage);
u32 *nn_gr_CTR_Combiner_MakeCommand(CombinerState *state, u32 *commands);
void memClear(void *memory, u32 bytes);

/* Builds a GPU command list: the combiner (texture modulated by primary color, then black added), a clear 0x98-byte parameter block and twelve numbered (index, header, 0, 0, 0, 0) register records; returns the end of the list. */
u32 *FUN_0034dc10(void)
{
    u32 *commands = FUN_002b5cf0(DAT_0047e554, FUN_00356e94());
    CombinerState combiner;
    FUN_002b612c(&combiner);
    nn_gr_CTR_Combiner_Stage_SetupPrimaryModulateTexture0(&combiner.stages[0]);
    CombinerStage &stage = combiner.stages[1];
    stage.color.function = 2;
    stage.color.sources[1] = 0x0e;
    stage.constantColor.r = 0;
    stage.constantColor.g = 0;
    stage.constantColor.b = 0;
    u32 *list = nn_gr_CTR_Combiner_MakeCommand(&combiner, commands);
    list[0] = 0;
    list[1] = 0xf0201;
    list[2] = 0;
    list[3] = 0xf0202;
    u32 *block = list + 4;
    memClear(block, 0x98);
    block[1] = 0x823f0203;
    u32 *record = block + 0x26;
    for (u32 index = 0; index < 12; ++index) {
        record[1] = 0x803f0232;
        record[2] = 0;
        record[3] = 0;
        record[4] = 0;
        record[0] = index;
        record[5] = 0;
        record += 6;
    }
    return record;
}

} /* extern "C" */
