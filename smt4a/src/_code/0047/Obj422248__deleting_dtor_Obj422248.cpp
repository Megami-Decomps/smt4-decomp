#include "classes/Obj422248.h"
#include "addon/aocMain.h"

extern "C" void FUN_001b3428(AocWorkerThread *thread);
extern "C" void asdOperatorDelete(void *memory);

void Obj422248::operator delete(void *memory)
{
    asdOperatorDelete(memory);
}

Obj422248::~Obj422248()
{
    FUN_001b3428(&g_aocMain->thread);
}
