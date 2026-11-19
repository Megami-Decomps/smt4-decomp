/* NON_MATCHING: 164 lines (36 by shape): same control flow, block layout and calls. What differs: the four copies whose source is a getter call and whose destination is a g_btlMain pointer (retail moves the call's result to r1 and loads the pointer straight into r0, the build loads it into r3 first: one instruction more each, which shifts every later address); slotTableClearUnits keeps 0xFFFF in fp and 8 in r5 (swapped here); the flag-value restore loads its size before the source pointer; the stock-record copy computes the entry address in r1. */
#include <string.h>
#include "battle/BtlGlobals.h"
#include "battle/BtlMainAccess.h"
#include "gamedata/DataTable.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/GameDataAccess_Smt4a.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"
#include "shard/W6_W6Match8_LightUniforms.h"
#include "util/BitsAndBytes_VariantF_Shard004B.h"
#include "util/BitsAndBytes_Shard004B.h"
#include "util/MemoryHelpers_VariantC.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemCopy.h"
#include "AsdSDK/AsdMemUtil.h"

/* A row of table 0x4E, section 0: the demons of a fixed party and the section (less one) of its flag values. */
struct WPartyDataRow {
    /* 0x00 */ s16 ids[4];        /* [0] the leader, [1..3] the members; 0 ends the list */
    /* 0x08 */ s32 flagSection;
};

/* A row of the party's flag section: a flag value to add. */
struct WPartyFlagRow {
    /* 0x00 */ s16 id;
    /* 0x02 */ u16 amount;
};

typedef char WPartyDataRowSize[sizeof(WPartyDataRow) == 0xC && sizeof(WPartyFlagRow) == 4 ? 1 : -1];

#define FLAG_VALUES_SIZE 0x10B8

extern "C" {

void dispatchIfFound(s32 slot, u32 id, s32 kind);
s32 partySlotFindIndex(const SlotRecordA *record);
void flagValueAdd(s32 id, u32 amount);
void FUN_003997b0(void);
void *__aeabi_memset4(void *dest, s32 size, s32 value);

/* Empties the slot table's units and party positions. */
static __inline void slotTableClearUnits(void)
{
    SaveSlotTableA *table = gameGetSlotTable();
    sysMemClear(table->entries, sizeof(table->entries));
    __aeabi_memset4(table->party, sizeof(table->party), -1);
    memset(table->reserve, 0xFF, sizeof(table->reserve));
    table->count = 8;
}

/* Prepares the fixed party a battle is fought with (the "WPartyData" table): builds it the first time, later
   revives the one kept from the last battle, and keeps copies of the player's own slot table and flag values. */
void btlMainSetupFixedParty(BtlMainStateExtA *state)
{
    s32 index = state->fixedParty.row;
    if (index <= 0) {
        return;
    }
    bool kept = true;
    void *table = dataTableGet(0x4E, 0);
    WPartyDataRow *rows = static_cast<WPartyDataRow *>(dataTableGetEntries(table));
    s32 last = dataTableGetCount(table) - 1;
    if (index > last) {
        return;
    }
    asdDebugHookPtr("WPartyData");
    WPartyDataRow *row = &rows[index - 1];

    if (g_btlMain.partyTable == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlMain.cpp", 13228);
        g_btlMain.partyTable = static_cast<SavePartySectionA *>(asdMemoryAlloc(0x10000, 0x100, 0, sizeof(SavePartySectionA), 0));
        kept = false;
    }
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlMain.cpp", 13232);
    SavePartySectionA *playerTable = static_cast<SavePartySectionA *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(SavePartySectionA), 1));
    memcpy(playerTable, gameGetSlotTable(), sizeof(SavePartySectionA));
    if (g_btlMain.playerTable == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlMain.cpp", 13238);
        g_btlMain.playerTable = static_cast<SavePartySectionA *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(SavePartySectionA), 1));
        memcpy(g_btlMain.playerTable, playerTable, sizeof(SavePartySectionA));
    }

    /* The leader is built in slot 0 and kept on its own. */
    slotTableClearUnits();
    if (g_btlMain.partyLeader == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlMain.cpp", 13248);
        g_btlMain.partyLeader = static_cast<SlotRecordA *>(asdMemoryAlloc(0x10000, 0x100, 0, sizeof(SlotRecordA), 0));
        kept = false;
    }
    if (!kept) {
        dispatchIfFound(0, row->ids[0], 0);
        memcpy(g_btlMain.partyLeader, gameGetSlotRecord(0), sizeof(SlotRecordA));
    } else if (bitsAt60Test(g_btlMain.partyLeader, 1)) {
        bitsAt60Clear(g_btlMain.partyLeader, 2);
        g_btlMain.partyLeader->hp = 1;
    }

    slotTableClearUnits();
    if (!kept) {
        for (s32 i = 1; i < 4; i++) {
            s32 id = row->ids[i];
            if (id == 0) {
                break;
            }
            dispatchIfFound(i - 1, id, 0);
            SlotRecordA *record = gameGetSlotRecord(i - 1);
            if (record != NULL && record->id == 0x2A1) {
                /* This member is the player's own demon of that kind. */
                PartySlotA *stock = saveSlotFindById((u16)FUN_0036fcd0(7, 0));
                u8 tableIndex = record->tableIndex;
                memcpy(&gameGetSlotTable()->entries[i - 1], stock, sizeof(SlotRecordA));
                gameGetSlotTable()->entries[i - 1].tableIndex = tableIndex;
            }
        }
        s32 reserved = 0;
        for (s32 i = 0; i < gameGetSlotTable()->count; i++) {
            SlotRecordA *record = gameGetSlotRecord(i);
            if (record != NULL && record->id != 0) {
                gameGetSlotTable()->reserve[reserved++] = partySlotFindIndex(record);
            }
            if (reserved > 2) {
                break;
            }
        }
        memcpy(g_btlMain.partyTable, gameGetSlotTable(), sizeof(SavePartySectionA));
    } else {
        /* The party of the last battle, its fallen members back on 1 HP. */
        memcpy(gameGetSlotTable(), g_btlMain.partyTable, sizeof(SavePartySectionA));
        for (s32 i = 0; i < gameGetSlotTable()->count; i++) {
            SlotRecordA *record = gameGetSlotRecord(i);
            if (record != NULL && record->id != 0 && bitsAt60Test(record, 1)) {
                bitsAt60Clear(record, 2);
                record->hp = 1;
            }
        }
        memcpy(g_btlMain.partyTable, gameGetSlotTable(), sizeof(SavePartySectionA));
    }
    memcpy(gameGetSlotTable(), playerTable, sizeof(SavePartySectionA));
    if (playerTable != NULL) {
        asdMemFree(playerTable);
    }

    /* The party's flag values, built the same way. */
    void *flagTable = dataTableGet(0x4E, row->flagSection + 1);
    WPartyFlagRow *flagRow = static_cast<WPartyFlagRow *>(dataTableGetEntries(flagTable));
    s32 flagCount = dataTableGetCount(flagTable);
    if (g_btlMain.partyFlags == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlMain.cpp", 13349);
        g_btlMain.partyFlags = static_cast<u8 *>(asdMemoryAlloc(0x10000, 0x100, 0, FLAG_VALUES_SIZE, 0));
        kept = false;
    }
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlMain.cpp", 13354);
    u8 *playerFlags = static_cast<u8 *>(asdMemoryAllocTracked(0x100, 0x100, 0, FLAG_VALUES_SIZE, 1));
    rt_memcpy(playerFlags, flagValueGetStorage(), FLAG_VALUES_SIZE);
    if (g_btlMain.playerFlags == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlMain.cpp", 13360);
        g_btlMain.playerFlags = static_cast<u8 *>(asdMemoryAllocTracked(0x100, 0x100, 0, FLAG_VALUES_SIZE, 1));
        rt_memcpy(g_btlMain.playerFlags, playerFlags, FLAG_VALUES_SIZE);
    }
    rt_memcpy(flagValueGetStorage(), g_btlMain.partyFlags, FLAG_VALUES_SIZE);
    if (!kept) {
        for (s32 i = 0; i < flagCount; i++) {
            flagValueAdd(flagRow->id, flagRow->amount);
            flagRow++;
        }
    }
    rt_memcpy(g_btlMain.partyFlags, flagValueGetStorage(), FLAG_VALUES_SIZE);
    rt_memcpy(flagValueGetStorage(), playerFlags, FLAG_VALUES_SIZE);
    if (playerFlags != NULL) {
        asdMemFree(playerFlags);
    }

    if (state->snapshot == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlMain.cpp", 13388);
        state->snapshot = asdMemoryAllocTracked(0x100, 0x100, 0, 0x34A0, 1);
    }
    FUN_003997b0();
}

} /* extern "C" */
