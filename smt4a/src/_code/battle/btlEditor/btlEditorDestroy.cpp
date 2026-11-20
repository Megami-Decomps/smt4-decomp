/* NON_MATCHING: the first roster loop swaps the entry and flag-word registers; marker removal matches. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BattleEditorState.h"
#include "shard/JobWork.h"
#include "shard/X14_BtlUiClose.h"
#include "battle/BtlUiGlobal.h"

struct EditorRosterColor { u8 unk000[0x6c]; u32 current, saved; };
extern "C" {
extern BattleEditorGlobalsA g_btlEditor;
void asdMemFree(void *memory);
void jobStop(u32 job, s32 mode);

static __inline void battleEditorRestoreRosterFlags(BtlMainStateA *work)
{
    if (work != NULL && work->roster != NULL) {
        for (s32 index = 4; index < 54; ++index) {
            BattleRosterRecordA *entry = &work->roster[index];
            if ((entry->liveFlags.unk50 & 1) && (entry->liveFlags.unk50 & 0x80)) {
                entry->liveFlags.unk50 &= ~8u;
            }
        }
    }
}

static __inline void battleEditorRestoreRosterColors(BtlMainStateA *work)
{
    if (work != NULL && work->roster != NULL) {
        for (s32 index = 0; index < 109; ++index) {
            EditorRosterColor *color = reinterpret_cast<EditorRosterColor *>(&work->roster[index]);
            color->current = color->saved;
        }
    }
}

/* Restores roster display state and removes the editor's marker bits before freeing its buffer and stopping the job. */
void btlEditorDestroy(void *job)
{
    BtlMainStateA *work = (BtlMainStateA *)jobGetWork((u32)job);
    if (g_btlUiBlock)
        FUN_004aa780(g_btlUiBlock, 0);
    if (g_btlEditor.state) {
        battleEditorRestoreRosterFlags(work);
        battleEditorRestoreRosterColors(work);
        work->markerMasks.bits &= ~g_btlEditor.markerMask;
        asdMemFree(g_btlEditor.state);
        g_btlEditor.state = NULL;
    }
    jobStop(work->uiJobs.editorJob, 0);
}
}
