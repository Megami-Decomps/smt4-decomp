/* NON_MATCHING: same instruction sequence as retail except callee-saved register numbering (retail keeps HP total/max/slot count in r5-r7, the entry in r4) and the placement of the 100.0f pool load. */
#include "common.h"

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

void FUN_00152f44(void);
SaveSlot* saveSlotFindSelected(void);
s32 gameFlagIsSet(s32 flag);
s32 randRange(s32 range);
s32 FUN_003e0024(void);
s32 FUN_003e0154(void);
s32 gameSlotTableFindFree(void);
s8* gameGetSlotTable(void);
s32 gameGetSlotRecord(s32 slot);
s32 recordGetScaledMaximum(s32 record);
u32 dataTableGet(u32 table, u32 arg);
RatioMessage* dataTableGetEntries(void);
u32 dataTableGetCount(u32 table);
s32 FUN_002d8b58(s32 kind, s32 id);

// Opens the popup for the first ratio message matching the selected slot.
void FUN_00234880(void)
{
    FUN_00152f44();
    if (g_popupState->state != 0) return;
    SaveSlot* slot = saveSlotFindSelected();
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
    s8* status = gameGetSlotTable() + 0x1c88;
    for (s32 i = 0; i < slotCount; i++) {
        if (status[i] >= 0) {
            s32 record = gameGetSlotRecord(status[i]);
            current += *(s16*)(record + 0x2a);
            maximum += recordGetScaledMaximum(record);
        }
    }
    f32 percent = (f32)current / (f32)maximum * 100.0f;

    u32 table = dataTableGet(0x43, 0);
    dataTableGetEntries();
    s32 count = dataTableGetCount(table);
    for (u32 i = 0; (s32)i < count; i++) {
        table = dataTableGet(0x43, 0);
            RatioMessage* row = dataTableGetEntries();
        if (i >= dataTableGetCount(table)) row = NULL; else row += i;
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
