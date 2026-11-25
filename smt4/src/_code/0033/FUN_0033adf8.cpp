/* NON_MATCHING: the stock loop's id load uses writeback addressing; retail uses fixed offsets for both fields. */
#include "gamedata/DataTable.h"
#include "gamedata/SaveSlotTableIV.h"
#include "battle/btlMain.h"
#include "gamedata/UnitRecordAccess.h"
#include "code/Code0029.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/GameDataAccess.h"
#include <string.h>
#include "runtime/String.h"

/* unit-local: the item grants and rows of the debug scenario table are only read here. */
struct ScenarioStock { u16 id; u16 count; };
struct ScenarioRow {
    /* 0x00 */ u16 mapId;
    /* 0x02 */ u16 spawnId;
    /* 0x04 */ u32 macca;
    /* 0x08 */ u16 look[7];        /* player appearance words */
    /* 0x16 */ s16 hp;
    /* 0x18 */ s16 mp;
    /* 0x1A */ u16 stats[5];
    /* 0x24 */ u16 itemIds[8];
    /* 0x34 */ u8 playerKind;
    /* 0x35 */ u8 unk35;
    /* 0x36 */ u16 unk36;
    /* 0x38 */ u16 skills[8];
    /* 0x48 */ u16 partyIds[3];
    /* 0x4E */ u16 slotIds[8];
    /* 0x5E */ u16 unk5E;
    /* 0x60 */ ScenarioStock stock[5];
};
typedef char ScenarioRowLayoutCheck[sizeof(ScenarioRow) == 0x74 && offsetof(ScenarioRow, stock) == 0x60 ? 1 : -1];

extern "C" {

void appRefundAllPoints(void);
void playerSkillInsertFirstFree(u32 skill);
void saveFlagSetOrAddCounter(u32 id, u32 count);
void playerRecalcStatsFromEquipment(s32 arg);
void libc_strcpy(char* dst, const char* src);
void __aeabi_memset4(void* block, u32 size, s32 value);
void playerUnitRecordInit(s32 kind, char* name, u16* look);
void FUN_00334058(u32 id);
void *dataTableFileGetTable(void *file, s32 arg);

/* Restores the player, party, skills and stock from a debug scenario row. */
void FUN_0033adf8(BtlMainState *battle, u32 row)
{
    if ((battle->battleFlags & 0x40000) == 0 || row == 0) return;

    void *table = battle->residentResources.systematicTable != NULL ? dataTableFileGetTable(battle->residentResources.systematicTable, 0) : NULL;
    ScenarioRow *rows = (ScenarioRow *)dataTableGetEntries(table);
    s32 count = dataTableGetCount(table);
    if (row > (u32)(count - 1)) return;
    const ScenarioRow *scenario = &rows[row];

    SaveSlotTableIV *slots = gameGetSlotTable();
    s32 i = 0;
    char name[20];
    libc_strcpy(name, (const char *)gameGetPlayerName());
    u16 look[7];
    for (; i < 7; i++) look[i] = scenario->look[i];
    playerUnitRecordInit(scenario->playerKind, name, look);

    PlayerDataIV *player = gameGetPlayerData();
    for (i = 0; i < 5; i++) player->baseStats.stats[i] = scenario->stats[i];
    playerRecalcStatsFromEquipment(0);
    if (scenario->hp > 0) {
        player->hp = player->maxHp = scenario->hp;
    }
    if (scenario->mp > 0) {
        player->mp = player->maxMp = scenario->mp;
    }
    for (i = 0; i < 8; i++) {
        if (scenario->itemIds[i] != 0) FUN_00334058(scenario->itemIds[i]);
    }

    __aeabi_memset4(slots->stock, sizeof(slots->stock), -1);
    memset(slots->active, 0xff, sizeof(slots->active));
    s32 partyCount = 0;
    slots->stockCount = 8;
    for (i = 0; i < slots->stockCount; i++) {
        if (scenario->slotIds[i] != 0) dispatchIfFound(i, scenario->slotIds[i], 0);
    }
    for (i = 0; i < 3; i++) {
        if (scenario->partyIds[i] == 0) continue;
        for (s32 slot = 0; slot < slots->stockCount; slot++) {
            StatBlock *unit = gameGetUnitRecord(slot);
            if (unit->id == scenario->partyIds[i]) {
                slots->active[partyCount] = gameSlotFindByCategory(unit);
                partyCount++;
                break;
            }
        }
    }
    rt_memclr(saveGetUnlockFlagBlock(), 0x104a);
    for (i = 0; i < 5; i++) {
        const ScenarioStock &stock = scenario->stock[i];
        if (stock.id != 0 && stock.count != 0)
            saveFlagSetOrAddCounter(stock.id, stock.count);
    }
    for (i = 0; i < 8; i++) {
        if (scenario->skills[i] != 0) playerSkillInsertFirstFree(scenario->skills[i]);
    }
    appRefundAllPoints();
    slots->money = scenario->macca;
    battle->scenarioLocation.mapId = scenario->mapId;
    battle->scenarioLocation.spawnId = scenario->spawnId;
}

} /* extern "C" */
