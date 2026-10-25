/* NON_MATCHING: register allocation and scheduling only: the any-slot flag lives in r0 (not r1) so the final slot test and the beq to the end swap places, the entry's unit pointer is formed as entry+0x400 before the loop and the zero arguments of FUN_004c9d04 come from r3. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match5_UnitCategory.h"

/* The party member a combatant entry represents: its unit id is at 0x12C. */
struct EntryUnitInfo {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ u16 unitId;
};

/* The entry as this menu reads it: the unit info pointer sits at 0x400. */
struct MenuEntryView {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ EntryUnitInfo *unit;
};

/* The party table: the cursor-reachable slots and how many there are. */
struct PartyTable {
    /* 0x0000 */ u8 unk0000[0x1C88];
    /* 0x1C88 */ s8 slotOf[0x1B];
    /* 0x1CA3 */ u8 count;
};

/* The pending command menu: the four candidate unit ids, and its frame counter. */
struct CommandMenu {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s32 frames;
    /* 0x00C */ u8 unk00C[0x5A4];
    /* 0x5B0 */ s16 unitIds[4];
};

struct BattleMenuOwner {
    /* 0x00 */ BtlMainStateA *state;
};

/* One script unit slot (0x1254 bytes); the byte at 9 holds its current command. */
struct ScriptUnitSlot {
    /* 0x0000 */ u8 unk0000[9];
    /* 0x0009 */ u8 command;
    /* 0x000A */ u8 unk000A[0x124A];
};

/* g_btlAction: the script unit table pointer follows its first word, the selection masks sit further on. */
struct BattleActionGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ScriptUnitSlot *scriptUnit;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u64 requiredAny;
    /* 0x18 */ u8 unk18[0x28];
    /* 0x40 */ u64 excluded;
};

extern "C" {
extern BattleActionGlobals g_btlAction;
extern void *g_btlActionReflect;

s32 chainCountIdUnflagged(void *owner);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);
u32 FUN_004c9160(s32 kind, void *object, s32 mode, s32 option);
void FUN_004fe764(s32 unit, CommandMenu *menu, s32 target, s32 value, s32 mode);
void FUN_004fb43c(s32 actor, CommandMenu *menu, u32 options, s32 a, s32 b, s32 c, s32 d);
void FUN_004c9d04(s32 index, s32 a, s32 b);
u8 *gameGetSlotTable(void);
SlotRecord *gameGetSlotRecord(s32 slotIndex);
void FUN_004fcf0c(s32 row, CommandMenu *menu, s32 first, s32 slot, s32 member, s32 last);
void FUN_003f1b3c(BtlMainStateA *state, s32 section, s32 kind, u32 *effect, u32 *sound);
void FUN_0047f7ac(u32 index, u32 value);
void btlReflectCreateKind44(s32 row, CommandMenu *menu, u32 unitId, u32 effect);

/* Advances the party command menu after its delay: builds the member rows and sets the script unit's next command. */
u32 FUN_004e0314(BattleMenuOwner *owner, CommandMenu *menu)
{
    if (chainCountIdUnflagged(g_btlActionReflect) > 0) {
        return 0;
    }
    s32 any = 0;
    if (menu->unitIds[0] >= 0) {
        any = 1;
    }
    if (menu->unitIds[1] >= 0) {
        any = 1;
    }
    if (menu->unitIds[2] >= 0) {
        any = 1;
    }
    if (menu->unitIds[3] >= 0 || any != 0) {
        menu->frames++;
        if (menu->frames < 10) {
            return 0;
        }
        BtlCombatantEntryA *current = FUN_003eaf20(owner->state);
        FUN_004c9160(0x38, current, 0, 1);
        FUN_004fe764(0, menu, 0, 10, 6);
        FUN_004fb43c(0, menu, 0x1000296, 0, 1, 0, 0);
        for (s32 i = 0; i < 109; i++) {
            BtlCombatantEntryA *entry = &owner->state->entries[i];
            if ((entry->flags & g_btlAction.requiredAny) != 0 && (entry->flags & g_btlAction.excluded) == 0 &&
                (entry->statusFlags & 0x400) != 0) {
                FUN_004c9d04(entry->indexView.selectionIndex, 0, 0);
            }
        }
        s32 row = 1;
        PartyTable *party = (PartyTable *)gameGetSlotTable();
        for (s32 member = 0; member < 4; member++) {
            s32 unitId = menu->unitIds[member];
            if (unitId >= 0) {
                for (s32 slot = 0; slot < party->count; slot++) {
                    if (party->slotOf[slot] >= 0) {
                        SlotRecord *record = gameGetSlotRecord(party->slotOf[slot]);
                        if (record->entryId == unitId) {
                            record->status.mask &= ~0x400;
                            FUN_004fcf0c(row, menu, 0, slot, member, 0);
                            row += 10;
                        }
                    }
                }
            }
        }
        MenuEntryView *view = (MenuEntryView *)current;
        u32 effect;
        u32 sound;
        s32 unitKind = FUN_0019acdc(view->unit->unitId, 1);
        FUN_003f1b3c(owner->state, unitKind, 0xb, &effect, &sound);
        FUN_0047f7ac(0, sound);
        btlReflectCreateKind44(row + 15, menu, view->unit->unitId, effect);
    }
    g_btlAction.scriptUnit[owner->state->unitRecord.currentSlot].command = 0x20;
    return 1;
}
}
