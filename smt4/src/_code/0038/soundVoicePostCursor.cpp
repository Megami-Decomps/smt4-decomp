#include "classes/SoundCursorRequests.h"

// Enqueues a type-0x25 cursor request for the owner's parameter holder and remembers its two values.
extern "C" void soundVoicePostCursor(SoundCursorOwner *owner, u32 first, u32 second, const SoundRequestExtra *extra)
{
    Obj421aa4Manager *manager = FUN_002baed8();
    Obj421aa4NodeTen *node = (Obj421aa4NodeTen *)soundRequestBegin(manager, 10);
    node->type = 0x25;
    node->id = (u32)&owner->params;
    node->word = first;
    node->word2 = second;
    node->word3 = extra->first;
    node->word4 = extra->mode;
    node->word5 = extra->third;
    listAppendNode(manager, node);
    owner->block.first = first;
    owner->block.second = second;
    owner->block.sent = 1;
}
