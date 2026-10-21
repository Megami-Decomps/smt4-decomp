/* NON_MATCHING: marker-mask loads use separate LDRs instead of LDM, and activation-mask address/register allocation differs; candidate -O2. */
#include "battle/btlMain.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

struct PartyAssistSlotMap {
    u8 unk0000[0x1c88];
    s8 slots[27];
    u8 count;
};
struct PartyAssistStreakView {
    u8 unk000[0x12a];
    u8 streak;
};
struct BattleAssistView {
    u8 unk000[0xf0];
    s32 state;
    u8 unk0f4[0xa0];
    u32 participants[1];
};
struct BattleAssistMasks {
    u8 unk00[0xa0];
    u64 activate;
    u8 unka8[0x28];
    u64 guarantee;
};
extern "C" {
BtlMainStateA *btlGetMainState();
GameSlotTable *gameGetSlotTable();
s32 bitsAt60Test(SlotRecord *record, u32 bit);
s32 lcgRandomRange(u32 maximum);
void gameFlagSetValue(u32 flag, u32 value, u32 width);
extern BattleAssistMasks DAT_005713f0;

u32 btlSelectFirstPartyAssistParticipant()
{
    if (((const BattleAssistView *)btlGetMainState())->state >= 0) {
        return 0;
    }
    s32 selected = 0;
    const PartyAssistSlotMap *party = (const PartyAssistSlotMap *)gameGetSlotTable();
    for (s32 index = 0; index < party->count; ++index) {
        s32 slot = party->slots[index];
        if (slot < 0) {
            continue;
        }
        SlotRecord *record = gameGetSlotRecord(slot);
        if (!bitsAt60Test(record, 10)) {
            continue;
        }
        s32 chance;
        switch (((const PartyAssistStreakView *)record)->streak) {
        case 0:
        case 1:
            chance = 25;
            break;
        case 2:
            chance = 75;
            break;
        case 3:
            chance = 90;
            break;
        default:
            chance = 99;
            break;
        }
        const BtlMainStateA *state = btlGetMainState();
        if (*reinterpret_cast<const u64 *>(state->markerMasks.words) & DAT_005713f0.guarantee) {
            chance = 100;
        }
        if (lcgRandomRange(99) < chance && selected < 1) {
            BattleAssistView *assist = (BattleAssistView *)btlGetMainState();
            assist->participants[selected++] = record->entryId;
        }
    }
    if (selected > 0) {
        gameFlagSetValue(0x11d6, 1, 1);
        BtlMainStateA *state = btlGetMainState();
        *reinterpret_cast<u64 *>(state->stateFlags.words) |= DAT_005713f0.activate;
        return 1;
    }
    return 0;
}
}
