#include "shard/Shard0032.h"
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

s32 FUN_00387d38(StateAtF4 *edit)
{
    s32 result = 0;
    if (partyPanelGetRequestedUnitId() != 0) {
        edit->unk10A = edit->unk108;
        edit->unk108 = partyPanelGetRequestedUnitId();
        edit->table.nextState = -1;
        SaveSlotTableA *party = gameGetSlotTable();
        for (s32 index = 0; index < 3; ++index) {
            if (party->reserve[index] >= 0 &&
                gameGetSlotRecord(party->reserve[index])->id == edit->unk108 &&
                gameGetSlotRecord(party->reserve[index])->id == edit->slot->record.ailments) {
                messageMainRequestBanner();
                edit->table.nextState = 5;
                break;
            }
        }
        if (edit->table.nextState == -1) {
            for (s32 index = 0; index < 24; ++index) {
                if (party->party[index] >= 0 &&
                    gameGetSlotRecord(party->party[index])->id == edit->unk108 &&
                    gameGetSlotRecord(party->party[index])->id == edit->slot->record.ailments) {
                    messageMainRequestBanner();
                    edit->table.nextState = 5;
                    break;
                }
            }
        }
        if (edit->table.nextState == -1) {
            FUN_00331380(0);
            edit->table.nextState = 4;
        }
        sysPlaySe(0xE4);
        edit->phase = 2;
        result = 3;
    } else if (partyPanelExists() && FUN_00284e94()) {
        campCecSetObjectValue(0);
        edit->unk154 = 1;
        FUN_00331380(0);
        linkHolderApplyFlag(edit->unk04, 1);
        edit->followingPhase = 1;
        edit->table.state = -1;
        edit->phase = 5;
        edit->table.nextState = -1;
        edit->editItem = 0;
        result = 3;
    }
    return result;
}
}
