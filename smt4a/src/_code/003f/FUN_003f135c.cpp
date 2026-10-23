/* NON_MATCHING: mask operand registers differ and the shared HP-zero store is folded into the opposite branch. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

/* Action flags extend beyond the shared BtlUnitRecordA prefix. */
struct BattleActionFlagRecordView {
    u8 unk00[0x2a];
    u16 hp;
    u8 unk2C[0x32];
    u16 playerFlags; /* 0x5e */
    u16 slotFlags;   /* 0x60 */
};

extern "C" {
extern BtlMainGlobalsA g_btlMain;
void flagsClearActionBits(u16 *flags);
BattleActionFlagRecordView *gameGetPlayerData(void);
BattleActionFlagRecordView *gameGetSlotRecord(s32 index);
BtlPartyBlockA *gameGetSlotTable(void);

void FUN_003f135c(BtlMainStateA *battle)
{
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &battle->entries[i];
        if (entry && (g_btlMain.combatantMasks.required & entry->flags) &&
            !(g_btlMain.exclusionMask & entry->flags) &&
            !(g_btlMain.actorCategories[2] & entry->flags)) {
            if (entry->record) {
                flagsClearActionBits(&((BattleActionFlagRecordView *)entry->record)->playerFlags);
                BattleActionFlagRecordView *record = (BattleActionFlagRecordView *)entry->record;
                if (record->playerFlags & 2)
                    record->hp = 0;
            } else if (entry->secondaryRecord) {
                flagsClearActionBits(&((BattleActionFlagRecordView *)entry->secondaryRecord)->slotFlags);
                BattleActionFlagRecordView *record = (BattleActionFlagRecordView *)entry->secondaryRecord;
                if (record->slotFlags & 2)
                    record->hp = 0;
            } else if (entry->specialMaximum.record) {
                flagsClearActionBits(&((BattleActionFlagRecordView *)entry->specialMaximum.record)->slotFlags);
            }
        }
    }
    BtlPartyBlockA *party = gameGetSlotTable();
    for (s32 i = -1; i < party->count; ++i) {
        if (i < 0) {
            flagsClearActionBits(&gameGetPlayerData()->playerFlags);
        } else {
            BattleActionFlagRecordView *record = gameGetSlotRecord(i);
            if (record)
                flagsClearActionBits(&record->slotFlags);
        }
    }
}
}
