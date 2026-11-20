#include "classes/Obj4221bc.h"
#include "addon/aocMain.h"

extern "C" {
void nnOsThreadImplDestroy(AocWorkerThread *thread);
void asdOperatorDelete(void *memory);
}

inline void Obj4221bc::operator delete(void *memory)
{
    asdOperatorDelete(memory);
}

/* Release the resources associated with this status window. */
Obj4221bc::~Obj4221bc()
{
    nnOsThreadImplDestroy(&g_aocMain->thread);
}
