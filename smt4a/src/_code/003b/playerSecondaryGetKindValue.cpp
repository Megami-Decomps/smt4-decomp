#include "common.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

s32 gameOptionResourceId(u32 kind);

s32 playerSecondaryGetKindValue(void)
{
    return gameOptionResourceId(dataTable08Sub2GetRecord(gameGetPlayerData()->equipped.bullets)->traits >> 20);
}

} /* extern "C" */
