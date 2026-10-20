#include "common.h"

extern "C" {

void FUN_00146d90(void);
void FUN_0016e2a8(void);
extern s8 DAT_005894e0;

/* One-time initialisation: runs FUN_00146d90 and FUN_0016e2a8 the first time it is called. */
void nn_pl_CTR_InitializeGameCoin(void)
{
    if (DAT_005894e0 == 0) {
        FUN_00146d90();
        FUN_0016e2a8();
        DAT_005894e0 = 1;
    }
}

} /* extern "C" */
