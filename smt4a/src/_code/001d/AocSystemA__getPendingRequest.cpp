/* NON_MATCHING: signed failure-bit test matches; lookup code/zero registers remain swapped around name clearing and result construction. */
#include "common.h"

extern "C" {

/* A 16-byte name buffer that starts at an odd offset. */
typedef __packed struct NameBuffer {
    u32 words[4];
} NameBuffer;

typedef struct Pair {
    u32 first;
    u32 second;
} Pair;

typedef struct Node {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Pair pair;
} Node;

typedef struct Request {
    /* 0x000 */ u8 unk000[0x330];
    /* 0x330 */ u8 pending;
    /* 0x331 */ NameBuffer name;
} Request;

extern Node *_ZN21WindowOperationResultC1Eh(u32 arg, s32 index);
extern s32 FUN_001a0380(NameBuffer *name);
extern Pair *_ZN18WindowStatusResultC1Ej(Pair *out, s32 code);

/* Consumes the request's pending name: clears it and, when its lookup code has the high bit set, copies the resulting pair into the node. */
void _ZN10AocSystemA17getPendingRequestEv(u32 arg, Request *request)
{
    Node *node = _ZN21WindowOperationResultC1Eh(arg, 0);

    if (request->pending != 0) {
        s32 code = FUN_001a0380(&request->name);
        Pair local;

        request->name.words[0] = 0;
        request->name.words[1] = 0;
        request->name.words[2] = 0;
        request->name.words[3] = 0;
        request->pending = 0;
        s32 failure = code & 0x80000000;
        if (failure < 0) {
            node->pair = *_ZN18WindowStatusResultC1Ej(&local, code);
        }
    }
}

} /* extern "C" */
