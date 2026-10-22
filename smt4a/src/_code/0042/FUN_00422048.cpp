/* NON_MATCHING: combiner-byte initialization and attribute-command stores are scheduled differently. */
#include "shard/W6_W6Match7_CombinerState.h"

struct DrawAttributeCommand { u32 index, header, values[4]; };
struct DrawCommandReset {
    u32 firstValue, firstHeader, secondValue, secondHeader;
    u32 reset[38];
    DrawAttributeCommand attributes[12];
};
extern "C" {
extern u8 DAT_005cc554[];
u32 FUN_0042c5d0();
u32 *FUN_00177e6c(void *context, u32 size);
void FUN_00158b88(CombinerState *state);
u32 *FUN_0015fcec(const CombinerState *state, u32 *commands);
void sysMemClear(void *memory, u32 size);

// Emit the selected combiner state followed by cleared draw and vertex-attribute commands.
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
    DrawCommandReset *reset = (DrawCommandReset *)FUN_0015fcec(&combiner, commands);
    reset->firstHeader = 0xf0201;
    reset->firstValue = 0;
    reset->secondValue = 0;
    reset->secondHeader = 0xf0202;
    sysMemClear(reset->reset, sizeof(reset->reset));
    reset->reset[1] = 0x823f0203;
    for (s32 i = 0; i < 12; ++i) {
        DrawAttributeCommand *attribute = &reset->attributes[i];
        attribute->header = 0x803f0232;
        attribute->values[0] = 0;
        attribute->values[1] = 0;
        attribute->values[2] = 0;
        attribute->index = i;
        attribute->values[3] = 0;
    }
    return (u32 *)(reset + 1);
}
}
