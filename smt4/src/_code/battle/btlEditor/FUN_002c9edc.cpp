/* NON_MATCHING: explicit job forwarding and independent restore guards recovered; null-branch folding and editor flag registers differ. */
#include "battle/btlAction.h"
#include "shard/W4_Match6_BtlEntry.h"

struct BtlUi;
extern "C" {
extern void* DAT_00435ce8;
extern BtlUi* g_btlUiBlock;
BtlMainState* jobGetWork(u32 job);
void FUN_0025c2d0(BtlUi* ui, u32 enabled);
void asdMemFree(void* memory);
void jobStop(u32 job, u32 flags);

// Restore action state after closing the battle editor and stop its job.
void FUN_002c9edc(u32 job)
{
    BtlMainState* battle = jobGetWork(job);
    if (g_btlUiBlock != NULL) {
        FUN_0025c2d0(g_btlUiBlock, 0);
    }
    if (DAT_00435ce8 != NULL) {
        if (battle != NULL && battle->actions.records != NULL) {
            for (s32 i = 4; i < 54; ++i) {
                BtlActionRecord* action = &battle->actions.records[i];
                if ((action->status & 1) != 0 && (action->status & 0x80) != 0) {
                    action->status &= ~8;
                }
            }
        }
        if (battle != NULL && battle->actions.records != NULL) {
            for (s32 i = 0; i < BTL_ENTRY_COUNT; ++i) {
                BtlActionRecord* action = &battle->actions.records[i];
                action->editorRestore.current = action->editorRestore.saved;
            }
        }
        battle->editorControl.flags &= ~0x80000;
        asdMemFree(DAT_00435ce8);
        DAT_00435ce8 = NULL;
    }
    jobStop(battle->editor.job, 0);
}
}
