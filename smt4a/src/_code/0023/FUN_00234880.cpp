/* NON_MATCHING: table-row, count and loop-index register allocation differ, and retail reuses its zero
 * register in the row lookup. */
#include "common.h"
#include "util/Random.h"
#include "game/GameStateA.h"
#include "gamedata/PartnerInfoTable.h"
#include "code/Code0015.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/GameDataAccess_Shard004B.h"
#include "map/PopupStateA.h"

extern "C" {

s32 gameFlagIsSet(s32 flag);
s32 FUN_003e0024(void);
s32 FUN_003e0154(void);
s32 gameSlotTableFindFree(void);

const char *popupSelectWeightedMessage(s32 kind, s32 id);

/* Opens the popup for the first HP-ratio trigger matching the selected slot. */
void FUN_00234880(void)
{
    messageVoiceFlagsGet();
    if (g_popupState->state != 0) return;
    const PartySlotA *slot = saveSlotFindSelected();
    if (slot == NULL) return;

    bool special = false;
    if (gameFlagIsSet(0x1a2) && (s32)randRange(99) + 1 <= 50 &&
        (g_gameState.mapId == 0x1c || g_gameState.mapId == 0x1d || g_gameState.mapId == 0x1e ||
         g_gameState.mapId == 0x1f || g_gameState.mapId == 0x20)) {
        special = true;
    }

    s32 current = FUN_003e0024();
    s32 maximum = FUN_003e0154();
    s32 slotCount = gameSlotTableFindFree();
    s8 *status = gameGetSlotTable()->party;
    for (s32 i = 0; i < slotCount; i++) {
        if (status[i] >= 0) {
            SlotRecordA *record = gameGetSlotRecord(status[i]);
            current += record->hp;
            maximum += recordGetScaledMaximum(record);
        }
    }
    f32 percent = (f32)current / (f32)maximum * 100.0f;

    void *table = dataTableGet(0x43, 0);
    dataTableGetEntries(table);
    s32 count = dataTableGetCount(table);
    for (u32 i = 0; (s32)i < count; i++) {
        /* This section is immutable during the scan, so i < count guarantees a row. */
        table = dataTableGet(0x43, 0);
        PartnerInfoRecord *row = (PartnerInfoRecord *)dataTableGetEntries(table);
        u32 rowCount = dataTableGetCount(table);
        if (i >= rowCount) row = NULL; else row += i;
        if (row->kind != 8 && row->kind != 9) continue;
        if (row->partnerId != slot->id) continue;
        if (row->requiredFlag != 0 && !gameFlagIsSet(row->requiredFlag)) continue;
        if (row->excludedFlag != 0 && gameFlagIsSet(row->excludedFlag)) continue;
        if (row->kind == 8) {
            if ((f32)row->argument <= percent) {
                g_popupState->state = 5;
                g_popupState->timer = 0;
                if (special) {
                    g_popupState->message = popupSelectWeightedMessage(8, 0xad);
                    return;
                }
                g_popupState->message = popupSelectWeightedMessage(8, slot->id);
                return;
            }
        } else if (percent <= (f32)row->argument) {
            g_popupState->state = 5;
            g_popupState->timer = 0;
            if (special) {
                g_popupState->message = popupSelectWeightedMessage(9, 0xad);
                return;
            }
            g_popupState->message = popupSelectWeightedMessage(9, slot->id);
            return;
        }
    }
}

} /* extern "C" */
