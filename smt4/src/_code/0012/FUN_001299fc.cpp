/* NON_MATCHING: GPU initialization global-address grouping and zero-store scheduling differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern NngxInitializationPrefixIV g_nngxState;
extern u32 g_nngxGpu;
extern u32 g_nngxCriticalSection;
extern u32 DAT_00471a80;
extern const u32 DAT_0040b740;
extern NngxCommandPrefixIV DAT_00431c40;

void nn_os_CriticalSection_Enter(u32 *criticalSection);
void nn_os_CriticalSection_Leave(u32 *criticalSection);
void FUN_002c1398(void);
void FUN_0013b218(void);
u32 libc_strlen(const char *text);
void asdModelForwardChecked(u32 *destination, const char *source,
                            u32 length, s32 flags);
u32 nn_gxlow_CTR_Gpu_AcquireRight(u32 *gpu, u32 processHandle, s32 mode);

void FUN_001299fc(void)
{
    nn_os_CriticalSection_Enter(&g_nngxCriticalSection);
    if (g_nngxState.initialized != 0) {
        nn_os_CriticalSection_Leave(&g_nngxCriticalSection);
        return;
    }

    g_nngxState.initialized = 1;
    if (g_nngxState.configurationInitialized == 0) {
        FUN_002c1398();
        g_nngxState.configurationInitialized = 1;
    }

    const char *configuration = g_nngxState.configuration;
    asdModelForwardChecked(&DAT_00471a80, configuration,
                           libc_strlen(configuration), 0);
    g_nngxState.acquiredGpu = g_nngxState.configuredGpu;
    nn_gxlow_CTR_Gpu_AcquireRight(&g_nngxGpu, DAT_0040b740,
                                 g_nngxState.acquireMode);

    DAT_00431c40.word00 = 0;
    DAT_00431c40.word08 = 0xffffffffU;
    DAT_00431c40.word04 = 0;
    DAT_00431c40.word2c = 0;
    DAT_00431c40.word30 = 0;
    DAT_00431c40.word34 = 0;
    DAT_00431c40.word38 = 0;
    DAT_00431c40.word3c = 0;
    DAT_00431c40.word40 = 0;
    DAT_00431c40.word44 = 0;
    DAT_00431c40.byte48 = 0;
    DAT_00431c40.word4c = 0;
    DAT_00431c40.byte50 = 0;
    DAT_00431c40.word58 = 0;
    DAT_00431c40.word5c = 0;
    DAT_00431c40.word64 = 0;
    DAT_00431c40.word68 = 0;
    DAT_00431c40.word6c = 0;
    DAT_00431c40.byte70 = 1;
    g_nngxState.commandState = &DAT_00431c40;
    FUN_0013b218();
    nn_os_CriticalSection_Leave(&g_nngxCriticalSection);
}
}
