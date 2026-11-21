/* NON_MATCHING: rewritten from the draft (nw::gfx::Fog::Initialize); same flow, checks and updater swap, but retail keeps the result in r5, the allocator in r6 and rematerialises the clearing zero in r4. */
#include "common.h"
#include <new>
#include "gfx/GfxResult.h"

/* nw::os::IAllocator: slot 2 allocates, slot 3 frees. */
class FogAllocator {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void *allocate(u32 size, u32 alignment);   /* +0x08 */
    virtual void free(void *block);                    /* +0x0C */
};

/* The fog's 16-byte updater block. */
struct FogUpdater {
    u8 bytes[16];
};

/* An owning pointer that frees through the allocator it came from (nw::ut::MovePtr). */
template <typename T>
struct FogMovePtr {
    FogMovePtr(T *pointer, FogAllocator *allocator) : pointer(pointer), allocator(allocator) {}
    ~FogMovePtr()
    {
        if (pointer != NULL) {
            allocator->free(pointer);
        }
    }
    FogMovePtr &operator=(FogMovePtr &other)
    {
        if (this != &other) {
            T *newPointer = other.pointer;
            FogAllocator *newAllocator = other.allocator;
            other.pointer = pointer;
            other.allocator = allocator;
            pointer = newPointer;
            allocator = newAllocator;
        }
        return *this;
    }

    T *pointer;
    FogAllocator *allocator;
};

/* Clears `size` bytes one at a time. */
static __inline void clearBytes(void *memory, u32 size)
{
    u8 *bytes = static_cast<u8 *>(memory);
    for (; size != 0; --size) {
        *bytes++ = 0;
    }
}

struct Fog {
    /* 0x000 */ u8 unk000[0x150];
    /* 0x150 */ FogMovePtr<FogUpdater> updater;
};

extern "C" {
GfxResult nw_gfx_TransformNode_Initialize(Fog *fog, FogAllocator *allocator);
GfxResult nw_gfx_Fog_CreateOriginalValue(Fog *fog, FogAllocator *allocator);
GfxResult nw_gfx_Fog_CreateAnimGroup(Fog *fog, FogAllocator *allocator);

/* nw::gfx::Fog::Initialize: the transform node, a cleared updater block, the original values and
 * the animation group, stopping at the first failure. */
GfxResult FUN_0036e0fc(Fog *fog, FogAllocator *allocator)
{
    GfxResult result;
    result |= nw_gfx_TransformNode_Initialize(fog, allocator);
    if (result.isFailure()) {
        return result;
    }
    FogUpdater *updater = static_cast<FogUpdater *>(allocator->allocate(sizeof(FogUpdater), 4));
    clearBytes(updater, sizeof(FogUpdater));
    if (updater == NULL) {
        result |= 0x80000000;
    } else {
        FogMovePtr<FogUpdater> pointer(updater, allocator);
        fog->updater = pointer;
    }
    if (result.isFailure()) {
        return result;
    }
    result |= nw_gfx_Fog_CreateOriginalValue(fog, allocator);
    if (result.isFailure()) {
        return result;
    }
    result |= nw_gfx_Fog_CreateAnimGroup(fog, allocator);
    return result;
}
}
