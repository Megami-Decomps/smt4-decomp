#include "classes/ObjectCommandRequests.h"
#include "classes/Obj421aa4.h"

// Queues a type-11 command for the object carrying one flag byte.
extern "C" void FUN_0045f67c(Obj421aa4 *object, u8 flag)
{
    ObjectCommandQueue *queue = objectCommandQueueGet();
    ObjectCommand *command = objectCommandBegin(queue, 6);
    command->kind = 11;
    command->owner = object->vfunc20();
    command->payload.bytes.flag = flag;
    listAppendNode(queue, command);
}
