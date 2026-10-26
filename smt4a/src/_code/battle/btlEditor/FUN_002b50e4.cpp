/* NON_MATCHING: global-address hoisting and 64-bit marker-mask register allocation differ. */
#include "battle/btlMain.h"
#include "battle/btlCamera.h"
#include "battle/BattleEditorState.h"
#include "sys/Task.h"
#include "AsdSDK/AsdDebug.h"
#include "battle/btlEditor.h"
#include "battle/BattleHelpers_Smt4a.h"

extern "C" {
u32 taskCreateDraw(const char* name, u32 priority, u32 size, u32 flags,
                   TaskFunc callback, TaskFunc destroy, void* data, u32 parent);
void* asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 option);
void FUN_002984d4(void* work);
void FUN_003285dc(void* work);
void btlEditorUpdate(void* work);
s32 FUN_004f2708(BtlCameraA* camera, BtlMainStateA* battle, u32 option);
void FUN_004aa780(void* work, u32 enabled);
extern BtlCameraA* g_btlCamera;
extern void* g_btlUiBlock;
extern BattleEditorGlobalsA g_btlEditor;

void FUN_002b50e4(BtlMainStateA* battle)
{
    u32 job = taskCreateDraw("btlEditor Calc", 4, 0, 0, FUN_002984d4,
        FUN_003285dc, battle, battle->job);
    battle->uiJobs.editorJob = job;
    taskCreateDraw("btlEditor DrawUp", 0x75, 0, 0, btlEditorUpdate, 0, battle, job);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlEditor.cpp", 976);
    BattleEditorStateA* editor = static_cast<BattleEditorStateA*>(
        asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(BattleEditorStateA), 1));
    g_btlEditor.state = editor;
    editor->mode = 0;
    editor->rosterCount = battle->flaggedRoster.count;
    editor->selection = -1;
    editor->group = -1;
    editor->member = -1;
    if (g_btlCamera) {
        if (g_btlCamera->orientation.editor.selection >= 0 &&
            FUN_004f2708(g_btlCamera, battle, 1)) {
            btlQueueDuplicateSuppressedAction(0, 0, 0);
        }
        FUN_004feecc(1, 0);
    }
    battle->markerMasks.bits |= g_btlEditor.markerMask;
    if (g_btlUiBlock) {
        FUN_004aa780(g_btlUiBlock, 1);
    }
}
}
