/* NON_MATCHING: place text transition scheduling has not matched retail. */
#include "ui/PlaceTextTransition.h"
#include "ui/SceneResourceWait.h"

extern "C" {
u32 FUN_004962e4(SceneResourceWaitState *state);
PlaceTextLayoutElement *FUN_00275bc8(void *source, u32 size);
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
        element->mode = 2;
        element = FUN_00275bc8(transition->layoutSource, transition->layoutSize);
        transition->second = element;
        element->mode = 2;
        FUN_003d54f8(0, 10);
        FUN_003d54f8(1, 10);
        u8 area = transition->area;
        s32 location = transition->location;
        PlaceTextTableCursor cursor;
        const PlaceTextRecord *records = dataTable17Type1GetEntry(&cursor, 0);
        s32 selected = -1;
        for (s32 index = 0; index < dataTable17Count(&cursor); ++index) {
            if (records[index].area == area && records[index].location == location) {
                selected = index;
                break;
            }
        }
        PlaceTextTableCursor selectedCursor;
        const PlaceTextRecord *record = dataTable17Type1GetEntry(&selectedCursor, selected);
        const char *text = gameFlagIsSet(record->alternateFlag) != 0 ? record->alternateText : record->text;
        placeWinStartText(text);
        transition->previousState = transition->state;
        transition->state = 1;
        transition->frame = 0;
    }
}
}
