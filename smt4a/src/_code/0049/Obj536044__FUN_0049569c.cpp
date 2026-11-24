#include "ui/PlaceTextTransition.h"
#include "ui/SceneResourceWait.h"

static inline void placeTextChangeState(PlaceTextTransition *transition, s32 next)
{
    transition->previousState = transition->state;
    transition->state = next;
    transition->frame = 0;
}

extern "C" {
u32 sceneResourcesAreReady(SceneResourceWaitState *state);
void scriptProcessSetMode(ScriptProcess *process, s32 mode);
void titleSetSlotValueState2(s32 screen, s32 frames);
s32 gameFlagIsSet(u16 flag);
void placeWinStartText(const char *text);


/* Prepare both screen elements, select the location caption, and start its transition. */
void _ZN9Obj53604412FUN_0049569cEv(PlaceTextTransition *transition)
{
    if (sceneResourcesAreReady(reinterpret_cast<SceneResourceWaitState *>(transition)) != 0) {
        /* The owner word is the layout size here. */
        ScriptProcess *process = scrScriptProcessCreate(transition->layoutSource, reinterpret_cast<void *>(transition->layoutSize));
        transition->first = process;
        scriptProcessSetMode(process, 2);
        process = scrScriptProcessCreate(transition->layoutSource, reinterpret_cast<void *>(transition->layoutSize));
        transition->second = process;
        scriptProcessSetMode(process, 2);
        titleSetSlotValueState2(0, 10);
        titleSetSlotValueState2(1, 10);
        s32 selected = placeTextFindRecord(transition->area, transition->location);
        PlaceTextTableCursor selectedCursor;
        const PlaceTextRecord *record = dataTable17Type1GetEntry(&selectedCursor, selected);
        const char *caption;
        if (gameFlagIsSet(record->alternateFlag) != 0) {
            caption = record->alternateText;
        } else {
            caption = record->text;
        }
        placeWinStartText(caption);
        placeTextChangeState(transition, 1);
    }
}
}
