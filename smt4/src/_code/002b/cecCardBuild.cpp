/* NON_MATCHING: card assembly is typed; flag arms, stock-search and copy scheduling differ. */
#include "cec/CecMessage.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/NkmBaseRecord.h"
#include "AsdSDK/Source/Sys/Save/AsdSaveHeader.h"

extern "C" {
u8 FUN_002228d4();
u32 cecProcessGetObject();
u32 FUN_0025981c();
void saveGetMapFlag(u32 mask, s32 enabled);

// Build the StreetPass card from the player and the selected demon in stock. The outbox uses
// a default demon when sending an otherwise empty card; the caller then clears the attachment.
void cecCardBuild(CecProcessSlot *card, s32 unit, u8 mode, u32 selection)
{
    SaveSlotTableIV *slots = gameGetSlotTable();
    memCopy(slots->player.equipment, card->equipment, sizeof(card->equipment));
    memCopy(slots->player.name, card->playerName, sizeof(card->playerName));
    card->playerLevel = slots->player.level;
    const GameSaveBody *save = reinterpret_cast<const GameSaveBody *>(gameDataBlocksGetSaveData());
    card->selection = selection;
    card->playSeconds = save->playSeconds;
    card->unk2C = 0;
    card->flags = FUN_002228d4();
    switch (cecProcessGetObject()) {
    case 1: saveGetMapFlag(8, 1); break;
    case 2: saveGetMapFlag(4, 1); break;
    default:
        saveGetMapFlag(4, 0);
        saveGetMapFlag(8, 0);
        break;
    }
    saveGetMapFlag(0x10, 1);
    card->selectionMode = mode;
    card->unk30 = FUN_0025981c();
    if (unit != 0) {
        card->selectedDemon = unit;
        const StatBlock *record = NULL;
        for (s32 i = 0; i < 24; ++i) {
            s32 slot = slots->stock[i];
            if (slot >= 0) {
                record = gameGetUnitRecord(slot);
                if (record->id == card->selectedDemon)
                    break;
            }
        }
        // The selected id must designate a demon in stock.
        card->demon.id = unit;
        card->demon.level = record->level;
        memCopy(&record->skills, card->demon.skills, sizeof(card->demon.skills));
    } else {
        const u16 defaultDemon = 0x218;
        card->selectedDemon = 0;
        card->demon.id = defaultDemon;
        const NkmBaseRecord *record = nkmBaseGetRecord(defaultDemon);
        card->demon.level = record->level;
        memCopy(record->skills, card->demon.skills, sizeof(card->demon.skills));
    }
}
}
