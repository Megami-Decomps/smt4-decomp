/* NON_MATCHING: the empty-count exit before the push (bxls) and the per-iteration colour address now match retail; retail sets the index register before loading the count (the build: after, from a moved load order) and allocates -1, the halfword index and the colour byte to r6/r5/r7 where armcc uses r5/r7/r4. */
#include "common.h"
#include "gfx/VertexColor.h"

struct SlotEntry {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 unk04[0x2c];
};

struct VertexBuffer {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ VertexColor *vertices;
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

    for (u32 index = 0; index < count; index++) {
        VertexColor *vertex = &list->buffer->vertices[(u16)index];

        const u8 *rgba = DAT_00472560;
        vertex->r = rgba[0] * (1.0f / 255.0f) * (1.0f / 255.0f);
        vertex->g = rgba[1] * (1.0f / 255.0f) * (1.0f / 255.0f);
        vertex->b = rgba[2] * (1.0f / 255.0f) * (1.0f / 255.0f);
        vertex->a = rgba[3] * (1.0f / 255.0f) * (1.0f / 255.0f);
        entry->id = -1;
        entry++;
    }
}

} /* extern "C" */
