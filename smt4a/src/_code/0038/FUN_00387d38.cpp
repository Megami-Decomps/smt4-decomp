/* NON_MATCHING: shared success-block placement, saved registers and final return epilogues differ. */
#include "camp/CampCec/CharacterRefreshWork.h"
#include "shard/Shard0031.h"
#include "shard/W6_W6Match1_PartySlot.h"

extern "C" {
u16 FUN_003b6fc4();
PartyStatusSlots *gameGetSlotTable();
PartySlotA *gameGetSlotRecord(s32 index);
void FUN_003c1060();
void FUN_00331380(s32 value);
void sysPlaySe(s32 sound);
s32 partyPanelExists();
s32 FUN_00284e94();
void campCecSetObjectValue(s32 value);
void linkHolderApplyFlag(u32 handle, s32 enabled);

u32 FUN_00387d38(CharacterRefreshWork *work)
{
    // This return-state subtype extends past the shared refresh work prefix.
    struct ReturnState {
        u32 reserved;
        u32 link;
        PartySlotA *source;
        u8 padding0C[0xDC];
        s32 previousChoice;
        s32 destination;
        u8 paddingF0[8];
        s32 phase;
        s32 returnMode;
        u8 padding100[8];
        s16 selectedId;
        u16 previousId;
        u8 padding10C[0x40];
        u32 command;
        u8 padding150[4];
        u8 cancelled;
    };
    ReturnState *state = reinterpret_cast<ReturnState *>(work);
    if (FUN_003b6fc4() != 0) {
        state->previousId = state->selectedId;
        state->selectedId = FUN_003b6fc4();
        state->destination = -1;
        PartyStatusSlots *party = gameGetSlotTable();
        for (s32 index = 0; index < 3; ++index) {
            if (party->reserve[index] >= 0 &&
                gameGetSlotRecord(party->reserve[index])->unk62 == state->selectedId &&
                gameGetSlotRecord(party->reserve[index])->unk62 == state->source->unk60) {
                FUN_003c1060();
                state->destination = 5;
                break;
            }
        }
        if (state->destination == -1) {
            for (s32 index = 0; index < 24; ++index) {
                if (party->active.slots[index] >= 0 &&
                    gameGetSlotRecord(party->active.slots[index])->unk62 == state->selectedId &&
                    gameGetSlotRecord(party->active.slots[index])->unk62 == state->source->unk60) {
                    FUN_003c1060();
                    state->destination = 5;
                    break;
                }
            }
            if (state->destination == -1) {
                FUN_00331380(0);
                state->destination = 4;
            }
        }
        sysPlaySe(0xE4);
        state->phase = 2;
        return 3;
    }
    if (!partyPanelExists() || !FUN_00284e94())
        return 0;
    campCecSetObjectValue(0);
    state->cancelled = 1;
    FUN_00331380(0);
    linkHolderApplyFlag(state->link, 1);
    state->returnMode = 1;
    state->previousChoice = -1;
    state->phase = 5;
    state->destination = -1;
    state->command = 0;
    return 3;
}
}
