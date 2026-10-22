/* NON_MATCHING: Retail replays three incoming stack words not represented by the assigned three-argument signature. */
#include "classes/Obj55984c.h"

/* Forward the packet and its arguments to the selected child. */
void Obj55984c::vfunc14(const void *packet, u32 argument, u32 size)
{
    childAt(((const Packet *)packet)->childIndex)->vfunc14(packet, argument, size);
}
