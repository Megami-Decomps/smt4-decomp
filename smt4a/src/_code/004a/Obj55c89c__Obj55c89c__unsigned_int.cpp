/* NON_MATCHING: the constructor argument and returned this occupy r5/r4 instead of retail's r4/r5. */
#include "classes/Obj55c89c.h"

/* Constructs the mode-specific menu and initializes its handlers. */
Obj55c89c::Obj55c89c(u32 initialMode)
{
    mode = initialMode;
    resetHandlers();
}
