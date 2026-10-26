/* NON_MATCHING: transition subobject matches all accesses; transition pointer and result saved registers r5/r6 remain exchanged. */
/* Starts a ready character-panel script and advances the panel's slide/fade transition. */
#include "script/scrScriptProcess.h"
#include <stddef.h>
#include "code/Code0026.h"

extern "C" {
u32 FUN_0026f784(void *link);
ScriptRunState *FUN_00297060(void *resource, u32 entry);
void scriptProcessSetMode(ScriptRunState *process, s32 mode);
void linkHolderApplyFlag(void *link, u32 flag);
void characterInfoPanelPopulate(void *panel, u32 selection, const void *record);
u32 FUN_0028d594(void);
u32 FUN_0026f1f0(void);
void buttonHelpSetPreset(u32 preset);
void uiAnimateStaggeredSlidesAndFades(void *panel, u32 mode);

u32 FUN_002e1744(void *object)
{
    struct PanelTransitionState {
        u8 unk00[0x10];
        u32 phase;
        u8 unk14[0x10];
        u8 busy;
        u8 unk25[4];
        s8 needsHelp;
    };
    struct PanelWork {
        u32 unk00;
        void *link;
        u32 selection;
        u32 unk0C;
        void *panel;
        u8 unk14[0x60];
        u8 ready;
        u8 unk75[0x2B];
        ScriptRunState *process;
        void *resource;
        u32 entry;
        void *record;
        u8 unkB0[0x50];
        PanelTransitionState transition;
    };
    typedef char PanelTransitionLayoutCheck[
        offsetof(PanelWork, transition) == 0x100 &&
        offsetof(PanelTransitionState, busy) == 0x24 &&
        offsetof(PanelTransitionState, needsHelp) == 0x29 &&
        sizeof(PanelWork) == 0x12c ? 1 : -1];
    PanelWork *work = (PanelWork *)object;
    PanelTransitionState *transition = &work->transition;
    u32 result = 0;
    if (!transition->busy && FUN_0026f784(work->link) &&
        work->resource != NULL && work->entry != 0 && work->record != NULL) {
        if (work->ready == 1) {
            work->process = FUN_00297060(work->resource, work->entry);
            scriptProcessSetMode(work->process, 2);
            work->transition.busy = 1;
            linkHolderApplyFlag(work->link, 1);
            characterInfoPanelPopulate(work->panel, work->selection, work->record);
            if (!FUN_0028d594()) {
                FUN_0026f188(FUN_0026f1f0(), 15);
            }
            if (!transition->needsHelp) {
                work->transition.phase = 1;
            } else {
                buttonHelpSetPreset(226);
                work->transition.phase = 2;
            }
            result = 2;
        }
        uiAnimateStaggeredSlidesAndFades(work, 1);
    }
    return result;
}
}
