#include "common.h"

extern "C" {

typedef struct Global589284 {
    /* 0x00 */ s8 unk00;
    /* 0x01 */ s8 enabled;
} Global589284;
extern Global589284 g_callbackState;

/* Returns the signed byte at 0x1 of the global at 0x589284. */
s32 nn_snd_CTR_Dspsnd_IsInitialized(void)
{
    return g_callbackState.enabled;
}

} /* extern "C" */
