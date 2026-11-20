#include "common.h"

extern "C" {

void FUN_00146d90(void);
void nn_pl_CTR_CreateGameCoinSaveFile(void);
extern s8 DAT_005894e0;

/* One-time initialisation: runs FUN_00146d90 and nn_pl_CTR_CreateGameCoinSaveFile the first time it is called. */
void nn_pl_CTR_InitializeGameCoin(void)
{
    if (DAT_005894e0 == 0) {
        FUN_00146d90();
        nn_pl_CTR_CreateGameCoinSaveFile();
        DAT_005894e0 = 1;
    }
}

} /* extern "C" */
