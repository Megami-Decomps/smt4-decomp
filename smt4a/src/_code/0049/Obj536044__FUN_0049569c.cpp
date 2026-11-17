#include "ui/PlaceTextTransition.h"
#include "ui/SceneResourceWait.h"

static inline void placeTextChangeState(PlaceTextTransition *transition, s32 next)
{
    transition->previousState = transition->state;
    transition->state = next;
    transition->frame = 0;
}

extern "C" {
u32 FUN_004962e4(SceneResourceWaitState *state);
void scriptProcessSetMode(ScriptProcess *process, s32 mode);
void titleSetSlotValueState2(s32 screen, s32 frames);
const PlaceTextRecord *dataTable17Type1GetEntry(PlaceTextTableCursor *cursor, s32 index);
s32 dataTable17Count(PlaceTextTableCursor *cursor);
s32 gameFlagIsSet(u16 flag);
void placeWinStartText(const char *text);


/* Prepare both screen elements, select the location caption, and start its transition. */
void _ZN9Obj53604412FUN_0049569cEv(PlaceTextTransition *transition)
{
    if (FUN_004962e4(reinterpret_cast<SceneResourceWaitState *>(transition)) != 0) {
        /* The owner word is the layout size here. */
        ScriptProcess *process = scrScriptProcessCreate(transition->layoutSource, reinterpret_cast<void *>(transition->layoutSize));
        transition->first = process;
        scriptProcessSetMode(process, 2);
        process = scrScriptProcessCreate(transition->layoutSource, reinterpret_cast<void *>(transition->layoutSize));
        transition->second = process;
        scriptProcessSetMode(process, 2);
        titleSetSlotValueState2(0, 10);
        titleSetSlotValueState2(1, 10);
        u8 area = transition->area;
        s32 location = transition->location;
        PlaceTextTableCursor cursor;
        s32 selected = -1;
        const PlaceTextRecord *records = dataTable17Type1GetEntry(&cursor, 0);
        for (s32 index = 0; index < dataTable17Count(&cursor); ++index) {
            if (records[index].area == area && records[index].location == location) {
                selected = index;
                break;
            }
        }
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
