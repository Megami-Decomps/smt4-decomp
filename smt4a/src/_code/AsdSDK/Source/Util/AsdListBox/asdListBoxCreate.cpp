#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
s32 asdListBoxUpdate(u32 handle);
void asdListBoxDestroy(u32 handle);

extern const char g_asdListBoxSourceFileName[]; /* AsdListBox.cpp: __FILE__ */
extern const s8 g_asdListBoxProcessName[]; /* "AsdListBox" */
s32 jobIsValid(void *parent);
void jobSetParent(void *parent, u32 handle);
void rowWidgetInit(void *widget, s32 rows, s32 unk);
void colorSlotSet(void *widget, s32 a, s32 b, s32 c, s32 d);

/* Creates a movable 10-row list box process at (x, y) in process group `group`, parented to `parent` when
 * that is a valid job; returns its handle, or 0 when the box cannot be allocated. */
u32 asdListBoxCreate(void *parent, s32 group, s32 x, s32 y, u8 colorScheme)
{
    AsdListBox *box;
    u32 handle;

    asdDebugTrace(g_asdListBoxSourceFileName, 748);
    box = (AsdListBox *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(AsdListBox), 1);
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
    box->rowHeight = 13;
    box->rowCount = 10;
    box->flags |= ASD_LISTBOX_FLAG_MOVABLE;
    box->visibleRows = box->rowCount;
    rowWidgetInit(box->widget, box->rowCount, 0);
    colorSlotSet(box->widget, 6, 5, 32, 32);
    box->state = 0;
    return handle;
}

} /* extern "C" */
