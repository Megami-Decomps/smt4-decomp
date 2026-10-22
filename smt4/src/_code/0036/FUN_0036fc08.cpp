/* NON_MATCHING: relative-pointer null paths and loop-base hoisting use different instructions/registers; 58 built versus 60 retail rows. */
#include "shard/S1NwGfx.h"

extern "C" void FUN_0036e8e4(void **attribute, u32 flags);
extern "C" void nw_gfx_res_ResVertexAttribute_Setup(void **attribute);

extern "C" void FUN_0036fc08(u32 flags, ShapeResource *resource)
{
    // Setup also reads fields beyond ShapeResource's shared 0x34-byte prefix.
    struct ShapeSetupView {
        u8 prefix[0x2C];
        s32 primitiveCount;
        RelativePointer primitives;
        u32 unk34;
        s32 attributeCount;
        RelativePointer attributes;
    };
    struct PrimitiveSetView {
        u8 prefix[0xC];
        s32 attributeCount;
        RelativePointer attributes;
    };
    ShapeSetupView *shape = reinterpret_cast<ShapeSetupView *>(resource);
    s32 primitiveCount = shape->primitiveCount;
    for (s32 index = 0; index < primitiveCount; ++index) {
        RelativePointer *primitives = static_cast<RelativePointer *>(shape->primitives.get());
        PrimitiveSetView *primitive = static_cast<PrimitiveSetView *>(primitives[index].get());
        RelativePointer *attribute = static_cast<RelativePointer *>(primitive->attributes.get());
        RelativePointer *end = attribute + primitive->attributeCount;
        for (; attribute != end; ++attribute) {
            void *data = attribute->get();
            FUN_0036e8e4(&data, flags);
        }
    }
    s32 attributeCount = shape->attributeCount;
    for (s32 index = 0; index < attributeCount; ++index) {
        RelativePointer *attributes = static_cast<RelativePointer *>(shape->attributes.get());
        void *data = attributes[index].get();
        nw_gfx_res_ResVertexAttribute_Setup(&data);
    }
}
