/* NON_MATCHING: negotiation-mask loads choose LDRD/LDM differently and battle/mask saved-register allocation differs. */
#include "battle/DebugPanel.h"
#include "battle/btlMain.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "shard/X14_BtlUiClose.h"
#include "util/CalleeContracts.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"
#include "battle/btlDebug.h"

extern "C" {
extern BtlUiCloseState DAT_005715f8;
extern const AsdListBoxEntry DAT_00572a80[5];
extern const char DAT_005280e8[];
s32 jobIsValid(u32 job);
void FUN_003592dc(u32 job);
void jobStop(u32 job, s32 mode);
void asdListBoxAddItems(u32 job, const AsdListBoxEntry *items, u32 count);
void jobSetText(u32 job, const char *text);
void asdListBoxSetToggleItem(u32 job, s32 item, s32 value);

// Recreate the negotiation debug controls from the current battle's UI flags and bust-up index.
void FUN_004d2124(BattleDebugPanelWork *work, BtlMainStateA *battle)
{
    if (jobIsValid(work->panelJob)) {
        FUN_003592dc(work->panelJob);
        jobStop(work->panelJob, 0);
    }
    work->panelJob = asdListBoxCreateDefaultFlags(battle->uiJobs.menuJob, 117, 0, 0);
    asdListBoxAddItems(work->panelJob, DAT_00572a80, 5);
    asdListBoxSetByteValue(work->panelJob, 1);
    jobSetText(work->panelJob, DAT_005280e8);
    // These masks extend beyond the published module-state prefix; keep that shared type's extent intact.
    struct TalkDebugMaskView {
        u8 unk00[0x98];
        u64 talkAll;
        u64 bustup;
        u8 unkA8[0x20];
        u64 messageWindow;
        u8 unkD0[8];
        u64 talkBeginningLife;
    };
    typedef char TalkDebugMaskOffsetCheck[
        offsetof(TalkDebugMaskView, talkAll) == 0x98 &&
        offsetof(TalkDebugMaskView, bustup) == 0xA0 &&
        offsetof(TalkDebugMaskView, messageWindow) == 0xC8 &&
        offsetof(TalkDebugMaskView, talkBeginningLife) == 0xD8 ? 1 : -1];
    TalkDebugMaskView *masks = (TalkDebugMaskView *)&DAT_005715f8;
    asdListBoxSetToggleItem(work->panelJob, 0, (battle->markerMasks.bits & masks->talkAll) != 0);
    asdListBoxSetToggleItem(work->panelJob, 1, (battle->markerMasks.bits & masks->bustup) != 0);
    asdListBoxSetIntItem(work->panelJob, 2, battle->negotiation.bustupIndex, 0, 600, 0);
    asdListBoxSetToggleItem(work->panelJob, 3, (battle->stateFlags64.bits & masks->messageWindow) != 0);
    asdListBoxSetToggleItem(work->panelJob, 4, (battle->markerMasks.bits & masks->talkBeginningLife) != 0);
}
}
