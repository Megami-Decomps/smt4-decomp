/* NON_MATCHING: register allocation only: retail keeps the count in r2 and the -1 in r1, armcc here swaps them. */
#include "common.h"

struct Vertex {
    /* 0x00 */ s32 index;
    /* 0x04 */ u8 unk04[0x18];
};

struct VertexBuffer {
    /* 0x00 */ Vertex *vertices;
};

struct VertexParams {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 count;
};

struct VertexOwner {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ VertexBuffer *buffer;
    /* 0x40 */ VertexParams *params;
};

extern "C" {

/* Virtual reset: marks every vertex index unused. */
void FUN_003034c8(VertexOwner *owner)
{
    Vertex *vertices = owner->buffer->vertices;
    s32 count = owner->params->count;
    for (s32 i = 0; i < count; i++) {
        vertices[i].index = -1;
    }
}

} /* extern "C" */
