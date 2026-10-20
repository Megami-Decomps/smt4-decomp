#include "common.h"

extern "C" {

int FUN_001532fc(u8 *manager, u32 value);

extern u8 g_nnSndMasterManager;

void FUN_0014f9b4(u32 value)
{
    FUN_001532fc(&g_nnSndMasterManager, value);
}

} /* extern "C" */
