/* NON_MATCHING: hooks (weak asdDebugHookVoid calls) and the g_gameState notification word now match; the only diff is the panel-open byte, which retail reads through the +0xA00 base register (r5) and the build through the owner (r4+0xA6C). */
#include "map/PickObjectResources.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "ui/QuestSelectionState.h"

extern "C" {
// The quest-selection notification word of g_gameState.
struct GameStateQuestView {
    u8 unk000[0x1AC];
    u16 selectionPending;
};
extern GameStateQuestView g_gameState;
QuestSelectionFlags *gameFlagsGetBlock();
u8 FUN_002a746c();
s32 FUN_002f153c();
u8 uiQuestGetPanelMode();
s32 uiQuestGetActive();
u8 uiQuestGetState();
void FUN_0034aae4();
void clearFlags310To31F();
u16 FUN_00372140();
u16 uiQuestRunEnabledAction();
void buttonHelpBeginExit(s32);
void buttonHelpSetText(s32, u32);
void FUN_0037c8e4(s32, s32);
void panelSetTarget(s32, s32);
void messageMainSetTargetFlags(s32);
void FUN_003a7630(s32);

void FUN_00468e98(PickObjectResources *owner)
{
    /* The selection state follows the shared resource-owner prefix. */
    struct QuestWorkView {
        u8 unk000[4];
        s32 state;
        s32 phase;
        u8 unk00C[0xA54];
        u8 action;
        u8 unkA61;
        s8 panelMode;
        u8 unkA63;
        s8 questState;
        u8 unkA65;
        u16 quest;
        u16 result;
        u8 unkA6A[2];
        u8 panelOpen;
    };
    typedef char QuestWorkOffsets[
        offsetof(QuestWorkView, action) == 0xA60 &&
        offsetof(QuestWorkView, questState) == 0xA64 &&
        offsetof(QuestWorkView, panelOpen) == 0xA6C ? 1 : -1];
    QuestWorkView *work = (QuestWorkView *)owner;
    if (!FUN_002a746c())
        return;

    work->questState = uiQuestGetState();
    work->quest = uiQuestRunEnabledAction();
    work->result = FUN_00372140();
    s32 action = FUN_002f153c();
    work->panelMode = uiQuestGetPanelMode();
    uiQuestGetActive();
    if (work->questState) {
        QuestSelectionFlags *flags = gameFlagsGetBlock();
        flags->selection = 0;
        clearFlags310To31F();
        asdDebugHookVoid();
        if (!action) {
            flags->quest = work->quest;
            asdDebugHookVoid();
            asdDebugHookVoid();
        }
    }
    FUN_0034aae4();
    if (work->panelMode) {
        g_gameState.selectionPending = 1;
        work->state = 17;
        work->phase = 0;
        FUN_003a7630(0);
        return;
    }
    if (action) {
        work->action = action;
        buttonHelpSetText(0, 0xF4F4F4FF);
        buttonHelpBeginExit(1);
        work->state = 12;
        work->phase = 0;
        FUN_003a7630(0);
        return;
    }
    if (work->panelOpen) {
        FUN_0037c8e4(1, 0);
        panelSetTarget(-FUN_00467df8(), 0);
        messageMainSetTargetFlags(1);
        work->panelOpen = 0;
    }
    FUN_0034aae4();
    work->state = 5;
    work->phase = 0;
}
}
