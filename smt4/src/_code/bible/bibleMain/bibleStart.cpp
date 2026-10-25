/* NON_MATCHING: the task callbacks are local code labels (LAB_*) that are not decompiled, so their addresses are built differently */
/* Opens the bible screen: allocates its work area and creates its task and two draw tasks. */
#include "common.h"
#include "bible/bibleMain.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {

typedef void (*VoidFunc)(void);

u32 taskCreateDraw(VoidFunc fn, int priority, int arg2, int arg3, VoidFunc cb, int arg5, void *work, u32 parent);
void *asdMemAlloc(int heap, int align, int arg2, int size, int arg4);
u32 jyoucyuGetTableEntry(int index);               /* heap handle `index` */
void LAB_001e4734(void);
void LAB_0020ed68(void);
void LAB_00269b90(void);
void LAB_00269ba4(void);
void LAB_00269bb4(void);
void LAB_002c9d94(void);
void LAB_002c9df8(void);

extern BibleGlobals g_bible;

void bibleStart(void)
{
    BibleWork *work;

    jyoucyuGetTableEntry(0);
    work = (BibleWork *)asdMemAlloc(0x100, 0x100, 0, 0x20, 1);
    g_bible.work = work;
    work->unk0d = 0;
    work->done = 0;
    work->unk10 = 1;
    work->unk14 = 1;
    work->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>(LAB_00269b90), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(LAB_001e4734), reinterpret_cast<AsdProcFunc>(LAB_002c9d94), reinterpret_cast<u32>(work));
    work->drawTaskA = taskCreateDraw(LAB_00269ba4, 0x6f, 1, 0, LAB_0020ed68, 0, g_bible.work, work->task);
    work->drawTaskB = taskCreateDraw(LAB_00269bb4, 0xe6, 1, 0, LAB_002c9df8, 0, g_bible.work, work->task);
}

} /* extern "C" */
