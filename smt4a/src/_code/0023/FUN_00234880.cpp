/* NON_MATCHING: ratio VFP division destination, selected table-row/count register allocation and threshold load order differ. */
#include "common.h"
#include "gamedata/DataTable.h"
#include "util/CalleeContracts.h"
#include "gamedata/SaveSlotTable.h"

struct PopupState {
    s32 state;      // 0x00
    s32 arg;        // 0x04
    u8 unk08[0x0c];
    s32 message;    // 0x14
};

struct SaveSlot {
    u8 unk00[0x12c];
    u16 id;         // 0x12c
};

// Row of data table 0x43: a message shown when the party's HP/MP ratio crosses `threshold`.
struct RatioMessage {
    u32 id;             // 0x00: slot id the row applies to
    u32 kind;           // 0x04: 8 = at most, 9 = at least
    s16 requiredFlag;   // 0x08
    s16 forbiddenFlag;  // 0x0a
    s16 threshold;      // 0x0c: percent
    u8 unk0e[0x12];
};

extern "C" {

extern PopupState* g_popupState;
extern s32 g_gameState;

s32 gameFlagIsSet(s32 flag);
s32 randRange(s32 range);
s32 FUN_003e0024(void);
s32 FUN_003e0154(void);
s32 gameSlotTableFindFree(void);
s32 gameGetSlotRecord(s32 slot);
s32 recordGetScaledMaximum(s32 record);

s32 FUN_002d8b58(s32 kind, s32 id);

// Opens the popup for the first ratio message matching the selected slot.
void FUN_00234880(void)
{
    FUN_00152f44();
    if (g_popupState->state != 0) return;
    SaveSlot* slot = reinterpret_cast<SaveSlot*>(saveSlotFindSelected());
    if (slot == NULL) return;

    bool special = false;
    if (gameFlagIsSet(0x1a2) && randRange(99) + 1 <= 50 &&
        (g_gameState == 0x1c || g_gameState == 0x1d || g_gameState == 0x1e ||
         g_gameState == 0x1f || g_gameState == 0x20)) {
        special = true;
    }

    s32 current = FUN_003e0024();
    s32 maximum = FUN_003e0154();
    s32 slotCount = gameSlotTableFindFree();
    s8 *status = gameGetSlotTable()->party;
    for (s32 i = 0; i < slotCount; i++) {
        if (status[i] >= 0) {
            s32 record = gameGetSlotRecord(status[i]);
            current += *(s16*)(record + 0x2a);
            maximum += recordGetScaledMaximum(record);
        }
    }
    f32 percent = (f32)current / (f32)maximum * 100.0f;

    void *table = dataTableGet(0x43, 0);
    dataTableGetEntries(table);
    s32 count = dataTableGetCount(table);
    for (u32 i = 0; (s32)i < count; i++) {
        table = dataTableGet(0x43, 0);
        RatioMessage* row = static_cast<RatioMessage*>(dataTableGetEntries(table));
        u32 rowCount = dataTableGetCount(table);
        if (i >= rowCount) row = NULL; else row += i;
        if (row->kind != 8 && row->kind != 9) continue;
        if (row->id != slot->id) continue;
        if (row->requiredFlag != 0 && !gameFlagIsSet(row->requiredFlag)) continue;
        if (row->forbiddenFlag != 0 && gameFlagIsSet(row->forbiddenFlag)) continue;
        f32 threshold = (f32)row->threshold;
        if (row->kind == 8) {
            if (threshold <= percent) {
                g_popupState->state = 5;
                g_popupState->arg = 0;
                if (special) {
                    g_popupState->message = FUN_002d8b58(8, 0xad);
                    return;
                }
                g_popupState->message = FUN_002d8b58(8, slot->id);
                return;
            }
        } else if (percent <= threshold) {
            g_popupState->state = 5;
            g_popupState->arg = 0;
            if (special) {
                g_popupState->message = FUN_002d8b58(9, 0xad);
                return;
            }
            g_popupState->message = FUN_002d8b58(9, slot->id);
            return;
        }
    }
}

} /* extern "C" */
