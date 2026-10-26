#include "classes/Obj421aa4Requests.h"
#include "classes/Obj421f18.h"

// Enqueues a type-0x13 sound request carrying two words.
extern "C" void soundVoicePostWords13(Obj421f18 *owner, u32 first, u32 second)
{
    Obj421aa4Manager *manager = FUN_002baed8();
    Obj421aa4NodeWide *node = (Obj421aa4NodeWide *)soundRequestBegin(manager, 7);
    node->type = 0x13;
    node->id = (u32)&owner->params;
    node->word = first;
    node->word2 = second;
    listAppendNode(manager, node);
}
