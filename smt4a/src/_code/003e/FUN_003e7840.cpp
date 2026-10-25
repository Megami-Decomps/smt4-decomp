#include "battle/btlStage.h"
#include "util/CalleeContracts.h"

extern "C" {

void FUN_004d8bf8(void);

extern BtlStage *g_btlStageModel;

void FUN_003e7840(void)
{
    if (g_btlStageModel != NULL) {
        FUN_004d8bf8();
    }
}

} /* extern "C" */
