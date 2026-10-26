#include "common.h"
extern "C" {
struct Values {
    u32 first,second,third;
    u16 fourth;
};
struct ValuesBlock {
    u8 unk00[0x10];
    Values values;
};
extern struct {
    u32 reserved;
    struct {
        u8 pad[0x27E88];
        ValuesBlock block;
    } *table;
}
g_gameDataBlocks;
void FUN_002a4664(Values *output) {
    ValuesBlock *block=&g_gameDataBlocks.table->block;
    output->first=block->values.first;
    output->second=block->values.second;
    output->third=block->values.third;
    output->fourth=block->values.fourth;
}
}
