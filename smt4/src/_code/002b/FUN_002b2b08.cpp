#include "common.h"

extern "C" {

typedef struct HandlerEntry {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ void (*handler)(u32 arg);
    /* 0x20 */ u8 unk20[0x24];
} HandlerEntry;

typedef struct Request {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u16 index;
    /* 0x6 */ u8 unk6[2];
    /* 0x8 */ u32 arg;
} Request;

typedef struct Node {
    /* 0x00 */ u8 unk00[0x90];
    /* 0x90 */ Request *request;
    /* 0x94 */ u8 unk94[0x18];
    /* 0xAC */ struct Node *next;
} Node;

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ u32 unk84;
    /* 0x88 */ u8 unk88[4];
    /* 0x8C */ Node *head;
} Owner;

extern HandlerEntry g_handlerTable[];

/* Runs the handler of every node's request, then clears unk84. */
void FUN_002b2b08(Owner *owner)
{
    void (*handler)(u32 arg);
    Node *node;

    for (node = owner->head; node != NULL; node = node->next) {
        handler = g_handlerTable[node->request->index].handler;
        if (handler != NULL) {
            handler(node->request->arg);
        }
    }
    owner->unk84 = 0;
}

} /* extern "C" */
