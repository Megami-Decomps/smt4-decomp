/* NON_MATCHING: retail emits 'add r1, r0, r0, lsl #2'; compiler emits 'ldr r1, [pc, #48]' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Entry {
    u8 pad[0x68];
    u8 work;
};
extern Entry DAT_0063afc8[];
void FUN_0019b738(void *,u32);
void FUN_001654f8(u32,void *,u32);
void FUN_003180c4(u32 index,u32 value) {
    void *work=&DAT_0063afc8[index].work;
    FUN_0019b738(work,104);
    FUN_001654f8(value,work,104);
}
}
