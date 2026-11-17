#include "common.h"
#include "gamedata/EquipmentRecordA.h"

extern "C" {

struct PlayerData { u16 primary; u16 unk02; u16 secondary; };
PlayerData *gameGetPlayerData(void);
s32 gameOptionResourceId(u32 kind);

s32 playerSecondaryGetKindValue(void)
{
    return gameOptionResourceId(dataTable08Sub2GetRecord(gameGetPlayerData()->secondary)->traits >> 20);
}

} /* extern "C" */
