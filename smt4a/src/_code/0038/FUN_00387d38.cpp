/* NON_MATCHING: shared success-block placement, saved registers and final return epilogues differ. */
#include "camp/CampCec/CharacterRefreshWork.h"
#include "shard/Shard0031.h"
#include "gamedata/GameSaveDataA.h"
#include "event/2dEvent/EventEffect.h"
#include "shard/W6_W6Match3_FormatBuffer.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/SaveSlotTable.h"
#include "code/Code003c_Smt4a.h"

extern "C" {
void FUN_00331380(s32 value);
void sysPlaySe(s32 sound);
s32 partyPanelExists();
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
    if (partyPanelGetRequestedUnitId() != 0) {
        state->previousId = state->selectedId;
        state->selectedId = partyPanelGetRequestedUnitId();
        state->destination = -1;
        SaveSlotTableA *party = gameGetSlotTable();
        for (s32 index = 0; index < 3; ++index) {
            if (party->reserve[index] >= 0 &&
                gameGetSlotRecord(party->reserve[index])->id == state->selectedId &&
                gameGetSlotRecord(party->reserve[index])->id == state->source->record.ailments) {
                messageMainRequestBanner();
                state->destination = 5;
                break;
            }
        }
        if (state->destination == -1) {
            for (s32 index = 0; index < 24; ++index) {
                if (party->party[index] >= 0 &&
                    gameGetSlotRecord(party->party[index])->id == state->selectedId &&
                    gameGetSlotRecord(party->party[index])->id == state->source->record.ailments) {
                    messageMainRequestBanner();
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
