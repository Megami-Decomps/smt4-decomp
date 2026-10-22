/* NON_MATCHING: Retail instruction scheduling/register allocation differs (12 retail versus 11 compiled rows). */
#include "classes/Obj55984c.h"

/* Forward the packet and its arguments to the selected child. */
void Obj55984c::vfunc10(const void *packet, u32 argument, u32 size)
{
    childAt(((const Packet *)packet)->childIndex)->vfunc10(packet, argument, size);
}
