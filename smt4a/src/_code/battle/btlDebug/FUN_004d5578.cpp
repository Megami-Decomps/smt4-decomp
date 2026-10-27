/* NON_MATCHING: only the item-2 marker-mask test differs: retail keeps the mask pool pointer in r2 and the bits pointer in r0 with and(bits,mask) operand order; the build uses r1/r2 (and ldrd for the bits when written bits-first). Everything else matches. */
#include "battle/DebugPanel.h"
#include "battle/btlCamera.h"
#include "battle/btlMain.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"
#include "shard/X14_BtlUiClose.h"
#include "battle/btlDebug.h"

extern "C" {
extern BtlCameraA *g_btlCamera;
extern BtlUiCloseState DAT_005715f8;
extern const AsdListBoxEntry DAT_00573300[31];
extern f32 DAT_005e1554[3];
extern f32 DAT_00571570;
extern f32 DAT_00571574;
extern f32 DAT_00571578;
extern s32 DAT_0057157c;
extern s32 DAT_00571514;
extern s32 DAT_00571518;
extern f32 DAT_00571580;
extern s32 DAT_00571584;
extern s32 DAT_00571520;
extern s32 DAT_00571588;
extern f32 DAT_0057158c;
extern s32 DAT_00571590;
extern s32 DAT_00571524;
extern s32 DAT_00571594;
extern s32 DAT_00571598;
extern s32 DAT_00571528;
extern s32 DAT_0057159c;
extern s32 DAT_005715a0;
extern s32 DAT_0057152c;
extern s32 DAT_005715a4;
extern s32 DAT_005715a8;
extern s32 DAT_005715ac;
extern s32 DAT_005715b0;
extern s32 DAT_005715b4;
extern s32 DAT_0057aa10;
extern s32 DAT_00571530;
s32 jobIsValid(u32 job);
void FUN_003592dc(u32 job);
void jobStop(u32 job, s32 mode);
void asdListBoxAddItems(u32 job, const AsdListBoxEntry *items, u32 count);
void jobSetText(u32 job, const char *text);
void asdListBoxSetToggleItem(u32 job, s32 item, s32 value);
void asdListBoxSetFloatItem(u32 job, u32 item, f32 value, s32 minimum, s32 maximum);
void asdListBoxSetByteValue(u32 list, u8 value);

// Recreate the attack-camera debug controls from the camera's flags and the debug parameters.
void FUN_004d5578(BattleDebugPanelWork *work, BtlMainStateA *battle)
{
    // The effect value lies beyond the published prefix of the shared camera type.
    struct CameraEffectView {
        u8 unk000[0x578];
        f32 value;
    };
    if (jobIsValid(work->panelJob)) {
        FUN_003592dc(work->panelJob);
        jobStop(work->panelJob, 0);
    }
    work->panelJob = asdListBoxCreateDefaultFlags(battle->uiJobs.menuJob, 0x75, 0, 0);
    asdListBoxAddItems(work->panelJob, DAT_00573300, 31);
    asdListBoxSetByteValue(work->panelJob, 1);
    jobSetText(work->panelJob, "Attack Camera Menu");
    asdListBoxSetToggleItem(work->panelJob, 0, (g_btlCamera->flags & 0x100) >> 8);
    asdListBoxSetFloatItem(work->panelJob, 1, reinterpret_cast<CameraEffectView *>(g_btlCamera)->value, -10, 10);
    asdListBoxSetToggleItem(work->panelJob, 2, (DAT_005715f8.markerMask & battle->markerMasks.bits) != 0);
    asdListBoxSetFloatItem(work->panelJob, 3, DAT_005e1554[0], -100, 100);
    asdListBoxSetFloatItem(work->panelJob, 4, DAT_005e1554[2], -100, 100);
    asdListBoxSetFloatItem(work->panelJob, 5, DAT_00571570, -100, 100);
    asdListBoxSetFloatItem(work->panelJob, 6, DAT_00571574, -100, 100);
    asdListBoxSetFloatItem(work->panelJob, 7, DAT_00571578, -50, 200);
    asdListBoxSetIntItem(work->panelJob, 8, DAT_0057157c, -1, 100, 0);
    asdListBoxSetIntItem(work->panelJob, 9, DAT_00571514, -1, 100, 0);
    asdListBoxSetIntItem(work->panelJob, 10, DAT_00571518, 0, 2, 0);
    asdListBoxSetFloatItem(work->panelJob, 11, DAT_00571580, -90, 90);
    asdListBoxSetIntItem(work->panelJob, 12, DAT_00571584, -1, 100, 0);
    asdListBoxSetIntItem(work->panelJob, 13, DAT_00571520, -1, 100, 0);
    asdListBoxSetIntItem(work->panelJob, 14, DAT_00571588, 0, 2, 0);
    asdListBoxSetFloatItem(work->panelJob, 15, DAT_0057158c, -90, 90);
    asdListBoxSetIntItem(work->panelJob, 16, DAT_00571590, -1, 100, 0);
    asdListBoxSetIntItem(work->panelJob, 17, DAT_00571524, -1, 100, 0);
    asdListBoxSetIntItem(work->panelJob, 18, DAT_00571594, 0, 2, 0);
    asdListBoxSetIntItem(work->panelJob, 19, DAT_00571598, -1, 100, 0);
    asdListBoxSetIntItem(work->panelJob, 20, DAT_00571528, -1, 100, 0);
    asdListBoxSetIntItem(work->panelJob, 21, DAT_0057159c, 0, 2, 0);
    asdListBoxSetIntItem(work->panelJob, 22, DAT_005715a0, -1, 100, 0);
    asdListBoxSetIntItem(work->panelJob, 23, DAT_0057152c, -1, 100, 0);
    asdListBoxSetIntItem(work->panelJob, 24, DAT_005715a4, 0, 2, 0);
    asdListBoxSetIntItem(work->panelJob, 25, DAT_005715a8, -1, 100, 0);
    asdListBoxSetIntItem(work->panelJob, 26, DAT_005715ac, -1, 100, 0);
    asdListBoxSetIntItem(work->panelJob, 27, DAT_005715b0, 0, 2, 0);
    asdListBoxSetIntItem(work->panelJob, 28, DAT_005715b4, 0, 999, 0);
    asdListBoxSetIntItem(work->panelJob, 29, DAT_0057aa10, 0, 99, 0);
    asdListBoxSetIntItem(work->panelJob, 30, DAT_00571530, 0, 99, 0);
}
}
