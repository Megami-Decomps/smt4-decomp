#include "classes/Obj421aa4Requests.h"
#include "classes/Obj421f18.h"

// Enqueues a type-0x27 sound request carrying one byte.
extern "C" void soundVoicePostByte27(Obj421f18 *owner, u8 value)
{
    Obj421aa4Manager *manager = FUN_002baed8();
    Obj421aa4Node *node = soundRequestBegin(manager, 6);
    node->type = 0x27;
    node->id = (u32)&owner->params;
    node->byte = value;
    listAppendNode(manager, node);
}
