/* NON_MATCHING: the task callbacks are local code labels (LAB_*) that are not decompiled, so their addresses are built differently */
/* Opens the bible screen: allocates its work area and creates its task and two draw tasks. */
#include "common.h"
#include "bible/bibleMain.h"

extern "C" {

typedef void (*VoidFunc)(void);

u32 taskCreateDraw(VoidFunc fn, int priority, int arg2, int arg3, VoidFunc cb, int arg5, void *work, u32 parent);
void *asdMemoryAllocTracked(int heap, int align, int arg2, int size, int arg4);
u32 jyoucyuGetTableEntry(int index);               /* heap handle `index` */
u32 asdProcessCreateSimple(VoidFunc fn, int priority, int arg2, int arg3, VoidFunc cb, VoidFunc destroy, void *work);
void LAB_002981dc(void);
void LAB_002dec44(void);
void LAB_0028ca70(void);
void LAB_0028ca84(void);
void LAB_0028ca94(void);
void LAB_00328460(void);
void LAB_003284c4(void);

extern BibleGlobals g_bible;

void bibleStart(void)
{
    BibleWork *work;

    jyoucyuGetTableEntry(0);
    work = (BibleWork *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x20, 1);
    g_bible.work = work;
    work->unk0d = 0;
    work->unk15 = 0;
    work->done = 0;
    work->unk10 = 1;
    work->unk14 = 1;
    work->task = asdProcessCreateSimple(LAB_0028ca70, 4, 0, 0, LAB_002981dc, LAB_00328460, work);
    work->drawTaskA = taskCreateDraw(LAB_0028ca84, 0x71, 1, 0, LAB_002dec44, 0, g_bible.work, work->task);
    work->drawTaskB = taskCreateDraw(LAB_0028ca94, 0xea, 1, 0, LAB_003284c4, 0, g_bible.work, work->task);
}

} /* extern "C" */
