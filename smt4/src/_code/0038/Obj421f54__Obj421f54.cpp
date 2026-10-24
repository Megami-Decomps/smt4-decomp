#include "classes/Obj421f54.h"

extern "C" void nn_os_CriticalSection_Initialize(void *section);

/* Builds the block list and brings up the lock that guards it. */
Obj421f54::Obj421f54()
{
    nn_os_CriticalSection_Initialize(&lock);
}
