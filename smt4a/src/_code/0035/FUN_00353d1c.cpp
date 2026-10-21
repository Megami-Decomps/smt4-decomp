/* NON_MATCHING: compiler hoists the state pointer and unrolls with separate slot indices; retail reloads per store. */
#include "common.h"

struct ActivationSlot {
    u8 active; // 0x00
    u8 unk01[0x2f];
};
struct ActivationState {
    u8 unk0000[0x2844];
    ActivationSlot slots[32]; // 0x2844
};

extern "C" {
extern ActivationState *g_vectorQueueWork;

// Reset all activation slots in the shared state.
void FUN_00353d1c(void)
{
    for (s32 index = 0; index < 32; ++index) {
        g_vectorQueueWork->slots[index].active = 0;
    }
}
}
