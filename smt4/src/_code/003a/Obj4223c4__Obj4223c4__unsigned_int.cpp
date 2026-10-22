/* NON_MATCHING: the mode argument and returned this still occupy different registers from retail. */
#include "classes/Obj4223c4.h"

/* Initializes the selected menu mode after constructing the selection base. */
Obj4223c4::Obj4223c4(u32 initialMode)
{
    mode = initialMode;
    resetHandlers();
}
