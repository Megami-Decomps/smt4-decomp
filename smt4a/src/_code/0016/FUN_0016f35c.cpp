#include "common.h"

extern "C" {
extern u8 g_nnSndMasterManagerImpl[];
void FUN_0018a3ac(void *impl, u32 value);

/* nn::snd master manager call forwarded to the implementation object. */
void FUN_0016f35c(void *manager, u32 value)
{
    FUN_0018a3ac(g_nnSndMasterManagerImpl, value);
}
}
