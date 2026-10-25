#include "common.h"

extern "C" {

int FUN_0023a244(void);
int FUN_00351f7c(void);
int FUN_0035ae34(void);
extern s8 g_archiveModuleState;

void FUN_00351ca0(void)
{
    if (g_archiveModuleState != 0) {
        FUN_0035ae34();
        g_archiveModuleState = 0;
        FUN_0023a244();
    }
    FUN_00351f7c();
}

} /* extern "C" */
