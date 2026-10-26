#include "common.h"
extern "C" {
struct Save {
    u8 pad[0x282FC];
    u8 bits[1];
};
Save *gameDataBlocksGetSaveData();

/* Tests one bit of the save data's toggle-flag bank. */
u32 gameDataToggleFlagIsSet(s32 flagIndex) {
    s32 byteIndex = flagIndex / 8;
    s32 bitIndex = flagIndex % 8;
    Save *save = gameDataBlocksGetSaveData();
    u8 *byte = &save->bits[byteIndex];
    u32 bits = *byte;
    return (bits & (1 << bitIndex)) != 0;
}
}
