/* NON_MATCHING: retail keeps the pre-increment index for the scaled store; the build
 * forms the slot address directly. This loop is IDENTICAL with -O2 -Otime. */
#include "gfx/NamedResourceBindings.h"

/* Binds storage and clears all entries in the resource array. */
extern "C" void FUN_0045b498(void *bindings, void *storage, u32 capacity)
{
    NamedResourceBindingArray *array = (NamedResourceBindingArray *)bindings;
    array->resources = (void **)storage;
    array->capacity = capacity;
    u32 index = 0;
    while (index < capacity) {
        (*array)[index++] = NULL;
    }
}
