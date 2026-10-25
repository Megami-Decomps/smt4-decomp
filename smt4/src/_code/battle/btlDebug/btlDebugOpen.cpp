/* NON_MATCHING: callback-stack scheduling, saved-register lifetimes and three unattributed no-menu-path NOPs differ; candidate -O2. */
#include "shard/W6_W6Match8_BattleDebug.h"
#include "battle/btlMain.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "map/mapDepart.h"

extern "C" {
void *asdMemAlloc(u32 heap, u32 alignmentClass, u32 flags, u32 size, s32 kind);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, u32 parent);
s32 FUN_001fc5c0(u32 handle);
s32 lmapJobQueryZero(u32 handle);
u32 asdListBoxCreateDefault(u32 parent, s32 group, u32 first, u32 second);
void asdListBoxAddItems(AsdListBox *list, const AsdListBoxEntry *entries, s32 count);
void asdListBoxSetByteValue(u32 list, s32 enabled);
void jobSetText(u32 job, const char *text);
void FUN_003c5150(BattleDebugWork *work, BtlMainState *state);
extern void *g_btlUiBlock;
extern const AsdListBoxEntry btlDebugMenuEntries[11];
extern const char btlDebugMenuTitle[]; // "btl Debug Menu"

void btlDebugOpen(BtlMainState *state, s32 menuMode)
{
    BattleDebugOwnerView *owner = (BattleDebugOwnerView *)state;
    owner->flags |= 1;
    owner->job = taskCreateDraw((const s8 *)"btlDebug Calc", 2, 0, 0,
                               btlDebugDispatchCurrentJob, FUN_0021ec34, (u32)state, state->job);
    taskCreateDraw((const s8 *)"btlDebug DrawUp", 0x73, 0, 0,
                   FUN_001fc5c0, NULL, (u32)state, owner->job);
    taskCreateDraw((const s8 *)"btlDebug DrawDown", 0xe6, 0, 0,
                   lmapJobQueryZero, NULL, (u32)state, owner->job);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlDebug.cpp", 0xe5c);
    BattleDebugWork *work = (BattleDebugWork *)asdMemAlloc(
        ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(*work), 1);
    g_btlDebugState.work = work;
    work->menuMode = menuMode;
    work->state = 0;
    g_btlDebugState.selection = 0;
    if (menuMode != 0) {
        work->listBox = asdListBoxCreateDefault(owner->job, 0x73, 0, 0);
        asdListBoxAddItems((AsdListBox *)work->listBox, btlDebugMenuEntries, 11);
        asdListBoxSetByteValue(work->listBox, 1);
        jobSetText(work->listBox, btlDebugMenuTitle);
    } else {
        FUN_003c5150(work, state);
    }
    if (g_btlUiBlock != NULL) {
        FUN_0025c2d0(reinterpret_cast<u32>(g_btlUiBlock), 1);
    }
}
}
