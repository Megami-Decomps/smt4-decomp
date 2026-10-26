/* NON_MATCHING: task callbacks/names/trace now match retail; remaining differences are register choice (retail keeps the work pointer in r4 right after the allocation, loads the callbacks later) and two extra pool words. */
/* Opens the bible screen: allocates its work area and creates its task and two draw tasks. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "bible/bibleMain.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {

typedef void (*VoidFunc)(void);

u32 taskCreateDraw(const char *name, int priority, int arg2, int arg3, VoidFunc cb, int arg5, void *work, u32 parent);
void *asdMemoryAllocTracked(int heap, int align, int arg2, int size, int arg4);
u32 jyoucyuGetTableEntry(int index);               /* heap handle `index` */
void bibleCloseCurrentView(void);
void biblePollViewLifecycle(void);
void FUN_002dec44(void);
void FUN_003284c4(void);

extern BibleGlobals g_bible;

void bibleStart(void)
{
    BibleWork *work;

    jyoucyuGetTableEntry(0);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\bible\\bibleMain.cpp", 175);
    work = (BibleWork *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x20, 1);
    g_bible.work = work;
    work->unk0d = 0;
    work->unk15 = 0;
    work->done = 0;
    work->unk10 = 1;
    work->unk14 = 1;
    work->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>("BibleMainProc"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(bibleCloseCurrentView), reinterpret_cast<AsdProcFunc>(biblePollViewLifecycle), reinterpret_cast<u32>(work));
    work->drawTaskA = taskCreateDraw("BibleDrawUp", 0x71, 1, 0, FUN_002dec44, 0, g_bible.work, work->task);
    work->drawTaskB = taskCreateDraw("BibleDrawDown", 0xea, 1, 0, FUN_003284c4, 0, g_bible.work, work->task);
}

} /* extern "C" */
