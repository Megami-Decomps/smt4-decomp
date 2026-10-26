#include "common.h"

struct Vertex {
    /* 0x00 */ s32 index;
    /* 0x04 */ u8 unk04[0x14];
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
void FUN_00320418(VertexOwner *owner)
{
    VertexBuffer *buffer = owner->buffer;
    VertexParams *params = owner->params;
    Vertex *vertices = buffer->vertices;
    s32 count = params->count;

    for (s32 i = 0; i < count; i++)
        vertices[i].index = -1;
}

} /* extern "C" */
