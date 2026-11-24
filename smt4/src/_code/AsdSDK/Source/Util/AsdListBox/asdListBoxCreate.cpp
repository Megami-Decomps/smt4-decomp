#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "bible/bibleAnalyze.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {
extern const char g_asdListBoxSourceFileName[];
extern const s8 g_asdListBoxProcessName[]; /* "AsdListBox" */
s32 asdListBoxUpdate(u32 handle);
void asdListBoxDestroy(u32 handle);

s32 jobIsValid(void *parent);
void jobSetParent(void *parent, u32 handle);
void rowWidgetInit(void *widget, s32 rows, s32 unk);

/* Creates a movable 10-row list box process at (x, y) in process group `group`, parented to `parent` when
 * that is a valid job; returns its handle, or 0 when the box cannot be allocated. */
u32 asdListBoxCreate(void *parent, s32 group, s32 x, s32 y, u8 colorScheme)
{
    AsdListBox *box;
    u32 handle;

    asdDebugTrace(g_asdListBoxSourceFileName, 748);
    box = (AsdListBox *)asdMemAlloc(0x100, 0x100, 0, sizeof(AsdListBox), 1);
    if (box == NULL) {
        return 0;
    }

    handle = asdProcessCreateSimple(g_asdListBoxProcessName, group, 0, 0, asdListBoxUpdate, asdListBoxDestroy, (u32)box);
    if (jobIsValid(parent) != 0) {
        jobSetParent(parent, handle);
    }

    box->colorScheme = colorScheme;
    box->width = 128.0f;
    box->x = (f32)x;
    box->height = 128.0f;
    box->y = (f32)y;
    box->rowHeight = ASD_LISTBOX_DEFAULT_ROW_HEIGHT;
    box->charWidth = ASD_LISTBOX_DEFAULT_CHAR_WIDTH;
    box->flags |= ASD_LISTBOX_FLAG_MOVABLE;
    box->visibleRows = ASD_LISTBOX_DEFAULT_VISIBLE_ROWS;
    rowWidgetInit(box->widget, box->visibleRows, 0);
    colorSetRgba(box->widget, 6, 5, 32, 32);
    box->state = 0;
    return handle;
}

} /* extern "C" */
