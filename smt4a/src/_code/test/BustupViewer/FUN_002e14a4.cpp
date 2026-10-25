/* NON_MATCHING: only the first asdProcessCreateSimple call's stack-argument setup differs (r2/r1/r0 chosen where retail uses r1/r0/ip) */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "test/BustupViewerState.h"

extern "C" {

void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 region, u32 size, u32 option);
void *asdLoadFileSyncDefault(const char *path);
void taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                    AsdProcUpdateFunc update, AsdProcFunc end, u32 work, void *owner);
u32 spriteHandleCreate(u32 arg);
void bustupViewerResetState(void);
void bustupViewerActivate(u32 handle);
s32 FUN_003150f4(u32 handle);
s32 FUN_003692c0(u32 handle);
void FUN_003a3b84(u32 handle);

extern BustupViewerState *g_bustupViewer;

/* Creates the debug bust-up viewer: its work area, the bust-up list, and the update and draw tasks. */
void FUN_002e14a4(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\test\\BustupViewer.cpp", 264);
    BustupViewerState *viewer = g_bustupViewer = (BustupViewerState *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(BustupViewerState), 1);
    viewer->unk08 = 0;
    viewer->unk0C = 0;
    viewer->unk10 = 0;
    viewer->unk40 = 0;
    viewer->unk9C = 0;
    viewer->fileData = 0;
    viewer->unk44 = 0;
    bustupViewerResetState();
    viewer->unk48 = 26;
    viewer->unk4C = 30;
    viewer->fileData = asdLoadFileSyncDefault("test/bustup_viewer.bf");
    viewer->text = spriteHandleCreate(0);
    viewer->done = 0;
    u32 process = asdProcessCreateSimple("BUSTUP VIEWER C", 4, 0, 0, FUN_003150f4, bustupViewerActivate, 0);
    viewer->process = process;
    taskCreateDraw("BUSTUP VIEWER D", 234, 0, 0, FUN_003692c0, FUN_003a3b84, 0, (void *)process);
}

} /* extern "C" */
