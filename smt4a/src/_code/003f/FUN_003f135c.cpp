/* NON_MATCHING: only registers: the entry address (index product in r0, base in r1; retail swaps them) and the first and last mask ANDs. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/PlayerDataBlock.h"
#include "battle/BtlGlobals.h"

/* Action flags extend beyond the shared BtlUnitRecordA prefix. */
struct BattleActionFlagRecordView {
    u8 unk00[0x2a];
    u16 hp;
    u8 unk2C[0x32];
    u16 playerFlags; /* 0x5e */
    u16 slotFlags;   /* 0x60 */
};

extern "C" {
void flagsClearActionBits(u16 *flags);
BattleActionFlagRecordView *gameGetSlotRecord(s32 index);
BtlPartyBlockA *gameGetSlotTable(void);

void FUN_003f135c(BtlMainStateA *battle)
{
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &battle->entries[i];
        if (entry != NULL && (entry->flags & g_btlMain.combatantMasks.required) &&
            !(entry->flags & g_btlMain.exclusionMask) &&
            !(entry->flags & g_btlMain.actorCategories[2])) {
            if (entry->data.record != NULL) {
                flagsClearActionBits(&((BattleActionFlagRecordView *)entry->data.record)->playerFlags);
                BattleActionFlagRecordView *record = (BattleActionFlagRecordView *)entry->data.record;
                if (!(record->playerFlags & 2))
                    continue;
                record->hp = 0;
            } else if (entry->data.secondaryRecord != NULL) {
                flagsClearActionBits(&((BattleActionFlagRecordView *)entry->data.secondaryRecord)->slotFlags);
                BattleActionFlagRecordView *record = (BattleActionFlagRecordView *)entry->data.secondaryRecord;
                if (!(record->slotFlags & 2))
                    continue;
                record->hp = 0;
            } else if (entry->data.specialRecord) {
                flagsClearActionBits(&((BattleActionFlagRecordView *)entry->data.specialRecord)->slotFlags);
            }
        }
    }
    BtlPartyBlockA *party = gameGetSlotTable();
    for (s32 i = -1; i < party->count; ++i) {
        if (i < 0) {
            flagsClearActionBits(&reinterpret_cast<BattleActionFlagRecordView *>(gameGetPlayerData())->playerFlags);
        } else {
            BattleActionFlagRecordView *record = gameGetSlotRecord(i);
            if (record)
                flagsClearActionBits(&record->slotFlags);
        }
    }
}
}
