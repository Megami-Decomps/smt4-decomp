#include "classes/Obj422290.h"
#include "addon/aocMain.h"
extern "C" {
void FUN_001b3428(AocWorkerThread *thread);
void asdOperatorDelete(void *block);
}

Obj422290::~Obj422290()
{
    FUN_001b3428(&g_aocMain->thread);
}

void Obj422290::operator delete(void *block)
{
    asdOperatorDelete(block);
}
