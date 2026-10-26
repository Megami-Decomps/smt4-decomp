/* NON_MATCHING: task names, debug trace and callbacks now match retail (the LAB_ symbols were strings and functions); remaining differences are register choice and scheduling (retail loads the callbacks later and stores the draw-task arguments separately instead of with strd). */
/* Opens the bible screen: allocates its work area and creates its task and two draw tasks. */
#include "common.h"
#include "bible/bibleMain.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

typedef void (*VoidFunc)(void);

u32 taskCreateDraw(const char *name, int priority, int arg2, int arg3, VoidFunc cb, int arg5, void *work, u32 parent);
u32 jyoucyuGetTableEntry(int index);               /* heap handle `index` */
void FUN_001e4734(void);
void bibleQueryFalse(void);
void FUN_002c9d94(void);
void FUN_002c9df8(void);

extern BibleGlobals g_bible;

void bibleStart(void)
{
    jyoucyuGetTableEntry(0);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\bible\\bibleMain.cpp", 171);
    BibleWork *work = (BibleWork *)asdMemAlloc(0x100, 0x100, 0, 0x20, 1);
    g_bible.work = work;
    work->unk0d = 0;
    work->done = 0;
    work->unk10 = 1;
    work->unk14 = 1;
    work->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>("BibleMainProc"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_001e4734), reinterpret_cast<AsdProcFunc>(FUN_002c9d94), reinterpret_cast<u32>(work));
    work->drawTaskA = taskCreateDraw("BibleDrawUp", 0x6f, 1, 0, bibleQueryFalse, 0, g_bible.work, work->task);
    work->drawTaskB = taskCreateDraw("BibleDrawDown", 0xe6, 1, 0, FUN_002c9df8, 0, g_bible.work, work->task);
}

} /* extern "C" */
