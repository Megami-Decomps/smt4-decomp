/* NON_MATCHING: retail's two `element->mode = 2` stores re-materialise the 2 (a one-instruction `str r1,[r0,#264]` setter inlined by armlink; matched with such a setter row, but the caption select still differs: retail `addne r0,r4,#108; moveq r0,r4` vs ours `addne r4,r4,#108; mov r0,r4`). */
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
PlaceTextLayoutElement *FUN_00275bc8(void *source, u32 size);
void uiElementSetMode(PlaceTextLayoutElement *element, s32 mode);
void FUN_003d54f8(s32 screen, s32 frames);
const PlaceTextRecord *dataTable17Type1GetEntry(PlaceTextTableCursor *cursor, s32 index);
s32 dataTable17Count(PlaceTextTableCursor *cursor);
s32 gameFlagIsSet(u16 flag);
void placeWinStartText(const char *text);


/* Prepare both screen elements, select the location caption, and start its transition. */
void FUN_0049569c(PlaceTextTransition *transition)
{
    if (FUN_004962e4(reinterpret_cast<SceneResourceWaitState *>(transition)) != 0) {
        PlaceTextLayoutElement *element = FUN_00275bc8(transition->layoutSource, transition->layoutSize);
        transition->first = element;
        uiElementSetMode(element, 2);
        element = FUN_00275bc8(transition->layoutSource, transition->layoutSize);
        transition->second = element;
        uiElementSetMode(element, 2);
        FUN_003d54f8(0, 10);
        FUN_003d54f8(1, 10);
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
        placeWinStartText(gameFlagIsSet(record->alternateFlag) == 0 ? record->text : record->alternateText);
        placeTextChangeState(transition, 1);
    }
}
}
