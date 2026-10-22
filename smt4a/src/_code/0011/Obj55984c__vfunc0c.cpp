/* NON_MATCHING: Retail instruction scheduling/register allocation differs (19 retail versus 18 compiled rows). */
#include "classes/Obj55984c.h"

/* Forward the packet and its arguments to the selected child. */
void Obj55984c::vfunc0c(const void *packet, u32 argument, u32 size, u32 fourth, u32 fifth, u32 sixth, u32 seventh)
{
    childAt(((const Packet *)packet)->childIndex)->vfunc0c(packet, argument, size, fourth, fifth, sixth, seventh);
}
