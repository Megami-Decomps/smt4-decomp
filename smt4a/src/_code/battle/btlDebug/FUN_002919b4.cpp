/* NON_MATCHING: wide-mask load grouping, callback stack stores and the alternate-menu cold branch placement differ. */
#include "battle/btlMain.h"
#include "battle/btlUI.h"
#include "shard/W6_W6Match8_BattleDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/AsdDebug.h"
#include "util/CalleeContracts.h"
#include "shard/jobSetText.h"
#include "AsdSDK/AsdMemAlloc.h"

/* The debug mask lies beyond the shared three-word global prefix. */
struct BattleDebugInitializationGlobalsView {
    BattleDebugGlobals prefix;
    u8 unk0C[0x34];
    u64 mask;
};

extern "C" {
extern BattleDebugInitializationGlobalsView DAT_005715f8;
extern const AsdListBoxEntry DAT_00571980[];
extern const char DAT_00528078[];
extern BtlUiA *g_btlUiBlock;
s32 FUN_002761c8(u32 process);
void FUN_00314ef8(u32 process);
s32 FUN_002ba870(u32 process);
s32 lmapJobQueryZero(u32 process);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc end, u32 work, void *owner);
s32 jobIsValid(u32 job);
void FUN_003592dc(u32 list);
void jobStop(u32 job, s32 delay);
void asdListBoxAddItems(u32 list, const AsdListBoxEntry *items, s32 count);
void asdListBoxSetByteValue(u32 list, u8 value);
void FUN_004d48d0(BattleDebugWork *work, BtlMainStateA *battle);
void FUN_004aa780(BtlUiA *ui, s32 enabled);

void FUN_002919b4(BtlMainStateA *battle, s32 menuMode)
{
    battle->markerMasks.bits |= DAT_005715f8.mask;
    battle->uiJobs.menuJob = taskCreateDraw((const s8 *)"btlDebug Calc", 4, 0, 0,
        FUN_002761c8, FUN_00314ef8, (u32)battle, (void *)battle->job);
    taskCreateDraw((const s8 *)"btlDebug DrawUp", 0x75, 0, 0, FUN_002ba870, 0,
        (u32)battle, (void *)battle->uiJobs.menuJob);
    taskCreateDraw((const s8 *)"btlDebug DrawDown", 0xea, 0, 0, lmapJobQueryZero, 0,
        (u32)battle, (void *)battle->uiJobs.menuJob);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlDebug.cpp", 0x11c4);
    BattleDebugWork *work = (BattleDebugWork *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(BattleDebugWork), 1);
    DAT_005715f8.prefix.work = work;
    work->menuMode = menuMode;
    work->state = 0;
    DAT_005715f8.prefix.selection = 0;
    if (menuMode) {
        if (jobIsValid(work->listBox)) {
            FUN_003592dc(work->listBox);
            jobStop(work->listBox, 0);
        }
        work->listBox = asdListBoxCreateDefaultFlags(battle->uiJobs.menuJob, 0x75, 0, 0);
        asdListBoxAddItems(work->listBox, DAT_00571980, 14);
        asdListBoxSetByteValue(work->listBox, 1);
        jobSetText(work->listBox, DAT_00528078);
    } else {
        FUN_004d48d0(work, battle);
    }
    if (g_btlUiBlock)
        FUN_004aa780(g_btlUiBlock, 1);
}
}
