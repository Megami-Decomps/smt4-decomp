/* NON_MATCHING: branch layout now matches (the default-menu call is the cold path); retail loads the battle's marker mask with ldm and the debug mask as two ldr before the OR, and orders the first taskCreateDraw stack stores differently. */
#include "battle/btlMain.h"
#include "battle/btlUI.h"
#include "shard/W6_W6Match8_BattleDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"
#include "sys/RuntimeObjects.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "battle/BtlUiGlobal.h"

/* The debug mask lies beyond the shared three-word global prefix. */
struct BattleDebugInitializationGlobalsView {
    BattleDebugGlobals prefix;
    u8 unk0C[0x34];
    u64 mask;
};

extern "C" {
extern BattleDebugInitializationGlobalsView g_btlDebugGlobals;
extern const AsdListBoxEntry DAT_00571980[];
extern const char DAT_00528078[];
s32 FUN_002ba870(u32 process);
s32 lmapJobQueryZero(u32 process);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc end, u32 work, void *owner);
void asdListBoxJobReset(u32 list);
void asdListBoxAddItems(u32 list, const AsdListBoxEntry *items, s32 count);
void asdListBoxSetByteValue(u32 list, u8 value);
void FUN_004d48d0(BattleDebugWork *work, BtlMainStateA *battle);
void FUN_004aa780(BtlUiA *ui, s32 enabled);

void FUN_002919b4(BtlMainStateA *battle, s32 menuMode)
{
    battle->markerMasks.bits |= g_btlDebugGlobals.mask;
    battle->uiJobs.menuJob = taskCreateDraw((const s8 *)"btlDebug Calc", 4, 0, 0,
        btlDebugDispatchCurrentJob, btlDebugClose, (u32)battle, (void *)battle->job);
    taskCreateDraw((const s8 *)"btlDebug DrawUp", 0x75, 0, 0, FUN_002ba870, 0,
        (u32)battle, (void *)battle->uiJobs.menuJob);
    taskCreateDraw((const s8 *)"btlDebug DrawDown", 0xea, 0, 0, lmapJobQueryZero, 0,
        (u32)battle, (void *)battle->uiJobs.menuJob);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlDebug.cpp", 0x11c4);
    g_btlDebugGlobals.prefix.work = (BattleDebugWork *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(BattleDebugWork), 1);
    BattleDebugWork *work = g_btlDebugGlobals.prefix.work;
    work->menuMode = menuMode;
    work->state = 0;
    g_btlDebugGlobals.prefix.selection = 0;
    if (menuMode == 0) {
        FUN_004d48d0(work, battle);
    } else {
        if (jobIsValid(work->listBox)) {
            asdListBoxJobReset(work->listBox);
            jobStop(work->listBox, 0);
        }
        work->listBox = asdListBoxCreateDefaultFlags(battle->uiJobs.menuJob, 0x75, 0, 0);
        asdListBoxAddItems(work->listBox, DAT_00571980, 14);
        asdListBoxSetByteValue(work->listBox, 1);
        jobSetText(work->listBox, DAT_00528078);
    }
    if (g_btlUiBlock)
        FUN_004aa780(g_btlUiBlock, 1);
}
}
