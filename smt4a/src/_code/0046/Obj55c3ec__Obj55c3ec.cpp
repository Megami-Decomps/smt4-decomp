#include "classes/Obj55c3ec.h"
#include "nn/os/CriticalSection.h"

/* Builds the block list and brings up the lock that guards it. */
Obj55c3ec::Obj55c3ec()
{
    nn_os_CriticalSection_Initialize(&lock);
}
