#include "common.h"

struct BtlStage;

extern "C" {
BtlStage* FUN_0020214c(const char* path);
extern BtlStage* g_btlStage;

void btlStageLoadTable(void)
{
    g_btlStage = FUN_0020214c("battle/battle_map/BTLSTAGEFOG.TBL");
}
}
