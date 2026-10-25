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
