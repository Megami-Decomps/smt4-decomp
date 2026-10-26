#include "classes/Obj421aa4Requests.h"

/* A byte stream with a start offset at 0xC and a cursor at 0x14. */
struct SoundStreamCursor {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 start;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 cursor;
};

// Enqueues a type-0x30 sound request for the bytes consumed since `start`, then rewinds the cursor.
extern "C" void soundStreamPostConsumed(SoundStreamCursor *stream)
{
    Obj421aa4Manager *manager = FUN_002baed8();
    Obj421aa4Node *node = soundRequestBegin(manager, 6);
    node->type = 0x30;
    node->id = stream->start;
    node->word = stream->cursor - stream->start;
    listAppendNode(manager, node);
    stream->cursor = stream->start;
}
