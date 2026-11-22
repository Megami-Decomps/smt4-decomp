/* Starts a ready character-panel script and advances the panel's slide/fade transition. */
#include "script/scrScriptProcess.h"
#include <stddef.h>
#include "code/Code0026.h"

extern "C" {
u32 FUN_0026f784(void *link);
void scriptProcessSetMode(ScriptProcess *process, s32 mode);
void linkHolderApplyFlag(void *link, u32 flag);
void characterInfoPanelPopulate(void *panel, u32 selection, const void *record);
u32 buttonHelpTextIsVisible(void);
u32 FUN_0026f1f0(void);
void buttonHelpSetPreset(u32 preset);
void uiAnimateStaggeredSlidesAndFades(void *panel, u32 mode);

u32 characterPanelStartScript(void *object)
{
    struct PanelTransitionState {
        u8 unk00[0x10];
        u32 phase;
        u8 unk14[0x10];
        s8 busy;
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
        ScriptProcess *process;
        void *resource;
        void *entry;
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
    u32 result = 0;
    if (!work->transition.busy && FUN_0026f784(work->link) &&
        work->resource != NULL && work->entry != NULL && work->record != NULL) {
        if (work->ready == 1) {
            work->process = scrScriptProcessCreate(work->resource, work->entry);
            scriptProcessSetMode(work->process, 2);
            work->transition.busy = 1;
            linkHolderApplyFlag(work->link, 1);
            characterInfoPanelPopulate(work->panel, work->selection, work->record);
            if (!buttonHelpTextIsVisible()) {
                FUN_0026f188(FUN_0026f1f0(), 15);
            }
            if (!work->transition.needsHelp) {
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
