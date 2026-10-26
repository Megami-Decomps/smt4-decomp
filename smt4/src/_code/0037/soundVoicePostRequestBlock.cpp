#include "classes/Obj421aa4Requests.h"
#include "classes/SoundVoiceOwner.h"

// Enqueues a type-0x29 sound request for the voice's request block with two extra words.
extern "C" void soundVoicePostRequestBlock(SoundVoiceOwner *owner, u32 first, u32 second, u32 value)
{
    owner->requestValue = value;
    Obj421aa4Manager *manager = FUN_002baed8();
    Obj421aa4NodeWide *node = (Obj421aa4NodeWide *)soundRequestBegin(manager, 8);
    node->type = 0x29;
    node->id = (u32)&owner->params;
    node->word = (u32)owner->requestBlock;
    node->word2 = first;
    node->word3 = second;
    listAppendNode(manager, node);
}
