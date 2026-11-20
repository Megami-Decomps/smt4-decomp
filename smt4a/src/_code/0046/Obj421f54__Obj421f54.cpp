/* NON_MATCHING: all 16 instructions match smt4 Obj421f54::Obj421f54; only the smt4a symbol names differ (vtable _ZTV9Obj55c3ec and subobject ctor nw_snd_internal_FrameHeap_FrameHeap_sub_object_380298). */
#include "classes/Obj421f54.h"
#include "nn/os/CriticalSection.h"

/* Builds the block list and brings up the lock that guards it. */
Obj421f54::Obj421f54()
{
    nn_os_CriticalSection_Initialize(&lock);
}
