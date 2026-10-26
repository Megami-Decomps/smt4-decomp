#include "nn/snd/Initialization.h"
#include "shard/Dspsnd.h"

extern "C" {
extern NnSndInitialization DAT_0044e7c0;
extern DspsndState g_dspsndState;
void nn_os_LightEvent_Initialize(void *event, s32 autoClear);
void nn_snd_CTR_Dspsnd_Finalize(DspsndState *state, s32 flag);

void FUN_00129084(void)
{
    if (((s8)DAT_0044e7c0.initialized & ~(s8)DAT_0044e7c0.unk01) != 0) {
        nn_os_LightEvent_Initialize((u8 *)&DAT_0044e7c0 + 8, 1);
        DAT_0044e7c0.unk02 = 1;
        nn_snd_CTR_Dspsnd_Finalize(&g_dspsndState, 1);
        DAT_0044e7c0.unk01 = 1;
    }
}
}
