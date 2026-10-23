/* NON_MATCHING: editor flag address register and literal-pool order differ from retail. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/EnemyEditor.h"
#include "AsdSDK/AsdDebug.h"
#include <stddef.h>
struct BtlUi;
/* The allocated session extends beyond the shared EnemyEditorWork prefix. */
struct EditorSessionState {
    union {
        EnemyEditorWork editor;
        struct {
            u32 mode;
            u32 actor;
            u8 unk08[8];
            s16 selection;
            s8 leftSelection;
            s8 rightSelection;
        } initial;
    };
    u32 unk14;
};
typedef char EditorSessionStateLayoutCheck[(sizeof(EditorSessionState) == 0x18 && offsetof(EditorSessionState, initial.leftSelection) == 0x12) ? 1 : -1];
extern "C" {
extern BtlMainState *g_btlMain;
extern BtlUi *g_btlUiBlock;
extern void *DAT_00435ce8;
u32 jobDispatchOptionalOwner(u32 job);
u32 battleEditorRunForJob(u32 job);
void FUN_002c9edc(u32 job);
u32 taskCreateDraw(const char *name, s32 group, s32 startDelay, s32 endDelay, u32 (*update)(u32), void (*end)(u32), void *work, u32 parent);
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
s32 FUN_00256940(BtlMainState *battle, BtlMainState *owner, u32 enabled);
void FUN_002568c4(s32 mode, s32 index);
void FUN_00256898(s32 enabled, s32 mode);
void FUN_0025c2d0(BtlUi *ui, u32 enabled);

void FUN_001f7fac(BtlMainState *battle)
{
    u32 editorJob = taskCreateDraw("btlEditor Calc", 2, 0, 0, jobDispatchOptionalOwner, FUN_002c9edc, battle, battle->encounter.ownerJob);
    battle->editor.job = editorJob;
    taskCreateDraw("btlEditor DrawUp", 0x73, 0, 0, battleEditorRunForJob, 0, battle, editorJob);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlEditor.cpp", 972);
    EditorSessionState *session = static_cast<EditorSessionState *>(asdMemAlloc(0x100, 0x100, 0, sizeof(EditorSessionState), 1));
    DAT_00435ce8 = session;
    session->initial.mode = 0;
    session->initial.actor = battle->actions.completedCount;
    session->editor.selection = -1;
    session->initial.leftSelection = -1;
    session->initial.rightSelection = -1;
    if (g_btlMain) {
        if (g_btlMain->talk.unitIndex >= 0 && FUN_00256940(g_btlMain, battle, 1))
            FUN_002568c4(0, 0);
        FUN_00256898(1, 0);
    }
    battle->editorControl.flags |= 0x80000;
    if (g_btlUiBlock)
        FUN_0025c2d0(g_btlUiBlock, 1);
}
}
