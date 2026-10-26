/* NON_MATCHING: near-structure (172 rows against 203): same skip test, special-row cases, member/row loops and index maths from the asm; retail has extra armcc nops around calls (inlined stubs) and re-tests `target < 0` before the second special case, with the row pointer reloaded (ldr/rsb/str order) after each FUN_004bcbb4, which ours schedules differently */
#include "battle/BtlMainAccess.h"
#include "network/DataStore/DataStoreMain.h"
#include "util/FUN_002a4878.h"
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;

extern "C" {

/* Row shown in the party panel (observed fields only). */
struct PanelEntry {
    u8 pad00[0x34];
    u32 slot;            /* 0x34: party slot id, or -1/-2 for the special rows */
    u8 pad38[8];
    u32 result;          /* 0x40 */
    s32 value;           /* 0x44 */
};

/* Party panel (observed fields only). */
struct PartyPanel {
    u8 pad00[0x2C];
    s32 page;            /* 0x2C */
    u8 pad30[6];
    u16 skillId;         /* 0x36 */
    s16 target;          /* 0x38 */
    u8 pad3A[8];
    u8 compactLayout;    /* 0x42 */
    u8 pad43[0xA10 - 0x43];
    PanelEntry *cursor;  /* 0xA10 */
    PanelEntry *member[3];   /* 0xA14 */
    PanelEntry *row[24];     /* 0xA20 */
    s32 rowTarget[24][2];    /* 0xA80: target id at +0 of each 8-byte pair */
};

struct SlotTableView {
    u8 pad0000[0x1C9F];
    s8 byIndex[1];           /* 0x1C9F: slot ids, 1-based */
};

struct UnitState {
    u8 pad00[0x28];
    u8 *action;              /* 0x28 */
};

extern PartyPanel *g_partyPanel;   /* 0x57f268 */
extern u32 g_btlScriptUnit;        /* 0x57113c */

s32 gameGetSlotTable(void);
UnitState *btlUnitGet(u32 unit);
u32 gameGetSlotRecord(u32 slot);
s32 FUN_004bcbb4(u32 record, u32 skillId);
s32 FUN_003df57c(u32 skillId, s32 flag);
u32 btlMainGetUnk14(void);
s32 FUN_002a4894(u32 id);
s32 FUN_002c7bb0(s32 target, s32 slot, u32 skillId, u32 *out);

/* Refreshes the skill-cost preview of the party panel rows for the current skill/target and the
 * entry of list position `id` (`direct` selects the unpaged layout). */
void FUN_0028c2ec(u32 id, s32 direct)
{
    PartyPanel *panel = g_partyPanel;
    SlotTableView *slots = (SlotTableView *)gameGetSlotTable();
    u32 out = 0;
    s32 index;

    s32 skipPreview = 0;
    if (panel->skillId == 125 && reinterpret_cast<s32>(btlGetMainState()) != 0 && g_btlScriptUnit != 0) {
        UnitState *unit = btlUnitGet(g_btlScriptUnit);
        if (unit->action != 0 && *(u16 *)(unit->action + 0x1BE) == 8) {
            skipPreview = 1;
        }
    }
    if (!skipPreview) {
        if (panel->target < 0 && panel->cursor->slot == (u32)-1) {
            panel->cursor->value = -FUN_003df57c(panel->skillId, 1);
        } else if (panel->target < 0 && panel->cursor->slot == (u32)-2) {
            u32 unit = btlMainGetUnk14();
            if (unit != 0) {
                panel->cursor->value = -FUN_004bcbb4(unit, panel->skillId);
            }
        } else {
            for (s32 i = 0; i < 3; i++) {
                if (slots->byIndex[i + 1] == panel->target) {
                    u32 record = gameGetSlotRecord(panel->member[i]->slot);
                    panel->member[i]->value = -FUN_004bcbb4(record, panel->skillId);
                }
            }
            for (s32 i = 0; i < 24; i++) {
                if (panel->rowTarget[i][0] == panel->target) {
                    u32 record = gameGetSlotRecord(panel->row[i]->slot);
                    panel->row[i]->value = -FUN_004bcbb4(record, panel->skillId);
                }
            }
        }
    }

    if (direct != 0) {
        if (panel->compactLayout != 0) {
            index = FUN_002a4878((void *)(id)) + FUN_002a4894(id) * 4;
        } else {
            index = FUN_002a4894(id) * 4 + panel->page * 12 + FUN_002a4878((void *)(id));
        }
    } else {
        s32 count = FUN_002a4894(id);
        if (count < 1) {
            s32 position = FUN_002a4878((void *)(id));
            s32 slot;
            if (position != 0) {
                slot = slots->byIndex[position];
            } else {
                slot = -1;
            }
            FUN_002c7bb0(panel->target, slot, panel->skillId, &out);
            panel->member[position]->result = out;
            FUN_003344b4(out, panel->member[position]->value);
            return;
        }
        if (panel->compactLayout != 0) {
            index = FUN_002a4878((void *)(id)) + count * 4;
        } else {
            index = FUN_002a4878((void *)(id)) + count * 4 + panel->page * 12;
        }
        index = index - 4;
    }
    FUN_002c7bb0(panel->target, panel->rowTarget[index][0], panel->skillId, &out);
    panel->row[index]->result = out;
    FUN_003344b4(out, panel->row[index]->value);
}

} /* extern "C" */
