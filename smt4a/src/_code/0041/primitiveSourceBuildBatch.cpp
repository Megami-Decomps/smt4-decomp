/* NON_MATCHING: retail derives the stack object's base from array-constructor return values; explicit work initialization uses SP and different vector stores. */
#include "common.h"
#include "gfx/VertexStreams.h"

struct PrimitiveBatch {
    /* 0x00 */ u8 storage[0x70];
};

struct PrimitiveVector {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ f32 x;
    /* 0x08 */ f32 y;
    /* 0x0c */ f32 z;
    /* 0x10 */ f32 w;
};

struct PrimitiveBatchWork {
    /* 0x000 */ u32 count;
    /* 0x004 */ u8 state[0x150];
    /* 0x154 */ u8 active[12];
    /* 0x160 */ PrimitiveBatch batches[12];
    /* 0x6a0 */ PrimitiveVector vectors[12];
};

struct PrimitiveIndices {
    /* 0x00 */ u32 address;
    /* 0x04 */ u32 count;
    /* 0x08 */ u8 owned;
};

struct PrimitiveSource {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 flags;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ u32 indexCount;
    /* 0x1c */ u8 unk1c[0x2c];
    /* 0x48 */ u16 *indices;
};

extern "C" {
void *__aeabi_vec_ctor_nocookie_nodtor(void *array, void (*construct)(void *), u32 size, u32 count);
void FUN_0042cbb0(void *);
void FUN_0042cb68(void *);
void FUN_0042cb74(PrimitiveBatch *);
void sysMemClear(void *, u32);
void FUN_00412b3c(PrimitiveSource *, PrimitiveBatchWork *);
void FUN_00412c54(PrimitiveSource *, PrimitiveBatchWork *);
void *asdPrimAlloc(u32 size);
void rt_memcpy(void *destination, const void *source, u32 size);
void FUN_00412678(PrimitiveSource *, PrimitiveBatchWork *, PrimitiveIndices *);

// Build a temporary primitive batch, copying indices when the source is not directly usable.
void primitiveSourceBuildBatch(PrimitiveSource *source)
{
    if (source->indexCount != 0) {
        PrimitiveBatchWork work;
        __aeabi_vec_ctor_nocookie_nodtor(work.batches, FUN_0042cbb0, sizeof(PrimitiveBatch), 12);
        __aeabi_vec_ctor_nocookie_nodtor(work.vectors, FUN_0042cb68, sizeof(PrimitiveVector), 12);
        work.count = 0;
        sysMemClear(work.state, sizeof(work.state));
        for (u32 i = 0; i < 12; ++i) {
            work.active[i] = 0;
            FUN_0042cb74(&work.batches[i]);
            work.vectors[i].active = 0;
            work.vectors[i].x = 0.0f;
            work.vectors[i].y = 0.0f;
            work.vectors[i].z = 0.0f;
            work.vectors[i].w = 0.0f;
        }
        PrimitiveIndices indices = {0, 0, 0};
        if (source->flags & 0x100) {
            FUN_00412b3c(source, &work);
            indices.address = asdGxGetPhysicalAddress(reinterpret_cast<u32>(source->indices));
            indices.count = source->indexCount;
        } else {
            FUN_00412c54(source, &work);
            u32 count = source->indexCount;
            void *copy = asdPrimAlloc(count * sizeof(u16));
            rt_memcpy(copy, source->indices, count * sizeof(u16));
            indices.address = asdGxGetPhysicalAddress(reinterpret_cast<u32>(copy));
            indices.count = count;
        }
        indices.owned = 0;
        FUN_00412678(source, &work, &indices);
    }
}
}
