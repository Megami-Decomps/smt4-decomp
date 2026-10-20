#include "common.h"

extern "C" {

extern struct {
    u8 unk0;
    s8 unk1;
} g_callbackState;

s32 nn_snd_CTR_Dspsnd_IsInitialized(void)
{
    return g_callbackState.unk1;
}

} /* extern "C" */
