#include "common.h"

extern "C" {

struct PlayerData { u16 primary; u16 unk02; u16 secondary; };
struct CharacterData { u8 unk00[0x24]; u32 flags; };
PlayerData *gameGetPlayerData(void);
CharacterData *FUN_00192608(u32 id);
s32 gameOptionResourceId(u32 kind);

s32 playerSecondaryGetKindValue(void)
{
    return gameOptionResourceId(FUN_00192608(gameGetPlayerData()->secondary)->flags >> 20);
}

} /* extern "C" */
