#include "classes/Obj4221bc.h"
#include "addon/aocMain.h"

extern "C" {
void kernelThreadJoinAndClose(AocWorkerThread *thread);
void asdMemFreeNonNull(void *memory);
}

inline void Obj4221bc::operator delete(void *memory)
{
    asdMemFreeNonNull(memory);
}

/* Release the resources associated with this status window. */
Obj4221bc::~Obj4221bc()
{
    kernelThreadJoinAndClose(&g_aocMain->thread);
}
