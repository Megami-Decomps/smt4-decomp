#include "common.h"

struct BtlStage;

extern "C" {
BtlStage* asdLoadFileSyncDefault(const char* path);
extern BtlStage* g_btlStage;

void btlStageLoadTable(void)
{
    g_btlStage = asdLoadFileSyncDefault("battle/battle_map/BTLSTAGEFOG.TBL");
}
}
