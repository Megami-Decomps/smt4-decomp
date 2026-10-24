#include "common.h"

extern "C" {

struct PlayerData { u16 primary; u16 unk02; u16 secondary; };
struct CharacterData { u8 unk00[0x24]; u32 flags; };
PlayerData *gameGetPlayerData(void);
CharacterData *dataTable08Sub2GetRecord(u32 id);
s32 gameOptionResourceId(u32 kind);

s32 playerPrimaryGetKindValue(void)
{
    return gameOptionResourceId(dataTable08Sub2GetRecord(gameGetPlayerData()->primary)->flags >> 20);
}

} /* extern "C" */
