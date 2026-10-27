/* NON_MATCHING: retail keeps the battle pointer in r8 and the saved unit/immediate flag in r7 (swapped here) and places the 652-byte stack summary at sp+16 instead of sp+12; all other instructions agree. */
#include "battle/BtlMainAccess.h"
#include "battle/btlUnit.h"
#include "battle/btlAction.h"
#include "shard/W7_W7Match2_PartyDamage.h"
#include "gamedata/DevilRecord.h"
struct BtlUi;
struct BtlEntry;
/* Queued IDs and entry slots are outside the short shared prefixes. */
struct QueuedBattleUnitsView { u8 unk0000[0x1FD0]; u64 entries[1]; };
struct BattleEntrySlotView { u8 unk00[0x6E]; s16 slot; };
union BattleSummaryData {
    BtlUnitData data;
    u8 storage[0x1C0];
};
struct BattleSummaryBuffer {
    u8 header[0xCC];
    BattleSummaryData view;
};
extern "C" {
extern BtlUi *g_btlUiBlock;
DevilRecord *dataTable00FindById(u16 id);
void FUN_0023ebc8(BtlMainState *battle, BtlUnitData *data, const DevilRecord *definition);
PartyDamageSlotsIV *gameGetSlotTable(void);
PartyDamageUnitIV *gameGetUnitRecord(s32 slot);
s32 flagWordTestBit(const void *owner, u32 bit);
void objectFlagsClear(void *owner, u32 flags);
void btlSummaryInitializeSavedDemon(BtlMainState *battle, BtlUnitData *data, PartyDamageUnitIV *unit, s32 slot);
BtlEntry *FUN_002561d8(BtlMainState *battle, s32 index, u32 mode);
void FUN_002505c0(s32 first, s32 second, u32 event, s32 fourth, s32 fifth, s32 sixth, s32 seventh);
void FUN_003ae2d0(BtlUi *ui, s32 slot, s32 partySlot, s32 immediate);
void FUN_00255e38(BtlMainState *battle, BtlUnitData *data, s32 kind, s32 target, s32 enabled);

void FUN_003c1248(s32 kind, s32 source, s32 target, s32 animate)
{
    BtlMainState *battle = btlGetMainState();
    BattleSummaryBuffer summary;
    if (!kind) {
        PartyDamageSlotsIV *party = gameGetSlotTable();
        PartyDamageUnitIV *unit = gameGetUnitRecord(party->stock[source]);
        if (flagWordTestBit(unit, 1)) {
            unit->currentHp = unit->maximumHp;
            objectFlagsClear(unit, 2);
        }
        btlSummaryInitializeSavedDemon(battle, &summary.view.data, unit, static_cast<s16>(source));
        if (party->stock[source] >= 0) {
            const BattleEntrySlotView *entry = reinterpret_cast<const BattleEntrySlotView *>(FUN_002561d8(battle, target, 0));
            s32 activeIndex = entry->slot - 1;
            party->active[activeIndex] = party->stock[source];
            s32 immediate = 1;
            if (animate > 0) {
                immediate = 0;
                FUN_002505c0(0, 0, 0x10001CF, 0, 0, 0, 0);
            }
            FUN_003ae2d0(g_btlUiBlock, entry->slot, party->stock[source], immediate);
        }
    } else {
        const QueuedBattleUnitsView *queue = reinterpret_cast<const QueuedBattleUnitsView *>(battle);
        const DevilRecord *definition = dataTable00FindById(static_cast<u16>(queue->entries[source]));
        if (!definition)
            return;
        FUN_0023ebc8(battle, &summary.view.data, definition);
    }
    FUN_00255e38(battle, &summary.view.data, kind, target, 1);
    if (kind == 1) {
        BtlActionRecord *action = &battle->actions[target];
        if ((action->status & 1) && (action->status & 0x80) && !(action->status & 2)) {
            action->flags &= ~6;
            action->flags |= 1;
            action->task = 4;
            action->unk4c = 0;
        }
    }
}
}
