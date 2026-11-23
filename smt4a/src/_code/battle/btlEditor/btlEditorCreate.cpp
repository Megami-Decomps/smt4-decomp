/* NON_MATCHING: the UI-block tail now matches; retail loads the roster-count offset into r2 and reloads r2 with &g_btlCamera after the ldrb (the build uses r3 for the offset and loads the camera early). IV's twin publishes the job first (`battle->editor.job = taskCreateDraw(...)`, read back for the draw task) and is
 * IDENTICAL so; here that form scores 6 against this local's 4, so the twins differ there (wave 85). */
#include "battle/btlMain.h"
#include "battle/btlCamera.h"
#include "battle/BattleEditorState.h"
#include "sys/Task.h"
#include "AsdSDK/AsdDebug.h"
#include "battle/btlEditor.h"
#include "battle/BattleHelpers_Smt4a.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUiGlobal.h"

extern "C" {
u32 taskCreateDraw(const char* name, u32 priority, u32 size, u32 flags,
                   TaskFunc callback, TaskFunc destroy, void* data, u32 parent);
void* asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 option);
void FUN_002984d4(void* work);
void btlEditorDestroy(void* work);
void btlEditorUpdate(void* work);
s32 btlCameraCanAdvance(BtlCameraA* camera, BtlMainStateA* battle, u32 option);
void FUN_004aa780(void* work, u32 enabled);
extern BattleEditorGlobalsA g_btlEditor;

void btlEditorCreate(BtlMainStateA* battle)
{
    u32 job = taskCreateDraw("btlEditor Calc", 4, 0, 0, FUN_002984d4,
        btlEditorDestroy, battle, battle->job);
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
            btlCameraCanAdvance(g_btlCamera, battle, 1)) {
            btlQueueDuplicateSuppressedAction(0, 0, 0);
        }
        FUN_004feecc(1, 0);
    }
    battle->markerMasks.bits |= g_btlEditor.markerMask;
    if (void *ui = g_btlUiBlock) {
        FUN_004aa780(ui, 1);
    }
}
}
