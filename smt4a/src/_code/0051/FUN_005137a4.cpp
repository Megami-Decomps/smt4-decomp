/* NON_MATCHING: the retail unit is `ldr r0, [r0, #4]` plus a branch-to-next linker NOP into the empty function that follows (its `bx lr` is counted in this unit); the call is not a weak-hook call, so the build adds a push/pop. Needs a boundary split. */
#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

struct FUN_005137a4View {
    u8 unk00[0x4];
    void * value;
};

void *FUN_005137a4(const FUN_005137a4View *self)
{
    return asdDebugHookPass(self->value);
}

} /* extern "C" */
