#include "common.h"

extern "C" {

int FUN_0035ff18(u8 *manager);
extern u8 g_nnSndMasterManager;

void FUN_00360104(void)
{
    FUN_0035ff18(&g_nnSndMasterManager);
}

} /* extern "C" */
