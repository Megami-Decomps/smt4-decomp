#include "classes/Obj421aa4Requests.h"

// Enqueues a type-0x30 sound-manager request.
extern "C" void soundRequestPostType30(u32 id, void *argument)
{
    Obj421aa4Manager *manager = FUN_002baed8();
    Obj421aa4Node *node = soundRequestBegin(manager, 6);
    node->type = 0x30;
    node->id = id;
    node->arg = argument;
    listAppendNode(manager, node);
}
