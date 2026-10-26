/* NON_MATCHING: structure, jump table and callees match; only the 64-bit flag-mask tests/updates differ in register choice and pair-load form (ldm/ldrd/ldr vs retail), and the case 10/11 toggles store the flag words in a different order. */
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "gamedata/BattleUnitSkills.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/X14_BtlUiClose.h"
#include "battle/btlDebug.h"

namespace {
// The battle debug editor's work area.
struct CombatantEditor {
    u8 unk00[0x10];
    u32 listBox;       // 0x10
    u8 unk14[8];
    u32 entryIndex;    // 0x1c
};
// The combatant's vitals and parameters, which start at its hp.
struct CombatantVitals {
    s32 hp;
    s32 maxHp;
    s32 mp;
    s32 maxMp;
    s16 parameter[5];
};
// The vitals the unit records mirror.
struct UnitRecordVitals {
    u8 unk00[0x2a];
    s16 hp;
    s16 mp;
};
// A word of the combatant's block that the editor sets directly.
struct CombatantEditableWord {
    u8 unk00[0x15c];
    s32 value;
};
}

extern "C" {
extern BtlUiCloseState DAT_005715f8;
u32 asdListBoxGetSelectedItemId(u32 listBox);
s32 *asdListBoxGetIntValuePtr(u32 listBox, u32 id);
f32 *asdListBoxGetFloatValuePtr(u32 listBox, u32 id);
s32 listBoxItemHasOwner(u32 listBox, u32 id);
void asdListBoxSetToggleItem(u32 listBox, s32 id, s32 value);
void asdListBoxSetFloatItem(u32 listBox, u32 id, s32 minimum, s32 maximum, f32 value);
BtlCombatantEntryA *FUN_003e83b4(BtlMainStateA *state, s32 index, s32 matches);
u16 FUN_0031cfd0(u32 index);
s32 FUN_0031f0f4(u32 index, s32 value);
s32 btlFindEntryValue(s32 id, u32 index);
void btlSlotSetStoreValue(u32 key, s32 index, u32 value);

// Apply the edited item of the combatant editor to the selected combatant, or refill the list when the selection changes.
void FUN_004d3df0(CombatantEditor *editor, BtlMainStateA *battle)
{
    u32 selected = asdListBoxGetSelectedItemId(editor->listBox);
    BtlCombatantEntryA *entry = FUN_003e83b4(battle, editor->entryIndex, 1);
    CombatantVitals *vitals = NULL;
    if (entry != NULL)
        vitals = reinterpret_cast<CombatantVitals *>(&entry->hp);
    switch (selected) {
    case 0:
        editor->entryIndex = *asdListBoxGetIntValuePtr(editor->listBox, selected);
        entry = FUN_003e83b4(btlGetMainState(), editor->entryIndex, 1);
        if (entry != NULL) {
            vitals = reinterpret_cast<CombatantVitals *>(&entry->hp);
            asdListBoxSetIntItem(editor->listBox, 1, vitals->hp, 1, 9999, 0);
            asdListBoxSetIntItem(editor->listBox, 2, vitals->maxHp, 1, 9999, 0);
            asdListBoxSetIntItem(editor->listBox, 3, vitals->mp, 0, 9999, 0);
            asdListBoxSetIntItem(editor->listBox, 4, vitals->maxMp, 1, 9999, 0);
            asdListBoxSetIntItem(editor->listBox, 5, vitals->parameter[0], 1, 999, 0);
            asdListBoxSetIntItem(editor->listBox, 6, vitals->parameter[1], 1, 999, 0);
            asdListBoxSetIntItem(editor->listBox, 7, vitals->parameter[2], 1, 999, 0);
            asdListBoxSetIntItem(editor->listBox, 8, vitals->parameter[3], 1, 999, 0);
            asdListBoxSetIntItem(editor->listBox, 9, vitals->parameter[4], 1, 999, 0);
            asdListBoxSetToggleItem(editor->listBox, 10, (entry->flags & DAT_005715f8.toggleMaskA) != 0);
            asdListBoxSetToggleItem(editor->listBox, 11, (entry->flags & DAT_005715f8.toggleMaskB) != 0);
            if ((entry->flags & DAT_005715f8.editableMask) != 0)
                asdListBoxSetIntItem(editor->listBox, 12, FUN_0031cfd0(entry->id), 0, 100, 0);
            else
                asdListBoxSetIntItem(editor->listBox, 12, 0, 0, 100, 0);
            if (entry->unitIndex >= 0 && (DAT_005715f8.editableMask & entry->flags) != 0) {
                BattleRosterRecordA *record = &btlGetMainState()->roster[entry->unitIndex];
                asdListBoxSetFloatItem(editor->listBox, 13, -50, 50, record->spriteOffset.x);
                asdListBoxSetFloatItem(editor->listBox, 14, -50, 50, record->spriteOffset.y);
            }
            asdListBoxSetIntItem(editor->listBox, 16, btlFindEntryValue(entry->unitIndex, 7), -3, 3, 0);
            asdListBoxSetIntItem(editor->listBox, 17, btlFindEntryValue(entry->unitIndex, 8), -3, 3, 0);
            asdListBoxSetIntItem(editor->listBox, 18, btlFindEntryValue(entry->unitIndex, 10), -3, 3, 0);
            asdListBoxSetIntItem(editor->listBox, 19, btlFindEntryValue(entry->unitIndex, 9), -3, 3, 0);
        }
        break;
    case 1:
        if (vitals != NULL) {
            vitals->hp = *asdListBoxGetIntValuePtr(editor->listBox, selected);
            if (entry->record != NULL)
                reinterpret_cast<UnitRecordVitals *>(entry->record)->hp = vitals->hp;
            if (entry->secondaryRecord != NULL)
                reinterpret_cast<UnitRecordVitals *>(entry->secondaryRecord)->hp = vitals->hp;
            if (entry->specialMaximum.record != NULL)
                reinterpret_cast<UnitRecordVitals *>(entry->specialMaximum.record)->hp = vitals->hp;
            return;
        }
        break;
    case 2:
        if (vitals != NULL) {
            vitals->maxHp = *asdListBoxGetIntValuePtr(editor->listBox, selected);
            return;
        }
        break;
    case 3:
        if (vitals != NULL) {
            vitals->mp = *asdListBoxGetIntValuePtr(editor->listBox, selected);
            if (entry->record != NULL)
                reinterpret_cast<UnitRecordVitals *>(entry->record)->mp = vitals->mp;
            if (entry->secondaryRecord != NULL)
                reinterpret_cast<UnitRecordVitals *>(entry->secondaryRecord)->mp = vitals->mp;
            if (entry->specialMaximum.record != NULL)
                reinterpret_cast<UnitRecordVitals *>(entry->specialMaximum.record)->mp = vitals->mp;
            return;
        }
        break;
    case 4:
        if (vitals != NULL) {
            vitals->maxMp = *asdListBoxGetIntValuePtr(editor->listBox, selected);
            return;
        }
        break;
    case 5:
        if (vitals != NULL) {
            vitals->parameter[0] = *asdListBoxGetIntValuePtr(editor->listBox, selected);
            return;
        }
        break;
    case 6:
        if (vitals != NULL) {
            vitals->parameter[1] = *asdListBoxGetIntValuePtr(editor->listBox, selected);
            return;
        }
        break;
    case 7:
        if (vitals != NULL) {
            vitals->parameter[2] = *asdListBoxGetIntValuePtr(editor->listBox, selected);
            return;
        }
        break;
    case 8:
        if (vitals != NULL) {
            vitals->parameter[3] = *asdListBoxGetIntValuePtr(editor->listBox, selected);
            return;
        }
        break;
    case 9:
        if (NULL != vitals) {
            vitals->parameter[4] = *asdListBoxGetIntValuePtr(editor->listBox, selected);
            return;
        }
        break;
    case 10:
        if (entry != NULL) {
            if (listBoxItemHasOwner(editor->listBox, selected))
                entry->flags |= DAT_005715f8.toggleMaskA;
            else
                entry->flags = ~DAT_005715f8.toggleMaskA & entry->flags;
            return;
        }
        break;
    case 11:
        if (entry != NULL) {
            if (listBoxItemHasOwner(editor->listBox, selected))
                entry->flags |= DAT_005715f8.toggleMaskB;
            else
                entry->flags = ~DAT_005715f8.toggleMaskB & entry->flags;
            return;
        }
        break;
    case 12:
        if (entry != NULL && (entry->flags & DAT_005715f8.editableMask) != 0) {
            FUN_0031f0f4(entry->id, *asdListBoxGetIntValuePtr(editor->listBox, selected));
            return;
        }
        break;
    case 13:
        if (entry != NULL && entry->unitIndex >= 0 && (entry->flags & DAT_005715f8.editableMask) != 0) {
            BattleRosterRecordA *record = &btlGetMainState()->roster[entry->unitIndex];
            record->spriteOffset.x = *asdListBoxGetFloatValuePtr(editor->listBox, selected);
            return;
        }
        break;
    case 14:
        if (entry != NULL && entry->unitIndex >= 0 && (entry->flags & DAT_005715f8.editableMask) != 0) {
            BattleRosterRecordA *record = &btlGetMainState()->roster[entry->unitIndex];
            record->spriteOffset.y = *asdListBoxGetFloatValuePtr(editor->listBox, selected);
            return;
        }
        break;
    case 15:
        if (entry != NULL) {
            reinterpret_cast<CombatantEditableWord *>(entry)->value = *asdListBoxGetIntValuePtr(editor->listBox, selected);
            return;
        }
        break;
    case 16:
        if (entry != NULL) {
            btlSlotSetStoreValue(entry->indexView.selectionIndex, 7, *asdListBoxGetIntValuePtr(editor->listBox, selected));
            return;
        }
        break;
    case 17:
        if (entry != NULL) {
            btlSlotSetStoreValue(entry->indexView.selectionIndex, 8, *asdListBoxGetIntValuePtr(editor->listBox, selected));
            return;
        }
        break;
    case 18:
        if (entry != NULL) {
            btlSlotSetStoreValue(entry->indexView.selectionIndex, 10, *asdListBoxGetIntValuePtr(editor->listBox, selected));
            return;
        }
        break;
    case 19:
        if (entry != NULL) {
            u32 value = *asdListBoxGetIntValuePtr(editor->listBox, selected);
            btlSlotSetStoreValue(entry->indexView.selectionIndex, 9, value);
            btlSlotSetStoreValue(entry->indexView.selectionIndex, 11, value);
            return;
        }
        break;
    }
}
}
