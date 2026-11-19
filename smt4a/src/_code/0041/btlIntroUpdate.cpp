#include "battle/BtlMainAccess.h"
#include "battle/btlCamera.h"
#include "gamedata/DataTable.h"
#include "gamedata/DataTableAccess_VariantA.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUiGlobal.h"
#include "battle/BtlUiObjCQuery.h"
#include "code/Code003e.h"

extern "C" {

/* Battle intro state task; `state` selects the handler, `step` is its sub-step. */
typedef struct BtlIntroTask {
    /* 0x00 */ u32 state;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 nextState;
    /* 0x0C */ u32 timer;
    /* 0x10 */ u32 step;
    /* 0x14 */ u8 unk14[0x170];
    /* 0x184 */ void *dataFile;
    /* 0x188 */ void *dataEntries;
} BtlIntroTask;

extern u32 g_btlAux; /* 0x573808 */
extern u32 g_btlActionReflect; /* 0x5712f0 */

extern int dialogIsActive(void);
extern void dialogClose(int);
extern int chainCountIdUnflagged(u32, int);
extern void FUN_00410628(BtlIntroTask *);
extern void battleAdvanceEntryStartup(BtlIntroTask *);
extern void btlPartnerUpdateScript(BtlIntroTask *);
extern void FUN_00410d44(BtlIntroTask *);
extern int btlUiIsIdleB(BtlUiA *ui);
extern int FUN_004ab784(BtlUiA *ui);
extern int FUN_004abb08(BtlUiA *ui);
extern void btlStageResetAndClearCameraFlag(u32);
extern void FUN_004f950c(u32, int);
extern int resourceTestPendingRecordsReady(u32, int);
extern int FUN_004fa0d8(u32);

static void btlIntroSetNextState(BtlIntroTask *task, u32 state)
{
    task->nextState = state;
}

/* Per-frame handler for the battle intro state machine. */
void btlIntroUpdate(BtlIntroTask *task)
{
    int i;

    switch (task->state) {
    case 1:
        switch (task->step) {
        case 0:
            if (resourceTestPendingRecordsReady(g_btlAux, 1) == 0) {
                break;
            }
            FUN_004f950c(g_btlAux, 1);
            task->step = task->step + 1;
            break;
        case 1:
            if (FUN_004fa0d8(g_btlAux) == 0) {
                break;
            }
            task->step = task->step + 1;
            break;
        case 2:
            if (FUN_004abb08(g_btlUiBlock) == 0) {
                break;
            }
            btlIntroSetNextState(task, 2);
            break;
        }
        break;
    case 2:
        battleAdvanceEntryStartup(task);
        break;
    case 3: {
        if (task->step != 0 || task->dataFile == 0) {
            break;
        }
        void *section = dataTableFileGetTable(reinterpret_cast<u32>(task->dataFile), 0);
        task->dataEntries = dataTableGetEntries(section);
        btlIntroSetNextState(task, 4);
        break;
    }
    case 4:
        btlPartnerUpdateScript(task);
        break;
    case 5:
        FUN_00410d44(task);
        break;
    case 6:
        FUN_00410628(task);
        break;
    case 7:
        g_btlCamera->flags &= ~0x4000;
        btlStageResetAndClearCameraFlag(g_btlAux);
        btlIntroSetNextState(task, 0);
        break;
    case 8:
        if (btlUiIsIdleB(g_btlUiBlock) != 0 && (dialogIsActive() == 0 || task->timer >= 55)) {
            dialogClose(1);
            btlIntroSetNextState(task, 9);
        }
        break;
    case 9:
        if (chainCountIdUnflagged(g_btlActionReflect, 0) > 0) {
            break;
        }
        if (FUN_003ecd94(reinterpret_cast<u8 *>(btlGetMainState())) != 0) {
            for (i = 0; i < 4; i++) {
                if (FUN_004aa768(g_btlUiBlock, i) == 0) {
                    return;
                }
            }
            if (FUN_004ab784(g_btlUiBlock) == 0) {
                return;
            }
        }
        btlIntroSetNextState(task, 0);
        return;
    }
}

} /* extern "C" */
