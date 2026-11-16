#include "nn/snd/Initialization.h"
#include "shard/Dspsnd.h"

extern "C" {
extern NnSndInitialization g_sndSystemState;
extern DspsndState g_dspsndState;
void nn_os_LightEvent_Initialize(void *event, s32 autoClear);
void nn_snd_CTR_Dspsnd_Finalize(DspsndState *state, s32 flag);

void FUN_0016f3e4(void)
{
    if (((s8)g_sndSystemState.initialized & ~(s8)g_sndSystemState.unk01) != 0) {
        nn_os_LightEvent_Initialize((u8 *)&g_sndSystemState + 8, 1);
        g_sndSystemState.unk02 = 1;
        nn_snd_CTR_Dspsnd_Finalize(&g_dspsndState, 1);
        g_sndSystemState.unk01 = 1;
    }
}
}
