/* NON_MATCHING: retail emits 'ldr r1, [pc, #44]'; compiler emits 'ldr r1, [pc, #20]' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Values {
    u32 first,second,third;
    u16 fourth;
};
extern struct {
    u32 reserved;
    struct {
        u8 pad[0x27E98];
        Values values;
    } *table;
}
g_gameDataBlocks;
void FUN_002a4664(Values *output) {
    *output=g_gameDataBlocks.table->values;
}
}
