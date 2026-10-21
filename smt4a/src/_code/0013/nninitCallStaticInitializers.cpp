/* NON_MATCHING: retail maps both constructor-array boundary addresses to one global symbol; distinct linker boundary symbols are required. */
#include "common.h"

extern "C" {

extern void (*__init_array_start[])(void);
extern void (*__init_array_end[])(void);

/* Runs the linker-provided static constructor array. */
void nninitCallStaticInitializers(void)
{
    for (void (**constructor)(void) = __init_array_start; constructor < __init_array_end; ++constructor) {
        (*constructor)();
    }
}

} /* extern "C" */
