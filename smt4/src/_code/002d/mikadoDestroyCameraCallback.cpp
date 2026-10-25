#include "mikado/mikadoMain.h"

extern "C" void asdMemFreeNonNull(void *block);
inline void MikadoCamera::operator delete(void *block)
{
    asdMemFreeNonNull(block);
}

extern "C" {
extern MikadoGlobals g_mikado;
void FUN_002a7838(MikadoCamera *camera);
void asdMemFreeNonNull(void *block);
s32 jyoucyuGetTableEntry(s32 index);

// Finish the mikado controller and release its camera resources.
void mikadoDestroyCameraCallback(u32 handle)
{
    MikadoWork *work = g_mikado.work;
    work->done = 1;
    if (work->camera != NULL) {
        FUN_002a7838(work->camera);
        if (work->camera != NULL)
            delete work->camera;
        work->camera = NULL;
    }
    jyoucyuGetTableEntry(0);
}
}
