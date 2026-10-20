/* NON_MATCHING: the process name is a .constdata literal in retail (DAT_00409d80) and a stripped debug call precedes the allocation. */
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
s32 FUN_002bda9c(u32 handle);
void FUN_002be8b4(u32 handle);

void *asdMemoryAllocTracked(int heap, int alignClass, int unk08, u32 size, int fromFront);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, void *owner);
s32 jobIsValid(void *parent);
void FUN_0014bdb4(void *parent, u32 handle);
void FUN_00280468(void *widget, s32 rows, s32 unk);
void FUN_0036ba44(void *widget, s32 a, s32 b, s32 c, s32 d);

/* Creates a list box process at (x, y) in `group` and registers it with `parent`. */
u32 asdListBoxCreate(void *parent, s32 group, s32 x, s32 y, u8 flag)
{
    AsdListBox *box;
    u32 handle;

    box = (AsdListBox *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(AsdListBox), 1);
    if (box == NULL) {
        return 0;
    }

    handle = asdProcessCreateSimple((const s8 *)"AsdListBox", group, 0, 0, FUN_002bda9c, FUN_002be8b4, box);
    if (jobIsValid(parent) != 0) {
        FUN_0014bdb4(parent, handle);
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
    FUN_00280468(box->widget, 10, 0);
    FUN_0036ba44(box->widget, 6, 5, 32, 32);
    box->unk34 = 0;
    return handle;
}

} /* extern "C" */
