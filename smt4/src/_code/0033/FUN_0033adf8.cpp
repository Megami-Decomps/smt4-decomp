/* NON_MATCHING: retail sets the item loop's index to 0 before gameGetPlayerName (so the player data pointer is r5),
 * and loads a stock entry's id into r2 before the count test; the rest is that register shift (56 lines). */
#include "gamedata/DataTable.h"
#include "gamedata/UnitRecordAccess.h"
#include "code/Code0029.h"
#include "gamedata/GamePlayerData.h"
#include <string.h>

// Row of the debug scenario table (0x74 bytes): the state the game is set to.
struct ScenarioRow {
    u16 mapId;              // 0x00
    u16 spawnId;            // 0x02
    u32 macca;              // 0x04
    u16 look[7];            // 0x08: player appearance words
    s16 hp;                 // 0x16
    s16 mp;                 // 0x18
    u16 stats[5];           // 0x1a
    u16 itemIds[8];         // 0x24
    u8 playerKind;          // 0x34
    u8 unk35;
    u16 unk36;
    u16 skills[8];          // 0x38
    u16 partyIds[3];        // 0x48
    u16 slotIds[8];         // 0x4e
    u16 unk5e_[1];          // 0x5e
    struct { u16 id; u16 count; } stock[5];   // 0x60
};



struct SlotTable {
    u32 macca;              // 0x00
    u8 unk04[0x90f0 - 4];
    u8 slotClear[0x18];     // 0x90f0
    u8 party[3];            // 0x9108
    u8 slotLimit;           // 0x910b
};

struct BattleMainBlock {
    u8 unk0000[0xb8];
    u32 mapId;              // 0xb8
    u32 spawnId;            // 0xbc
    u8 unk00c0[0x223c - 0xc0];
    void *scenarioFile;     // 0x223c
    u8 unk2240[0x44a0 - 0x2240];
    u32 flags;              // 0x44a0
};

extern "C" {

void appRefundAllPoints(void);
void playerSkillInsertFirstFree(u32 skill);
void saveFlagSetOrAddCounter(u32 id, u32 count);
void playerRecalcStatsFromEquipment(s32 arg);
void libc_strcpy(char* dst, const char* src);
void rt_memclr(void* block, u32 size);
void __aeabi_memset4(void* block, u32 size, s32 value);
void playerUnitRecordInit(s32 kind, char* name, u16* look);
void FUN_00334058(u32 id);
u8 gameSlotFindByCategory(StatBlock* record);
SlotTable* gameGetSlotTable(void);
void *dataTableFileGetTable(void *file, s32 arg);
const char* gameGetPlayerName(void);

// Debug: loads scenario row `row` into the running game (player, party, skills, stock).
void FUN_0033adf8(BattleMainBlock* battle, u32 row)
{
    if ((battle->flags & 0x40000) == 0 || row == 0) return;

    void *table = battle->scenarioFile != NULL ? dataTableFileGetTable(battle->scenarioFile, 0) : NULL;
    ScenarioRow *rows = static_cast<ScenarioRow *>(dataTableGetEntries(table));
    s32 count = dataTableGetCount(table);
    if (row > (u32)(count - 1)) return;
    ScenarioRow* scenario = &rows[row];

    SlotTable* slots = gameGetSlotTable();
    char name[20];
    libc_strcpy(name, gameGetPlayerName());
    u16 look[7];
    for (s32 i = 0; i < 7; i++) look[i] = scenario->look[i];
    playerUnitRecordInit(scenario->playerKind, name, look);

    PlayerDataIV* player = gameGetPlayerData();
    for (s32 i = 0; i < 5; i++) player->baseStats.stats[i] = scenario->stats[i];
    playerRecalcStatsFromEquipment(0);
    if (scenario->hp > 0) {
        player->hp = player->maxHp = scenario->hp;
    }
    if (scenario->mp > 0) {
        player->mp = player->maxMp = scenario->mp;
    }
    for (s32 i = 0; i < 8; i++) {
        if (scenario->itemIds[i] != 0) FUN_00334058(scenario->itemIds[i]);
    }

    __aeabi_memset4(slots->slotClear, 0x18, -1);
    memset(slots->party, 0xff, sizeof(slots->party));
    slots->slotLimit = 8;
    for (s32 i = 0; i < slots->slotLimit; i++) {
        if (scenario->slotIds[i] != 0) dispatchIfFound(i, scenario->slotIds[i], 0);
    }
    s32 partyCount = 0;
    for (s32 i = 0; i < 3; i++) {
        if (scenario->partyIds[i] == 0) continue;
        for (s32 slot = 0; slot < slots->slotLimit; slot++) {
            StatBlock *unit = gameGetUnitRecord(slot);
            if (unit->id == scenario->partyIds[i]) {
                slots->party[partyCount] = gameSlotFindByCategory(unit);
                partyCount++;
                break;
            }
        }
    }
    rt_memclr(saveGetUnlockFlagBlock(), 0x104a);
    for (s32 i = 0; i < 5; i++) {
        if (scenario->stock[i].id != 0 && scenario->stock[i].count != 0) {
            saveFlagSetOrAddCounter(scenario->stock[i].id, scenario->stock[i].count);
        }
    }
    for (s32 i = 0; i < 8; i++) {
        if (scenario->skills[i] != 0) playerSkillInsertFirstFree(scenario->skills[i]);
    }
    appRefundAllPoints();
    slots->macca = scenario->macca;
    battle->mapId = scenario->mapId;
    battle->spawnId = scenario->spawnId;
}

} /* extern "C" */
