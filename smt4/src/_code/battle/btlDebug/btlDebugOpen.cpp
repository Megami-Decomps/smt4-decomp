/* NON_MATCHING: the no-menu path now sits out of line as in retail; remaining: retail keeps state/work in r4/r5
 * (built r5/r4) and hoists the state into r1 before the menu test, and retail's pool words for the Calc update and
 * the DrawUp/DrawDown callbacks are 0 with no relocation (weak functions the release build did not link), so
 * btlDebugDispatchCurrentJob, FUN_001fc5c0 and lmapJobQueryZero are not the real callbacks. */
#include "shard/W6_W6Match8_BattleDebug.h"
#include "battle/btlMain.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "map/mapDepart.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "battle/BtlUiGlobal.h"

extern "C" {
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, u32 parent);
s32 FUN_001fc5c0(u32 handle);
s32 lmapJobQueryZero(u32 handle);
void asdListBoxAddItems(AsdListBox *list, const AsdListBoxEntry *entries, s32 count);
void asdListBoxSetByteValue(u32 list, s32 enabled);
void jobSetText(u32 job, const char *text);
void FUN_003c5150(BattleDebugWork *work, BtlMainState *state);
extern const AsdListBoxEntry btlDebugMenuEntries[11];
extern const char btlDebugMenuTitle[]; // "btl Debug Menu"

void btlDebugOpen(BtlMainState *state, s32 menuMode)
{
    BattleDebugOwnerView *owner = (BattleDebugOwnerView *)state;
    owner->editorMask |= 1;
    owner->job = taskCreateDraw((const s8 *)"btlDebug Calc", 2, 0, 0,
                               btlDebugDispatchCurrentJob, btlDebugClose, (u32)state, state->job);
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
    if (menuMode == 0) {
        FUN_003c5150(work, state);
    } else {
        work->listBox = asdListBoxCreateDefault(owner->job, 0x73, 0, 0);
        asdListBoxAddItems((AsdListBox *)work->listBox, btlDebugMenuEntries, 11);
        asdListBoxSetByteValue(work->listBox, 1);
        jobSetText(work->listBox, btlDebugMenuTitle);
    }
    if (g_btlUiBlock != NULL) {
        FUN_0025c2d0(g_btlUiBlock, 1);
    }
}
}
