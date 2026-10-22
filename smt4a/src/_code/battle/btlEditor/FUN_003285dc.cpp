/* NON_MATCHING: roster pointer reloads, marker-mask temporaries and saved registers differ from retail. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

struct BattleEditorGlobals { void *buffer; u32 unk04; u64 addedMarkers; };
struct EditorRosterColor { u8 unk000[0x6c]; u32 current, saved; };
struct EditorJobWork { u8 unk00[0x7c]; u32 job; };
extern "C" {
extern void *g_btlUiBlock;
extern BattleEditorGlobals g_btlEditor;
BtlMainStateA *jobGetWork();
void FUN_004aa780(void *ui, s32 mode);
void asdMemFree(void *memory);
void jobStop(u32 job, s32 mode);

// Restore roster display state and remove the editor's marker bits before freeing its buffer and stopping the job.
void FUN_003285dc()
{
    BtlMainStateA *work = jobGetWork();
    if (g_btlUiBlock)
        FUN_004aa780(g_btlUiBlock, 0);
    if (g_btlEditor.buffer) {
        if (work) {
            if (work->roster) {
                for (s32 i = 4; i < 54; ++i) {
                    u32 flags = work->roster[i].liveFlags.unk50;
                    if ((flags & 1) && (flags & 0x80))
                        work->roster[i].liveFlags.unk50 = flags & ~8u;
                }
            }
            if (work->roster) {
                for (s32 i = 0; i < 109; ++i) {
                    EditorRosterColor *color = (EditorRosterColor *)&work->roster[i];
                    color->current = color->saved;
                }
            }
        }
        work->markerMasks.bits &= ~g_btlEditor.addedMarkers;
        asdMemFree(g_btlEditor.buffer);
        g_btlEditor.buffer = NULL;
    }
    jobStop(((EditorJobWork *)work)->job, 0);
}
}
