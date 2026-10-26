#include "classes/Obj421aa4Requests.h"

// Enqueues a type-0xb sound request for the object, carrying one byte.
extern "C" void soundObjectPostByte0b(Obj421aa4 *object, u8 value)
{
    Obj421aa4Manager *manager = FUN_002baed8();
    Obj421aa4Node *node = soundRequestBegin(manager, 6);
    node->type = 0xb;
    node->id = object->vfunc20();
    node->byte = value;
    listAppendNode(manager, node);
}
