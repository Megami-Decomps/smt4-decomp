#include "gamedata/SavedUnitSelection.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameSaveDataA.h"
#include "saveLoadUI/SaveLoadState.h"
#include "script/scrScriptProcess.h"

extern "C" {
extern SaveLoadUIBaseA g_saveLoadUIBase;
s32 saveLoadThreadHasResult(void);
s32 byteArr5Get3(void);
s32 byteTripleGetV0(void);
void gameDataAddHomeButtonHold(u32 bits);
void gameDataBlocksReleaseHold(u32 bits);
void messageMainSetFlag(s32 enabled);
void sysPlaySe(s32 sound);
void scrScriptProcessStartEntry(ScriptProcess *script, s32 entry);
void saveLoadStartLoad(s32 slot, s32 mode);

/* Polls the selected slot's load, maintains the HOME-button hold and runs the completion script. */
void savedUnitEditorPollLoad(SavedUnitSelection *work)
{
    if (work->editor.finishing) {
        if (!saveLoadThreadHasResult() && scrRunOpcodesStub(work->editor.script) == 2) {
            if (byteArr5Get3())
                g_saveLoadUIBase.unk00 = 1;
            else
                work->editor.canApply = 1;
        }
    } else if (!work->editor.started) {
        if (!work->active) {
            work->editor.started = 1;
            saveLoadStartLoad(work->selected + 1, 0);
            scrRunOpcodesStub(work->editor.script);
            work->operationFrames = 0;
        }
    } else {
        ++work->operationFrames;
        if (saveLoadThreadHasResult()) {
            if (work->editor.readyToFinish)
                work->editor.finishing = 1;
        } else {
            scrRunOpcodesStub(work->editor.script);
        }
        if (byteTripleGetV0()) {
            if (work->operationFrames <= 30)
                gameDataAddHomeButtonHold(1);
            else
                gameDataBlocksReleaseHold(1);
        }
        if (byteTripleGetV0() && work->operationFrames > 30) {
            messageMainSetFlag(1);
            sysPlaySe(0xa0);
            work->editor.finishing = 1;
            if (byteArr5Get3()) {
                gameDataBlocksReleaseHold(1);
                const SavedUnitChoice *profile = &((const GameSaveBodyA *)gameDataBlocksGetSaveData())->pairs.selectedUnit;
                work->choices[work->selected] = *profile;
                work->changes[work->selected] = 1;
                scrScriptProcessStartEntry(work->editor.script, 5);
            } else {
                gameDataBlocksReleaseHold(1);
                scrScriptProcessStartEntry(work->editor.script, 6);
            }
        }
    }
}
} /* extern "C" */
