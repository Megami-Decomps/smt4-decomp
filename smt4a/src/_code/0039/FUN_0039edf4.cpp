#include "common.h"

struct Object0039edf4 {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ void *target;
};

extern "C" {

__declspec(noreturn) __weak void FUN_0039edf4_hook(void *target);

/* Calls the engine's (removed) noreturn hook with the object's target; armlink turned the tail branch into a nop. */
void FUN_0039edf4(Object0039edf4 *object)
{
    FUN_0039edf4_hook(object->target);
}

} /* extern "C" */
