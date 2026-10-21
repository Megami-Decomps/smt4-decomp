/* NON_MATCHING: retail emits 'asr r1, r0, #31'; compiler emits 'push {r4, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Save {
    u8 pad[0x282FC];
    u8 bits[1];
};
Save *gameDataBlocksGetSaveData();
u32 FUN_0032ecac(s32 bit) {
    return (gameDataBlocksGetSaveData()->bits[bit/8] >> (bit%8))&1;
}
}
