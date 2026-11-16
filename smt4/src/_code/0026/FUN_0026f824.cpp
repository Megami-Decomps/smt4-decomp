/* NON_MATCHING: only two moves before the equipment loop are swapped (retail sets the index register before the equipment base). */
#include "gamedata/PlayerInitialization.h"
#include <string.h>
#include "AsdSDK/AsdMemUtil.h"

/* Local view: stock-count metadata extends beyond the recovered party-slot prefix. */
struct InitialPlayerSlotsView {
    u32 flags;
    u8 unk0004[0x9107];
    u8 stockCapacity;
};
typedef char InitialPlayerSlotsViewOffsetCheck[
    offsetof(InitialPlayerSlotsView, stockCapacity) == 0x910B ? 1 : -1];

union InitialEquipment {
    u16 ids[8];
    u32 words[4];
};
extern "C" {
void FUN_001a1110(void);
InitialPlayerSlotsView *gameGetSlotTable(void);
PlayerInitialRecordIV *gameGetPlayerData(void);
void FUN_00295a18(u32 item, u32 count);
void FUN_003c1ef4(u32 mode);
void FUN_00299370(u32 slot);
void FUN_001dd930(void);
char *gameDataGetPlayerName(void);
void textFormatBuffer(char *destination, const char *format, ...);
extern const InitialEquipment DAT_00404378;
/* The default player name and the format the player's display name is built with. */
struct DefaultPlayerTexts {
    char name[11];
    char nameFormat[13];
};
extern const DefaultPlayerTexts DAT_00404360;

// Initialize a new game's player record, starting equipment, and inventory capacity.
void FUN_0026f824(s32 mode)
{
    FUN_001a1110();
    InitialPlayerSlotsView *slots = gameGetSlotTable();
    if (mode == 0) {
        slots->flags = 0;
        slots->stockCapacity = 8;
        InitialEquipment equipment = DAT_00404378;
        const u16 *id = equipment.ids;
        for (u32 index = 0; index < 7; ++index) {
            if (id[index])
                FUN_00295a18(id[index], 1);
        }
        const DefaultPlayerTexts *texts = &DAT_00404360;
        PlayerInitialRecordIV *player = gameGetPlayerData();
        memClear(player, sizeof(*player));
        player->enabled = 1;
        player->counter = 0;
        strncpy(player->name, texts->name, sizeof(player->name));
        player->name[sizeof(player->name) - 1] = 0;
        FUN_003c1ef4(0);
        player->equipment[0] = equipment.ids[0];
        player->equipment[1] = equipment.ids[1];
        player->equipment[2] = equipment.ids[2];
        player->equipment[3] = equipment.ids[3];
        player->equipment[4] = equipment.ids[4];
        player->equipment[5] = equipment.ids[5];
        player->equipment[6] = equipment.ids[6];
        FUN_00299370(0);
        player->hp = player->maximumHp;
        player->mp = player->maximumMp;
        FUN_001dd930();
        textFormatBuffer(gameDataGetPlayerName(), texts->nameFormat);
        FUN_00295a18(0x370, 1);
    }
}
}
