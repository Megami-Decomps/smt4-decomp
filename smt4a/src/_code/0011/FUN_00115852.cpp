/* NON_MATCHING: retail materializes the packet kind byte on the stack before its tail dispatch. */
#include "classes/Obj55984c.h"

/* Route the notification to either the indexed child or the special packet handler. */
extern "C" void FUN_00115852(Obj55984c *object, const Obj55984c::Packet *packet,
                            u32 argument)
{
    Obj55984cChild *child = (packet->kind >> 4) == 11
        ? object->extraChild() : object->childAt(packet->childIndex);
    child->notify(packet, argument);
}
