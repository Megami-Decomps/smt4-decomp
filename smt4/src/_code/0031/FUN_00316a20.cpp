/* NON_MATCHING: the links sub-block pointer (ldr r3,[r0,#60]!) now matches retail; retail also hoists `mov r1,#0` and returns with bxls before the push, the build emits bxeq and a second loop-entry test. */
#include "common.h"

struct SlotEntry {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 unk04[0x2c];
};

struct Vertex {
    /* 0x00 */ f32 r;
    /* 0x04 */ f32 g;
    /* 0x08 */ f32 b;
    /* 0x0C */ f32 a;
};

struct VertexBuffer {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Vertex *vertices;
};

struct SlotList {
    /* 0x00 */ SlotEntry *entries;
    /* 0x04 */ VertexBuffer *buffer;
};

struct SlotSetup {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 count;
};

struct SlotLinks {
    /* 0x00 */ SlotList *list;
    /* 0x04 */ SlotSetup *setup;
};

struct SlotOwner {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3C */ SlotLinks links;
};

typedef char SlotEntrySize[sizeof(SlotEntry) == 0x30 ? 1 : -1];

extern "C" {

extern u8 DAT_00472560[4];   /* RGBA colour bytes */

/* Virtual slot: frees every slot entry and paints each vertex with the colour, converted from bytes (/255) twice. */
void FUN_00316a20(SlotOwner *self)
{
    SlotLinks *links = &self->links;
    SlotList *list = links->list;
    u32 count = links->setup->count;
    SlotEntry *entry = list->entries;

    if (count == 0) {
        return;
    }
    for (u32 index = 0; index < count; index++) {
        Vertex *vertex = &list->buffer->vertices[(u16)index];

        vertex->r = DAT_00472560[0] * (1.0f / 255.0f) * (1.0f / 255.0f);
        vertex->g = DAT_00472560[1] * (1.0f / 255.0f) * (1.0f / 255.0f);
        vertex->b = DAT_00472560[2] * (1.0f / 255.0f) * (1.0f / 255.0f);
        vertex->a = DAT_00472560[3] * (1.0f / 255.0f) * (1.0f / 255.0f);
        entry->id = -1;
        entry++;
    }
}

} /* extern "C" */
