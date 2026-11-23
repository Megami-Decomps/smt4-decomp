#include "shard/Shard0032.h"
#include "camp/CampCec/CecRecord.h"
#include "event/2dEvent/EventEffect.h"
#include "cec/CecProcessGlobal.h"
#include "shard/W6_W6Match3_FormatBuffer.h"
#include "shard/W6_W6Match3_ForwardEffect.h"

extern "C" {
void playerSummaryFill(PlayerSummary *summary);
void slotNameDisplaySetEntry(PlayerSummary *summary, u32 argument);
s32 gameDataTestFlags(u32 flags);
void cecProcessCall2(void);
void rt_aeabi_memclr(void *memory, u32 size);
void characterInfoPanelPopulate(u32 panel, PlayerSummary *summary, u32 parameter);
void FUN_002f4014(PlayerSummary *summary);
void linkHolderApplyFlag(void *link, s32 enabled);
void partyPanelRefreshFromSlotTable(void);
s32 partyPanelExists(void);

/* Waits for a refresh command, then repopulates the character panel and StreetPass summary. */
s32 campCecEditRefreshState(StateAtF4 *edit)
{
    s32 result = 0;
    if (edit->refreshPending != 0) {
        edit->refreshPending = 0;
        playerSummaryFill(edit->record);
        if (edit->unk108 == 0) {
            slotNameDisplaySetEntry(edit->record, 0);
        }
        if (cecQueryOptionalProcess() && gameDataTestFlags(0x20)) {
            cecProcessCall2();
            cecProcessForward(edit->record);
        }
        if (edit->unk108 == 0) {
            rt_aeabi_memclr(&edit->streetPassRecord->demon, sizeof(CecReceivedDemon));
        }
        characterInfoPanelPopulate((u32)edit->infoPanel, edit->record, (u32)edit->messages);
        campCecDispatchMode((u32)edit->record);
        FUN_002f4014(edit->record);
        linkHolderApplyFlag((void *)edit->unk04, 1);
        edit->table.state = -1;
        edit->phase = 1;
        edit->table.nextState = -1;
        edit->editItem = 0;
        edit->panelReady = 1;
        campCecSetObjectValue(0);
        partyPanelRefreshFromSlotTable();
        result = 3;
    } else {
        switch (edit->editItem) {
        case CEC_EDIT_ITEM_PORTRAIT:
            edit->refreshPending = 1;
            break;
        case 6:
            if (edit->unk108 != 0) {
                if (partyPanelExists()) {
                    if (FUN_00284e94()) {
                        edit->refreshPending = 1;
                    } else {
                        return 0;
                    }
                }
            } else {
                edit->refreshPending = 1;
            }
            break;
        case CEC_EDIT_ITEM_TITLE:
        case 3:
        case 4:
        case CEC_EDIT_ITEM_POSE:
        case CEC_EDIT_ITEM_MESSAGE:
            if (edit->frameCounter > 0) {
                edit->refreshPending = 1;
            }
            break;
        default:
            return result;
        }
    }
    return result;
}
} /* extern "C" */
