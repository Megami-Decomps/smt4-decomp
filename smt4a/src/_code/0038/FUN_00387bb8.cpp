/* NON_MATCHING: common refresh-byte store is placed after case 6 rather than at case 1; initial scheduling differs. */
#include "camp/CampCec/CharacterRefreshWork.h"

extern "C" {
void playerSummaryFill(PlayerSummary *summary);
void FUN_0032e25c(PlayerSummary *summary, u32 argument);
s32 cecQueryOptionalProcess(void);
s32 gameDataTestFlags(u32 flags);
void cecProcessCall2(void);
void cecProcessForward(PlayerSummary *summary);
void rt_aeabi_memclr(void *memory, u32 size);
void characterInfoPanelPopulate(u32 panel, PlayerSummary *summary, u32 parameter);
void campCecDispatchMode(PlayerSummary *summary);
void FUN_002f4014(PlayerSummary *summary);
void linkHolderApplyFlag(void *link, s32 enabled);
void campCecSetObjectValue(u32 value);
void FUN_0031d890(void);
s32 partyPanelExists(void);
s32 FUN_00284e94(void);

// Wait for a refresh command, then repopulate the character panel and StreetPass summary.
u32 FUN_00387bb8(CharacterRefreshWork *work)
{
    u32 result = 0;
    if (work->refresh != 0) {
        work->refresh = 0;
        playerSummaryFill(work->summary);
        if (work->mode == 0) {
            FUN_0032e25c(work->summary, 0);
        }
        if (cecQueryOptionalProcess() && gameDataTestFlags(0x20)) {
            cecProcessCall2();
            cecProcessForward(work->summary);
        }
        if (work->mode == 0) {
            // The transfer fields follow the published PlayerSummary prefix; do not grow that shared record.
            struct SummaryTransferView { u8 unk00[0x50]; u8 transfer[0x14]; };
            typedef char TransferOffsetCheck[offsetof(SummaryTransferView, transfer) == 0x50 ? 1 : -1];
            rt_aeabi_memclr(((SummaryTransferView *)work->summary)->transfer, 0x14);
        }
        characterInfoPanelPopulate(work->panel, work->summary, work->parameter);
        campCecDispatchMode(work->summary);
        FUN_002f4014(work->summary);
        linkHolderApplyFlag(work->link, 1);
        work->unk0E8 = -1;
        work->phase = 1;
        work->unk0EC = -1;
        work->command = 0;
        work->ready = 1;
        campCecSetObjectValue(0);
        FUN_0031d890();
        result = 3;
    } else {
        switch (work->command) {
        case 1:
            work->refresh = 1;
            break;
        case 6:
            if (work->mode != 0) {
                if (!partyPanelExists()) {
                    return 0;
                }
                if (!FUN_00284e94()) {
                    return 0;
                }
            }
            work->refresh = 1;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
            if (work->remaining > 0) {
                work->refresh = 1;
            }
            break;
        default:
            return result;
        }
    }
    return result;
}
}
