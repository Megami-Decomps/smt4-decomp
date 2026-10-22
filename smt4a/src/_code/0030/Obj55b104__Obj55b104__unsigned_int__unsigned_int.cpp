/* NON_MATCHING: constructor argument preservation and shared-buffer field scheduling differ. */
#include "classes/Obj55b104.h"

/* Initializes the byte-buffer state and allocates its optional starting capacity. */
Obj55b104::Obj55b104(u32 initialCapacity, u32 initialOffset)
    : offset(initialOffset)
{
    initCapacity(initialCapacity);
}
