#include "classes/Obj421f54.h"
#include "nn/os/CriticalSection.h"

/* Builds the block list and brings up the lock that guards it. */
Obj421f54::Obj421f54()
{
    nn_os_CriticalSection_Initialize(&lock);
}
