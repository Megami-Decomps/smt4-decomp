/* NON_MATCHING: the stores, constants and the cursor room/advance tests match; retail is a leaf without lr (r4-fp only: global cursor address in fp, zero in r6, word index in r4, slot in r7, no hoisted stream-list address) and reloads the stream list by writeback, while this build keeps the global cursor address in lr, hoists the list address in r9 and allocates the rest in another order. */
#include "shard/S1NwGfx.h"

// A region of the command buffer with its own write cursor; a null cursor means the global one.
struct CommandRegion {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 *end;
    /* 0x08 */ u8 *cursor;
};

// One vertex attribute stream of a shape.
struct VertexAttributeStream {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 flags;           // 1: no register, 2: occupies several components
    /* 0x0C */ u8 unk0c[0x1c];
    /* 0x28 */ s32 componentCount;
};

// The part of a shape resource that lists its attribute streams.
struct ShapeAttributeView {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 attributeCount;
    /* 0x3C */ RelativePointer attributes; // relative pointer to `attributeCount` relative pointers to VertexAttributeStream
};

extern "C" {
extern u8 *g_commandBufferCursor;
extern u8 *g_commandBufferEnd;

// Appends the vertex-attribute setup commands for `shape` (buffer layout, one register per stream and the
// per-component source selectors) to the command buffer; returns the size in bytes. The cursor only moves
// when the commands fit.
// The write cursor of `region`, or the global one for a region without its own.
static __inline u8 *regionCursor(const CommandRegion *region)
{
    return region->cursor != NULL ? region->cursor : g_commandBufferCursor;
}

// Whether `bytes` more commands fit in `region`.
static __inline bool regionHasRoom(const CommandRegion *region, s32 bytes)
{
    if (region->cursor != NULL) {
        return region->end >= region->cursor + bytes;
    }
    return g_commandBufferEnd >= g_commandBufferCursor + bytes;
}

// Moves the write cursor of `region` (or the global one) past `bytes`.
static __inline void regionAdvance(CommandRegion *region, s32 bytes)
{
    if (region->cursor != NULL) {
        region->cursor += bytes;
    } else {
        g_commandBufferCursor += bytes;
    }
}

s32 FUN_0014011c(CommandRegion *region, ShapeAttributeView *shape)
{
    s32 componentTotal = 0;
    s32 slot = 0;
    s32 word = 0;
    u32 *words = reinterpret_cast<u32 *>(regionCursor(region));
    s32 count = shape->attributeCount;
    for (s32 i = 0; i < count; ++i) {
        RelativePointer *streams = static_cast<RelativePointer *>(shape->attributes.get());
        VertexAttributeStream *stream = static_cast<VertexAttributeStream *>(streams[i].get());
        u32 flags = stream->flags;
        if (flags & 1) {
            componentTotal += 1;
        } else if (flags & 2) {
            words[word] = 0;
            words[word + 1] = ((slot * 3 + 0x205) & 0xffff) | 0xf0000;
            componentTotal += stream->componentCount;
            word += 2;
            slot += 1;
        } else {
            words[word] = 0;
            words[word + 1] = ((slot * 3 + 0x205) & 0xffff) | 0xf0000;
            componentTotal += 1;
            word += 2;
            slot += 1;
        }
    }
    words[word++] = 0x76543210;
    words[word++] = 0x801f02bb;
    words[word++] = 0xba98;
    words[word++] = 0;
    words[word++] = (((1 << componentTotal) - 2) << 16) | ((componentTotal - 1) << 28);
    words[word++] = 0xf0202;
    for (s32 i = 1; i < componentTotal; ++i) {
        words[word] = i;
        words[word + 1] = 0x803f0232;
        words[word + 2] = 0;
        words[word + 3] = 0;
        words[word + 4] = 0;
        words[word + 5] = 0;
        word += 6;
    }
    s32 bytes = word * 4;
    if (regionHasRoom(region, bytes)) {
        regionAdvance(region, bytes);
    }
    return bytes;
}
}
