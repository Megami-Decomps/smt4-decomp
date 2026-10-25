/* NON_MATCHING: debug trace and the .constdata process name now match; retail stores rowHeight/rowCount separately (r0=13, r1=10) where the build merges them into strd, and keeps the process-create arguments in different registers. */
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
s32 FUN_002bda9c(u32 handle);
void asdListBoxDestroy(u32 handle);

extern const char DAT_0053d960[]; /* AsdListBox.cpp: __FILE__ */
extern const s8 DAT_0053d994[]; /* "AsdListBox" */
void *asdMemoryAllocTracked(int heap, int alignClass, int unk08, u32 size, int fromFront);
s32 jobIsValid(void *parent);
void jobSetParent(void *parent, u32 handle);
void rowWidgetInit(void *widget, s32 rows, s32 unk);
void colorSlotSet(void *widget, s32 a, s32 b, s32 c, s32 d);

/* Creates a list box process at (x, y) in `group` and registers it with `parent`. */
u32 asdListBoxCreate(void *parent, s32 group, s32 x, s32 y, u8 flag)
{
    AsdListBox *box;
    u32 handle;

    asdDebugTrace(DAT_0053d960, 748);
    box = (AsdListBox *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(AsdListBox), 1);
    if (box == NULL) {
        return 0;
    }

    handle = asdProcessCreateSimple(DAT_0053d994, group, 0, 0, FUN_002bda9c, asdListBoxDestroy, reinterpret_cast<u32>(box));
    if (jobIsValid(parent) != 0) {
        jobSetParent(parent, handle);
    }

    box->unk3c = flag;
    box->width = 128.0f;
    box->x = (f32)x;
    box->height = 128.0f;
    box->y = (f32)y;
    box->rowHeight = 13;
    box->rowCount = 10;
    box->flags |= 4;
    box->unk68 = 10;
    rowWidgetInit(box->widget, 10, 0);
    colorSlotSet(box->widget, 6, 5, 32, 32);
    box->unk34 = 0;
    return handle;
}

} /* extern "C" */
