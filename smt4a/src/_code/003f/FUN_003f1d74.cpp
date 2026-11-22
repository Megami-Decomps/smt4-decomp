/* NON_MATCHING: debug start of a battle from a party preset record, rebuilt from the retail disassembly (the old draft was a raw decompilation); the calls and stores agree, but retail calls the preset table getter predicated (blne, the file word reused as the NULL result), keeps a count-down pair loop for the twelve stock-slot flags and allocates the loop registers differently. */
#include "common.h"
#include <string.h>
#include "battle/btlMain.h"
#include "battle/BtlGlobals.h"
#include "gamedata/DataTable.h"
#include "gamedata/DataTableAccess_VariantA.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GamePlayerData.h"
#include "shard/W6_W6Match8_LightUniforms.h"
#include "code/Code0029.h"
#include "code/Code003e.h"
#include "code/Code0018.h"

/* unit-local: the battle state fields this preset loader writes, until btlMain.h names them */
struct BattlePresetState {
    /* 0x0000 */ u8 unk0000[0xE4];
    /* 0x00E4 */ u32 presetA;
    /* 0x00E8 */ u32 presetB;
    /* 0x00EC */ u8 unk00EC[0x2188];
    /* 0x2274 */ u32 presetFile;     /* the loaded preset table file, 0 when none */
    /* 0x2278 */ u8 unk2278[0x2328];
    /* 0x45A0 */ u64 stateFlags;
    /* 0x45A8 */ u8 unk45A8[0x7C8];
    /* 0x4D70 */ u32 presetMode;
    /* 0x4D74 */ u8 unk4D74[0xD0];
    /* 0x4E44 */ u8 presetFlag;
};

/* unit-local: one 0x84-byte party preset record of the preset table */
struct BattlePartyPreset {
    /* 0x00 */ u16 a;
    /* 0x02 */ u16 b;
    /* 0x04 */ s32 money;
    /* 0x08 */ u16 playerTable[7];   /* passed to the player record builder */
    /* 0x16 */ s16 maxHp;
    /* 0x18 */ s16 maxMp;
    /* 0x1A */ s16 stats[5];
    /* 0x24 */ u16 skills[8];
    /* 0x34 */ u16 playerId;
    /* 0x36 */ u8 unk36[2];
    /* 0x38 */ u16 reserve[3];
    /* 0x3E */ u16 party[9];
    /* 0x50 */ u16 flags[5][2];      /* flag id and value */
    /* 0x64 */ u16 stock[7][2];      /* stock unit id and value */
    /* 0x80 */ u16 counter;
    /* 0x82 */ u8 mode;
    /* 0x83 */ u8 flag;
};

typedef char BattlePresetLayoutCheck[offsetof(BattlePresetState, presetFile) == 0x2274 &&
    offsetof(BattlePresetState, stateFlags) == 0x45A0 && offsetof(BattlePresetState, presetFlag) == 0x4E44 &&
    offsetof(BattlePartyPreset, playerId) == 0x34 && offsetof(BattlePartyPreset, stock) == 0x64 &&
    sizeof(BattlePartyPreset) == 0x84 ? 1 : -1];

extern "C" {

char *libc_strcpy(char *destination, const u8 *source); // declcheck: local (the shared shard declaration takes word pointers)
void FUN_003dff6c(u16 id, const char *name, const u16 *table);
void FUN_003df7c4(s32 mode);
void FUN_003e0174(u16 skill);
s32 partySlotFindIndex(const SlotRecordA *record);
void flagValueAdd(s32 id, u32 amount);
void partyRefreshOrInsertSlot(u16 id, u16 value);
void FUN_00284fdc(void);
void FUN_003e49e8(void);
void partyAdjustCounterIfEnoughActive(u16 counter);
void *__aeabi_memset4(void *dest, s32 size, s32 value);
void rt_memclr(void *destination, u32 size);

/* Starts a battle from party preset `index` of the battle's preset table (when the battle state allows it):
 * builds the player from the record, fills the party and stock, sets the preset flags and the party money. */
void FUN_003f1d74(BattlePresetState *state, u32 index)
{
    if ((state->stateFlags & g_btlMain.fixedScore.mask) == 0 || index == 0)
        return;
    void *table = state->presetFile != 0 ? dataTableFileGetTable(state->presetFile, 0) : NULL;
    BattlePartyPreset *presets = (BattlePartyPreset *)dataTableGetEntries(table);
    if (index > dataTableGetCount(table) - 1)
        return;
    BattlePartyPreset *preset = &presets[index];
    SaveSlotTableA *slots = gameGetSlotTable();

    char name[20];
    libc_strcpy(name, gameGetPlayerName());
    u16 playerTable[7];
    for (s32 i = 0; i < 7; i++)
        playerTable[i] = preset->playerTable[i];
    FUN_003dff6c(preset->playerId, name, playerTable);

    PlayerDataA *player = gameGetPlayerData();
    for (s32 i = 0; i < 5; i++)
        player->baseStats.stats[i] = preset->stats[i];
    FUN_003df7c4(0);
    if (preset->maxHp > 0)
        player->hp = player->maxHp = preset->maxHp;
    if (preset->maxMp > 0)
        player->mp = player->maxMp = preset->maxMp;
    for (s32 i = 0; i < 8; i++) {
        if (preset->skills[i] != 0)
            FUN_003e0174(preset->skills[i]);
    }

    __aeabi_memset4(slots->party, sizeof(slots->party), -1);
    memset(slots->reserve, 0xFF, sizeof(slots->reserve));
    slots->count = 8;
    for (s32 i = 0; i < slots->count; i++) {
        if (preset->party[i] != 0)
            dispatchIfFound(i, preset->party[i], 0);
    }
    s32 reserved = 0;
    for (s32 i = 0; i < 3; i++) {
        if (preset->reserve[i] == 0)
            continue;
        for (s32 slot = 0; slot < slots->count; slot++) {
            SlotRecordA *record = gameGetSlotRecord(slot);
            if (record->id == preset->reserve[i]) {
                slots->reserve[reserved++] = partySlotFindIndex(record);
                break;
            }
        }
    }

    rt_memclr(flagValueGetStorage(), 0x10B8);
    for (s32 i = 0; i < 5; i++) {
        if (preset->flags[i][0] != 0 && preset->flags[i][1] != 0)
            flagValueAdd(preset->flags[i][0], preset->flags[i][1]);
    }
    FUN_00284fdc();
    slots->money = preset->money;
    state->presetA = preset->a;
    state->presetB = preset->b;
    for (s32 i = 0; i < 12; i++)
        slots->slots[i].flags &= ~1;
    slots->preferredId = 0;
    slots->unk2C4E = 0;
    s32 stocked = 0;
    for (s32 i = 0; i < 7; i++) {
        if (preset->stock[i][0] != 0 && preset->stock[i][1] != 0) {
            partyRefreshOrInsertSlot(preset->stock[i][0], preset->stock[i][1]);
            if (i == 0)
                saveSlotTableSetPreferredId(preset->stock[i][0]);
            stocked++;
        }
    }
    if (stocked > 0)
        partySlotIsOccupied(saveSlotFindSelected());
    FUN_003e49e8();
    partyAdjustCounterIfEnoughActive(preset->counter);
    state->presetMode = preset->mode;
    state->presetFlag = preset->flag;
}

} /* extern "C" */
