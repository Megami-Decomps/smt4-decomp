/* NON_MATCHING: first roster entry/value registers are exchanged and marker removal uses different loads/MVN/AND instead of retail's BIC pair. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BattleEditorState.h"
#include "shard/JobWork.h"
#include "shard/X14_BtlUiClose.h"

struct EditorRosterColor { u8 unk000[0x6c]; u32 current, saved; };
extern "C" {
extern void *g_btlUiBlock;
extern BattleEditorGlobalsA g_btlEditor;
void asdMemFree(void *memory);
void jobStop(u32 job, s32 mode);

static __inline void battleEditorRestoreRosterFlags(BtlMainStateA *work)
{
    if (work != NULL && work->roster != NULL) {
        for (s32 index = 4; index < 54; ++index) {
            BattleRosterRecordA *entry = &work->roster[index];
            u32 flags = entry->liveFlags.unk50;
            if ((flags & 1) && (flags & 0x80)) {
                entry->liveFlags.unk50 = flags & ~8u;
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

// Restore roster display state and remove the editor's marker bits before freeing its buffer and stopping the job.
void FUN_003285dc(void *job)
{
    BtlMainStateA *work = (BtlMainStateA *)jobGetWork((u32)job);
    if (g_btlUiBlock)
        FUN_004aa780(reinterpret_cast<u32>(g_btlUiBlock), 0);
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
