#include "common.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

s32 gameOptionResourceId(u32 kind);

s32 playerPrimaryGetKindValue(void)
{
    return gameOptionResourceId(dataTable08Sub2GetRecord(gameGetPlayerData()->equipped.weapon)->traits >> 20);
}

} /* extern "C" */
