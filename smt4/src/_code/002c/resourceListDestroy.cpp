#include "common.h"

extern "C" {

typedef struct HandlerEntry {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void (*release)(u32 arg);
    /* 0x14 */ u8 unk14[0x30];
} HandlerEntry;

extern HandlerEntry g_handlerTable[]; /* 0x464110 */

typedef struct Request {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 index;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 arg;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 bufferA;
    /* 0x1C */ u8 unk1C[4];
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 bufferB;
} Request;

int asdMemFree(u32 ptr);

typedef struct Node {
    /* 0x00 */ u8 unk00[0x90];
    /* 0x90 */ Request *request;
    /* 0x94 */ u8 unk94[4];
    /* 0x98 */ u32 flags;
    /* 0x9C */ u8 unk9C[0x10];
    /* 0xAC */ struct Node *next;
} Node;

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ Node *head;
} Owner;

/* Releases every node of the owner's list (and its request, unless flag 1 marks it as borrowed), then the owner. */
void resourceListDestroy(Owner *owner)
{
    Node *node = owner->head;
    Node *next;
    Request *request;

    while (node != NULL) {
        next = node->next;
        if ((node->flags & 1) == 0) {
            request = node->request;
            if (request->arg != 0) {
                g_handlerTable[request->index].release(request->arg);
            }
            if (request->bufferA != 0) {
                asdMemFree(request->bufferA);
                request->unk10 = 0;
                request->unk14 = 0;
                request->bufferA = 0;
            }
            if (request->bufferB != 0) {
                asdMemFree(request->bufferB);
                request->unk20 = 0;
                request->unk24 = 0;
                request->bufferB = 0;
            }
            asdMemFree((u32)request);
        }
        asdMemFree((u32)node);
        node = next;
    }
    asdMemFree((u32)owner);
}

} /* extern "C" */
