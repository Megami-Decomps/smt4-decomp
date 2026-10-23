/* NON_MATCHING: zero is hoisted into a saved register and widget-reset branches merge; retail inline hints differ. */
#include "ui/PartyPanelState.h"
#include "shard/Shard0031.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

/* These fields lie beyond the shared PartyPanelStateA's recovered extent. */
struct PartySelectionRollbackView {
    PartyPanelStateA panel;
    struct { s32 slot; u32 unk04; } candidates[24]; /* 0xa80 */
    u8 unkB40[0x33c];
    u32 ids[2];                                   /* 0xe7c */
    s32 count;                                    /* 0xe84 */
    u8 demon[2];                                  /* 0xe88 */
};

extern "C" {
extern PartySelectionRollbackView *g_partyPanel;
PartyStatusSlots *gameGetSlotTable(void);
BattleSlotSourceRecordA *gameGetSlotRecord(s32 slot);
void FUN_002ade88(void);
void FUN_0020b718(s32 mode, s32 enabled);
void FUN_0020d934(void);
void FUN_0023fc38(void);

/* Remove the last pending party selection and clear its widget transition flag. */
void FUN_003b0558(void)
{
    PartySelectionRollbackView *work = g_partyPanel;
    PartyStatusSlots *party = gameGetSlotTable();
    if (!work)
        return;
    --work->count;
    if (!work->demon[work->count]) {
        for (s32 i = 0; i < 3; ++i) {
            if (party->reserve[i] >= 0 &&
                gameGetSlotRecord(party->reserve[i])->id == work->ids[work->count]) {
                ((PartyPanelWidget *)work->panel.handlesA[i])->transitionPending = 0;
                break;
            }
        }
    } else {
        for (s32 i = 0; i < 24; ++i) {
            if (work->candidates[i].slot >= 0 &&
                gameGetSlotRecord(work->candidates[i].slot)->id == work->ids[work->count]) {
                ((PartyPanelWidget *)work->panel.handlesB[i])->transitionPending = 0;
                break;
            }
        }
    }
    FUN_002ade88();
    work->panel.unk20 = 8;
    FUN_0020b718(0, 1);
    FUN_0020d934();
    FUN_0023fc38();
}
}
