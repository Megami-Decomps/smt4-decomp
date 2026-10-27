#include "mikado/mikadoMain.h"

extern "C" void asdOperatorDelete(void *block);
inline void MikadoCamera::operator delete(void *block)
{
    asdOperatorDelete(block);
}

extern "C" {
extern MikadoGlobals g_mikado;
void FUN_0019e290(MikadoCamera *camera);
void asdOperatorDelete(void *block);
s32 jyoucyuGetTableEntry(s32 index);

// Finish the mikado controller and release its camera resources.
void mikadoControllerFinish(u32 handle)
{
    MikadoWork *work = g_mikado.work;
    work->done = 1;
    if (work->camera != NULL) {
        FUN_0019e290(work->camera);
        if (work->camera != NULL)
            delete work->camera;
        work->camera = NULL;
    }
    jyoucyuGetTableEntry(0);
}
}
