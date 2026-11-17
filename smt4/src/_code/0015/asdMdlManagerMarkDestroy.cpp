#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_00152bec_hook(void *obj);

/* Marks the model object for destruction by the manager. */
void asdMdlManagerMarkDestroy(AsdMdlObject *obj)
{
    obj->flags |= 0x200000;
    FUN_00152bec_hook(obj->node);
}

} /* extern "C" */
