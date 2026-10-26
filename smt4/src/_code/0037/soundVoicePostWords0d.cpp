#include "classes/Obj421aa4Requests.h"
#include "classes/Obj421f18.h"

// Enqueues a type-0xd sound request carrying three words.
extern "C" void soundVoicePostWords0d(Obj421f18 *owner, u32 first, u32 second, u32 third)
{
    Obj421aa4Manager *manager = FUN_002baed8();
    Obj421aa4NodeWide *node = (Obj421aa4NodeWide *)soundRequestBegin(manager, 8);
    node->type = 0xd;
    node->id = (u32)&owner->params;
    node->word = first;
    node->word2 = second;
    node->word3 = third;
    listAppendNode(manager, node);
}
