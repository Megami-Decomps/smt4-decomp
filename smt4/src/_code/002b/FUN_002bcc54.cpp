#include "common.h"

extern "C" {

int FUN_00128f00(u8 *manager);

extern u8 g_nnSndMasterManager;

void FUN_002bcc54(void)
{
    FUN_00128f00(&g_nnSndMasterManager);
}

} /* extern "C" */
