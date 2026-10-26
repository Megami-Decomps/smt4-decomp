#include "classes/ObjectCommandRequests.h"
#include "classes/Obj421aa4.h"

// Queues a type-10 command for the object carrying one option byte.
extern "C" void FUN_0045f410(Obj421aa4 *object, u8 option)
{
    ObjectCommandQueue *queue = objectCommandQueueGet();
    ObjectCommand *command = objectCommandBegin(queue, 6);
    command->kind = 10;
    command->owner = object->vfunc20();
    command->payload.bytes.option = option;
    listAppendNode(queue, command);
}
