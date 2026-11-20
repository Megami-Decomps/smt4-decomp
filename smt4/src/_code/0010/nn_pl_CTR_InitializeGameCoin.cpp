#include "common.h"

extern "C" {

int FUN_0010fc28(void);
int nn_pl_CTR_CreateGameCoinSaveFile(void);

extern s8 DAT_0044e7bc;

void nn_pl_CTR_InitializeGameCoin(void)
{
    if (DAT_0044e7bc == 0) {
        FUN_0010fc28();
        nn_pl_CTR_CreateGameCoinSaveFile();
        DAT_0044e7bc = 1;
    }
}

} /* extern "C" */
