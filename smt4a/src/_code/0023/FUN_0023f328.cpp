/* NON_MATCHING: the per-slot array addressing is rebuilt from different base registers in retail and the early-return paths merge differently; the slot refresh logic is the same. */
#include "common.h"
#include "util/FUN_00187168.h"

extern "C" {

/* A party/slot record (only the fields copied here). */
typedef struct SlotRecord {
    /* 0x00 */ u8 unk00[0x2A];
    /* 0x2A */ u16 statA;
    /* 0x2C */ u16 statB;
    /* 0x2E */ u8 unk2e[0x2C];
    /* 0x5A */ u8 unk5a[4];
    /* 0x5E */ u16 flagsB;
    /* 0x60 */ u16 flags;
    /* 0x62 */ u16 word;
    /* 0x64 */ u16 statC;
} SlotRecord;

/* The screen block's per-slot arrays (five slots each). */
typedef struct SlotScreen {
    /* 0x0000 */ u8 unk0000[0x3874];
    /* 0x3874 */ u32 job;
    /* 0x3878 */ u8 unk3878[0x860];
    /* 0x40D8 */ u8 locked[5];
    /* 0x40DD */ u8 unk40dd[0x10B];
    /* 0x41E8 */ u8 pending[5];
    /* 0x41ED */ u8 unavailable[5];
    /* 0x41F2 */ u16 statA[5];
    /* 0x41FC */ u16 statB[5];
    /* 0x4206 */ u16 statC[5];
    /* 0x4210 */ s16 slotRef[5];
    /* 0x421A */ u8 unk421a[2];
    /* 0x421C */ u32 word[5];
    /* 0x4230 */ u8 unk4230[0x97C];
    /* 0x4BAC */ s32 mode;
    /* 0x4BB0 */ s32 counts[5];
} SlotScreen;

typedef struct SlotTable {
    u8 unk0000[0x1C9F];
    s8 stock[5];
} SlotTable;

s32 saveSlotFindSelected(void);
SlotRecord *gameGetPlayerData(void);
SlotRecord *gameGetSlotRecord(s32 index);
SlotTable *gameGetSlotTable(void);
SlotRecord *btlMainGetUnk14(void);
s32 btlScriptUnitHasFlags(u32 job);
s32 uiEntryGetState(u32 job, s32 slot);
s32 bitsAt60Test(SlotRecord *record, u32 bit);
void FUN_004fb43c(s32 a, s32 b, u32 id, s32 c, s32 d, s32 e, s32 f);

/* Refreshes slot `slot` of the screen: clears its stats, then fills them from the player, the
 * battle unit or the stock record the slot points at, marking it unavailable when it cannot be used. */
void FUN_0023f328(SlotScreen *screen, s32 slot, s32 reset)
{
    s32 value = 0xFFFF;

    screen->statA[slot] = 0xFFFF;
    screen->statB[slot] = 0xFFFF;
    screen->statC[slot] = 0xFFFF;
    if (reset != 0) {
        value = 0xFFFC;
    }
    screen->word[slot] = 0;
    if (reset != 0) {
        screen->slotRef[slot] = value;
    }
    if (slot == 0) {
        if (screen->mode == 0) {
            SlotRecord *player = gameGetPlayerData();

            screen->statA[0] = player->statA;
            screen->statB[0] = player->statB;
            screen->statC[0] = player->word;
            screen->slotRef[0] = 0xFFFF;
            screen->word[0] = 0xFFFFFFFF;
            screen->unavailable[0] = (player->flagsB & 2) != 0 ? 1 : 0;
            return;
        }
        if (screen->mode == 1) {
            SlotRecord *unit = btlMainGetUnk14();

            if (unit == NULL) {
                screen->unavailable[0] = 1;
                return;
            }
            if (reset != 0) {
                screen->slotRef[0] = 0xFFFE;
            }
            screen->statA[0] = unit->statA;
            screen->statB[0] = unit->statB;
            screen->statC[0] = unit->statC;
            screen->word[0] = unit->word;
            screen->unavailable[0] = bitsAt60Test(unit, 1) != 0 ? 1 : 0;
            return;
        }
    } else if (slot == 4) {
        SlotRecord *saved = (SlotRecord *)saveSlotFindSelected();

        if (FUN_00187168(saved) == 0) {
            return;
        }
        screen->statA[4] = saved->statA;
        screen->slotRef[4] = 0xFFFD;
        screen->word[4] = saved->word;
        return;
    }
    SlotTable *table = gameGetSlotTable();

    if (screen->counts[slot] > 0) {
        if (reset != 0) {
            screen->slotRef[slot] = table->stock[slot];
        }
        if (screen->slotRef[slot] >= 0) {
            SlotRecord *record = gameGetSlotRecord(screen->slotRef[slot]);

            if ((record->flags & 0x400) != 0) {
                table->stock[slot] = (s8)0xFF;
                screen->unavailable[slot] = 1;
                if (btlScriptUnitHasFlags(screen->job) == 0) {
                    FUN_004fb43c(0, 0, 0x1000295, 0, 1, 0, 0);
                }
            } else {
                screen->statA[slot] = record->statA;
                screen->statB[slot] = record->statB;
                screen->statC[slot] = record->statC;
                screen->word[slot] = record->word;
                screen->unavailable[slot] = 0;
                if (bitsAt60Test(record, 1) != 0 && uiEntryGetState(screen->job, slot) == 0) {
                    screen->unavailable[slot] = 1;
                }
            }
        } else if (screen->locked[slot] == 0) {
            if (screen->pending[slot] != 0) {
                return;
            }
            screen->unavailable[slot] = 1;
        }
    }
}

}
