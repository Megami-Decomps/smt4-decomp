#include "result/Result.h"
#include "script/scrScriptProcess.h"

extern "C" {

int fileSlotFree(int id);
int asdTMTexTableReleaseNode(int table, int index);
int messageSetConfirmDisplayMode(void);
int asdMemFree(u32 ptr);

/* Frees the result screen: its script process, buffers and textures, then the work. */
void scrResultDestroy(void)
{
    ResultWork *work = g_result;
    s32 i;

    if (g_result != NULL) {
        scrScriptProcessDestroy(g_result->process);
        asdMemFree(work->buffer3564);
        asdMemFree(work->buffer356C);
        messageSetConfirmDisplayMode();
        asdMemFree(work->buffer3570);
        fileSlotFree(0x14);
        fileSlotFree(0x25);
        i = 0;
        do {
            asdTMTexTableReleaseNode(0x28, i);
            i++;
        } while (i < 2);
        asdMemFree((u32)g_result);
        g_result = NULL;
    }
}

} /* extern "C" */
