/* NON_MATCHING: only the ailment-clear store moves after the maximum-HP/MP loads in the unit restore block. */
#include "shard/W7_W7Match2_PartyDamage.h"
#include "shard/Shard0034.h"
#include "gamedata/PlayerDataBlock.h"
extern "C" {
PartyDamageUnitIV *gameGetUnitRecord(u32 slot);
PartyDamageSlotsIV *gameGetSlotTable(void);
s32 gameCountUnits(void);

/* Restore eligible party members and clear their ailments. */
void FUN_00249b18(u32 group, s32 revive)
{
    /* The ailment word lies beyond the shared PlayerData prefix. */
    struct PlayerRestoreView {
        u8 prefix[0x1C];
        u16 maximumHp;
        u16 maximumMp;
        u8 unk20[0xA];
        u16 currentHp;
        u16 currentMp;
        u8 unk2E[0x44];
        u16 ailments;
    };
    if ((group == 0 || group == 2 || group == 3) &&
        (revive || (reinterpret_cast<PlayerRestoreView *>(gameGetPlayerData())->ailments & 2) == 0) &&
        (reinterpret_cast<PlayerRestoreView *>(gameGetPlayerData())->ailments & 0x400) == 0) {
        PlayerRestoreView *player = reinterpret_cast<PlayerRestoreView *>(gameGetPlayerData());
        player->ailments = 0;
        PlayerRestoreView *currentPlayer = reinterpret_cast<PlayerRestoreView *>(gameGetPlayerData());
        currentPlayer->currentHp = currentPlayer->maximumHp;
        currentPlayer->currentMp = currentPlayer->maximumMp;
        player->currentHp = player->maximumHp;
        player->currentMp = player->maximumMp;
    }
    s32 count;
    s8 *slots;
    switch (group) {
    case 0:
    case 1:
        count = gameCountUnits();
        slots = gameGetSlotTable()->stock;
        break;
    case 2:
    case 3:
        count = 3;
        slots = gameGetSlotTable()->active;
        break;
    default:
        return;
    }
    for (s32 index = 0; index < count; ++index) {
        if (slots[index] >= 0) {
            PartyDamageUnitIV *unit = gameGetUnitRecord(slots[index]);
            if ((revive || (unit->ailments & 2) == 0) &&
                (unit->ailments & 0x400) == 0 && (unit->ailments & 4) == 0 && unit != NULL) {
                unit->ailments = 0;
                unit->currentHp = unit->maximumHp;
                unit->currentMp = unit->maximumMp;
            }
        }
    }
}
}
