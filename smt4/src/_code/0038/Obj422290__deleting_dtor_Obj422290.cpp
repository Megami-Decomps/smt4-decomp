#include "classes/Obj422290.h"
#include "addon/aocMain.h"
extern "C" {
void kernelThreadJoinAndClose(AocWorkerThread *thread);
void asdMemFreeNonNull(void *block);
}

Obj422290::~Obj422290()
{
    kernelThreadJoinAndClose(&g_aocMain->thread);
}

void Obj422290::operator delete(void *block)
{
    asdMemFreeNonNull(block);
}
