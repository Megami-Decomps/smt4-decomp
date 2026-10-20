/* NON_MATCHING: retail keeps the lookup code in r0 (zero constant in r1) and tests the sign bit with `ands r2, r0, #0x80000000; bpl`; this build moves the code to r1 and tests with tst/beq */
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

extern Node *FUN_002a1130(u32 arg, s32 index);
extern s32 FUN_002c3dfc(NameBuffer *name);
extern Pair *FUN_002baa40(Pair *out, s32 code);

/* Consumes the request's pending name: clears it and, when its lookup code has the high bit set, copies the resulting pair into the node. */
void FUN_002a126c(u32 arg, Request *request)
{
    Node *node = FUN_002a1130(arg, 0);

    if (request->pending != 0) {
        s32 code = FUN_002c3dfc(&request->name);
        Pair local;

        request->name.words[0] = 0;
        request->name.words[1] = 0;
        request->name.words[2] = 0;
        request->name.words[3] = 0;
        request->pending = 0;
        if ((code & 0x80000000) != 0) {
            node->pair = *FUN_002baa40(&local, code);
        }
    }
}

} /* extern "C" */
