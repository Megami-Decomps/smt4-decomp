/* NON_MATCHING: stripped asdDebugTrace and the DAT_00409d80 name now match; argument staging for asdProcessCreateSimple and the row height/count stores (strd here, two str in retail) still differ. */
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "bible/bibleAnalyze.h"

extern "C" {
extern const char DAT_00409d40[];
extern const s8 DAT_00409d80[]; /* "AsdListBox" */
s32 FUN_001fe640(u32 handle);
void asdListBoxDestroy(u32 handle);

s32 jobIsValid(void *parent);
void jobSetParent(void *parent, u32 handle);
void rowWidgetInit(void *widget, s32 rows, s32 unk);
void colorSetRgba(void *widget, s32 a, s32 b, s32 c, s32 d);

/* Creates a list box process at (x, y) in `group` and registers it with `parent`. */
u32 asdListBoxCreate(void *parent, s32 group, s32 x, s32 y, u8 flag)
{
    AsdListBox *box;
    u32 handle;

    asdDebugTrace(DAT_00409d40, 748);
    box = (AsdListBox *)asdMemAlloc(0x100, 0x100, 0, sizeof(AsdListBox), 1);
    if (box == NULL) {
        return 0;
    }

    handle = asdProcessCreateSimple(DAT_00409d80, group, 0, 0, FUN_001fe640, asdListBoxDestroy, reinterpret_cast<u32>(box));
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
    colorSetRgba(box->widget, 6, 5, 32, 32);
    box->unk34 = 0;
    return handle;
}

} /* extern "C" */
