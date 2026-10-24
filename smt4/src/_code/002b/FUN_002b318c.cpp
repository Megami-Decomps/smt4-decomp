#include "common.h"

struct Object002b318c {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ const void *target;
};

extern "C" {

__declspec(noreturn) __weak void FUN_002b318c_hook(const void *target);

/* Calls the engine's (removed) noreturn hook with the object's target; armlink turned the tail branch into a nop. */
void FUN_002b318c(const Object002b318c *object)
{
    FUN_002b318c_hook(object->target);
}

} /* extern "C" */
