#include "classes/Obj421aa4Requests.h"
#include "classes/Obj421f18.h"

// Enqueues a type-0x26 sound request carrying one word.
extern "C" void soundVoicePostWord26(Obj421f18 *owner, u32 value)
{
    Obj421aa4Manager *manager = FUN_002baed8();
    Obj421aa4Node *node = soundRequestBegin(manager, 6);
    node->type = 0x26;
    node->id = (u32)&owner->params;
    node->word = value;
    listAppendNode(manager, node);
}
