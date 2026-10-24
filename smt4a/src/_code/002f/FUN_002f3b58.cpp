/* NON_MATCHING: retail stores the id through r0 (the hook argument) and has no second nop; the weak debug hook's argument/placement is not recovered */
#include "classes/ObjectRegistry.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

void FUN_002f3b58(ObjectRegistry *registry, u32 id, Obj558d20 *object)
{
    object->id = id;
    asdDebugHookPass(object);
    FUN_00110654(registry, object);
}

} /* extern "C" */
