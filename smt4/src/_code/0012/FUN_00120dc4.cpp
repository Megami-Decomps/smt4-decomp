/* NON_MATCHING: register allocation only: retail keeps the argument in r6, the source in r4, the manager in r5 and the node in r0 until the final call; built uses r5/r4/r6 and copies the node to r1 early. */
#include "common.h"

extern "C" {

typedef struct Source Source;

typedef struct SourceVtable {
    /* 0x00 */ void (*unk00[2])(Source *source);
    /* 0x08 */ s32 (*isReady)(Source *source);
} SourceVtable;

struct Source {
    /* 0x0 */ SourceVtable *vtable;
};

typedef struct Node {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 type;
    /* 0x05 */ u8 unk05[7];
    /* 0x0C */ u32 stamp;
    /* 0x10 */ u8 arg;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ Source *source;
} Node;

typedef struct Manager {
    /* 0x000 */ u8 unk000[0x184];
    /* 0x184 */ u32 stamp;
} Manager;

Manager *FUN_002baed8(void);
Node *FUN_002b4f64(Manager *manager, s32 kind);
s32 listAppendNode(Manager *manager, Node *node);

/* Queues a type 0x33 node for the source when it reports ready; returns whether it did. */
u8 FUN_00120dc4(u8 arg, Source *source)
{
    s32 ready = source->vtable->isReady(source);

    if (ready != 0) {
        Manager *manager = FUN_002baed8();
        Node *node = FUN_002b4f64(manager, 7);

        node->stamp = manager->stamp;
        node->type = 0x33;
        node->arg = arg;
        node->source = source;
        listAppendNode(manager, node);
    }
    return ready != 0;
}

} /* extern "C" */
