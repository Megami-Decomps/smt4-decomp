#include "classes/Obj421aa4Requests.h"

extern "C" {

typedef struct Source Source;

typedef struct SourceVtable {
    /* 0x00 */ void (*unk00[2])(Source *source);
    /* 0x08 */ s32 (*isReady)(Source *source);
} SourceVtable;

struct Source {
    /* 0x0 */ SourceVtable *vtable;
};

/* Queues a type 0x33 node for the source when it reports ready; returns whether it did. */
u8 soundSourceQueueReadyRequest(u8 arg, Source *source)
{
    s32 ready = source->vtable->isReady(source);

    if (ready != 0) {
        Obj421aa4Manager *manager = FUN_002baed8();
        Obj421aa4Node *node = soundRequestBegin(manager, 7);

        node->type = 0x33;
        node->idByte = arg;
        node->arg = source;
        listAppendNode(manager, node);
    }
    return ready != 0;
}

} /* extern "C" */
