#include "classes/Obj55c89c.h"

/* Constructs the mode-specific menu and initializes its handlers. */
Obj55c89c::Obj55c89c(u32 initialMode)
{
    mode = initialMode;
    resetHandlers();
}
