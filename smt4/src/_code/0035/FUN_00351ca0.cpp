#include "common.h"

extern "C" {

int FUN_0023a244(void);
int FUN_00351f7c(void);
int FUN_0035ae34(void);
extern s8 DAT_0044e348;

void FUN_00351ca0(void)
{
    if (DAT_0044e348 != 0) {
        FUN_0035ae34();
        DAT_0044e348 = 0;
        FUN_0023a244();
    }
    FUN_00351f7c();
}

} /* extern "C" */
