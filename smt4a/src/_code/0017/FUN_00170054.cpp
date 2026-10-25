/* NON_MATCHING: register allocation only (retail keeps the state pointer in r4, the constant 1 in r5 and the name in r6; built numbers them differently). */
#include "shard/S2NngxState.h"

extern "C" {

extern u8 g_nngxCriticalSection[0xc];
extern NngxState g_nngxState;
extern NngxWork DAT_0056ec40;
extern u8 g_nngxDefaultCommandState;
extern u32 g_nngxCommandState1;
extern u8 g_nngxGpu;

extern void nn_os_CriticalSection_Enter(void *lock);
extern void nn_os_CriticalSection_Leave(void *lock);
extern void FUN_0016f864(void);
extern u32 libc_strlen(const u16 *s);
extern void FUN_0016f988(void *buffer, const u16 *name, u32 length, s32 flag);
extern void nn_gxlow_CTR_Gpu_AcquireRight(void *gpu, u32 a, s32 b);
extern void FUN_0018b28c(void);

/* Brings up the nn::gx library once: prepares the module name, acquires the GPU right and
 * resets the command-list bookkeeping. */
void FUN_00170054(void)
{
    nn_os_CriticalSection_Enter(g_nngxCriticalSection);
    if (g_nngxState.initialized != 0) {
        nn_os_CriticalSection_Leave(g_nngxCriticalSection);
        return;
    }
    g_nngxState.initialized = 1;
    if (g_nngxState.nameReady == 0) {
        FUN_0016f864();
        g_nngxState.nameReady = 1;
    }
    {
        const u16 *name = g_nngxState.name;

        FUN_0016f988(&g_nngxDefaultCommandState, name, libc_strlen(name), 0);
    }
    g_nngxState.unk14 = g_nngxState.unk10;
    nn_gxlow_CTR_Gpu_AcquireRight(&g_nngxGpu, g_nngxCommandState1, g_nngxState.gpuRightFlag);

    DAT_0056ec40.unk00 = 0;
    DAT_0056ec40.unk08 = -1;
    DAT_0056ec40.unk04 = 0;
    DAT_0056ec40.unk2c[0] = 0;
    DAT_0056ec40.unk2c[1] = 0;
    DAT_0056ec40.unk2c[2] = 0;
    DAT_0056ec40.unk2c[3] = 0;
    DAT_0056ec40.unk2c[4] = 0;
    DAT_0056ec40.unk2c[5] = 0;
    DAT_0056ec40.unk2c[6] = 0;
    DAT_0056ec40.unk48 = 0;
    DAT_0056ec40.unk4c = 0;
    DAT_0056ec40.unk50 = 0;
    DAT_0056ec40.unk58 = 0;
    DAT_0056ec40.unk5c = 0;
    DAT_0056ec40.unk64 = 0;
    DAT_0056ec40.unk68 = 0;
    DAT_0056ec40.unk6c = 0;
    DAT_0056ec40.enabled = 1;
    g_nngxState.work = &DAT_0056ec40;
    FUN_0018b28c();
    nn_os_CriticalSection_Leave(g_nngxCriticalSection);
}

} /* extern "C" */
