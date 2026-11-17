#include "classes/Obj422248.h"
#include "addon/aocMain.h"

extern "C" void kernelThreadJoinAndClose(AocWorkerThread *thread);
extern "C" void asdMemFreeNonNull(void *memory);

void Obj422248::operator delete(void *memory)
{
    asdMemFreeNonNull(memory);
}

Obj422248::~Obj422248()
{
    kernelThreadJoinAndClose(&g_aocMain->thread);
}
