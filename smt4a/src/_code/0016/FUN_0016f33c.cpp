#include "common.h"

/* The nn::snd master manager's own state: whether it is initialized and the last value set. */
struct MasterManagerState {
    u8 initialized;  // 0x00
    u8 unk01[3];
    f32 volume;      // 0x04
};

extern "C" {
extern u8 g_nnSndMasterManagerImpl[];
void FUN_0018a264(void *impl, f32 volume);

/* Sets the master volume on the manager and its implementation once it is initialized. */
void FUN_0016f33c(MasterManagerState *manager, f32 volume)
{
    if (manager->initialized != 0) {
        manager->volume = volume;
        FUN_0018a264(g_nnSndMasterManagerImpl, volume);
    }
}
}
