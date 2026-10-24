#include "common.h"

struct Object003b2500 {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ void *target;
};

extern "C" {

__declspec(noreturn) __weak void FUN_003b2500_hook(void *target);

/* Calls the engine's (removed) noreturn hook with the object's target; armlink turned the tail branch into a nop. */
void FUN_003b2500(Object003b2500 *object)
{
    FUN_003b2500_hook(object->target);
}

} /* extern "C" */
