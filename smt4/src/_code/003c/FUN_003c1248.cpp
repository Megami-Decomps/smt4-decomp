/* NON_MATCHING: retail wraps the summary in a larger stack object; payload addressing and unit getter code differ. */
#include "battle/btlUnit.h"
#include "battle/btlAction.h"
#include "shard/W7_W7Match2_PartyDamage.h"
#include "gamedata/DevilRecord.h"
struct BtlUi;
struct BtlEntry;
/* Queued IDs and entry slots are outside the short shared prefixes. */
struct QueuedBattleUnitsView { u8 unk0000[0x1FD0]; u64 entries[1]; };
struct BattleEntrySlotView { u8 unk00[0x6E]; s16 slot; };
union BattleSummaryBuffer {
    BtlUnitData data;
    u8 storage[0x1C0];
};
extern "C" {
extern BtlUi *g_btlUiBlock;
BtlMainState *btlGetMainState(void);
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
    if (kind) {
        const QueuedBattleUnitsView *queue = reinterpret_cast<const QueuedBattleUnitsView *>(battle);
        const DevilRecord *definition = dataTable00FindById(static_cast<u16>(queue->entries[source]));
        if (!definition)
            return;
        FUN_0023ebc8(battle, &summary.data, definition);
    } else {
        PartyDamageSlotsIV *party = gameGetSlotTable();
        PartyDamageUnitIV *unit = gameGetUnitRecord(party->stock[source]);
        if (flagWordTestBit(unit, 1)) {
            unit->currentHp = unit->maximumHp;
            objectFlagsClear(unit, 2);
        }
        btlSummaryInitializeSavedDemon(battle, &summary.data, unit, static_cast<s16>(source));
        if (party->stock[source] >= 0) {
            const BattleEntrySlotView *entry = reinterpret_cast<const BattleEntrySlotView *>(FUN_002561d8(battle, target, 0));
            party->active[entry->slot - 1] = party->stock[source];
            bool immediate = animate < 1;
            if (!immediate)
                FUN_002505c0(0, 0, 0x10001CF, 0, 0, 0, 0);
            FUN_003ae2d0(g_btlUiBlock, entry->slot, party->stock[source], immediate);
        }
    }
    FUN_00255e38(battle, &summary.data, kind, target, 1);
    if (kind == 1) {
        BtlActionRecord *action = &battle->actions[target];
        if ((action->status & 1) && (action->status & 0x80) && !(action->status & 2)) {
            action->flags = (action->flags & ~6) | 1;
            action->task = 4;
            action->unk4c = 0;
        }
    }
}
}
