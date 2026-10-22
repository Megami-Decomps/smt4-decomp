#include "common.h"

typedef void (*SelectedCallback)(void *, u32);
struct Obj42072cValues {
    void *vtable; // 0x00
    void *context; // 0x04
    SelectedCallback *callback; // 0x08
};

// Invoke the callback with its saved context.
extern "C" void FUN_003421e4(const Obj42072cValues *object, u32 argument)
{
    (*object->callback)(object->context, argument);
}
