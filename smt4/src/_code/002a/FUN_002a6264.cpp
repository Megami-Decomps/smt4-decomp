/* NON_MATCHING: optimizer folds repeated relative-pointer loads and null/cast tests; 76 versus retail 93 instructions, -O2 candidate. */
#include "shard/W6_W6Match4_RelativeResourceGraph.h"
#include "shard/S1NwGfx.h"

// Set the memory-pool flags on interleaved vertex streams throughout the graphics file.
extern "C" void FUN_002a6264(GraphicsResourceFile *file, u32 memoryFlags)
{
    // Both records extend past the shared ShapeResource/ShapeStream prefixes.
    struct ShapeStreamView {
        u32 flags;
        u8 unk04[0x34];
        u32 count;
        ResourceRelativePointer<ResourceRelativePointer<void> > streams;
        ResourceRelativePointer<void> *begin() const { return streams.get(); }
        ResourceRelativePointer<void> *end() const { return streams.get() + count; }
    };
    struct InterleavedStreamView {
        ShapeStream stream;
        u8 unk08[8];
        u32 memoryFlags;
    };
    typedef char StreamViewOffsets[__INTADDR__(&((ShapeStreamView *)0)->count) == 0x38 && __INTADDR__(&((ShapeStreamView *)0)->streams) == 0x3c && __INTADDR__(&((InterleavedStreamView *)0)->memoryFlags) == 0x10 ? 1 : -1];
    GraphicsModelDictionaryEntry *modelEnd = file->end();
    for (GraphicsModelDictionaryEntry *model = file->begin(); model != modelEnd; ++model) {
        ResourceRelativePointer<void> *shapeEnd = model->model.get()->end();
        for (ResourceRelativePointer<void> *shapeEntry = model->model.get()->begin(); shapeEntry != shapeEnd; ++shapeEntry) {
            ShapeStreamView *shape = static_cast<ShapeStreamView *>(shapeEntry->get());
            if (shape && (~shape->flags & 0x10000001))
                shape = NULL;
            if (!shape)
                continue;
            ResourceRelativePointer<void> *streamEnd = shape->end();
            for (ResourceRelativePointer<void> *streamEntry = shape->begin(); streamEntry != streamEnd; ++streamEntry) {
                InterleavedStreamView *stream = static_cast<InterleavedStreamView *>(streamEntry->get());
                if (stream && !(stream->stream.flags & 0x40000000))
                    stream = NULL;
                if (stream)
                    stream->memoryFlags = memoryFlags;
            }
        }
    }
}
