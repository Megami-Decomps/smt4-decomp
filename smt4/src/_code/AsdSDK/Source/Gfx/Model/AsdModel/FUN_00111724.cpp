/* NON_MATCHING: creates the graphics resource context (pool, three handlers, arena, float state); written from the decompilation and the retail disassembly, the handler/arena classes are stand-ins for retail's unnamed classes (their vtables and the arena constructor's dead capacity loop are not reproduced) */
#include "classes/FloatState.h"
#include <new>

class GfxAllocator {
public:
    virtual ~GfxAllocator();
    virtual void *allocate(u32 size, u32 alignment);   /* +0x08 */
    virtual void release(void *block);
};

/* Three 8-byte handler objects that share the allocator they were made from. */
class GfxHandlerA {
public:
    GfxHandlerA(GfxAllocator *owner) : vtable(NULL), allocator(owner) {}
    static void *operator new(u32 size, GfxAllocator *owner) throw() { return owner->allocate(size, 4); }
    /* 0x00 */ void *vtable;      /* class not recovered: its virtual table is not reproduced */
    /* 0x04 */ GfxAllocator *allocator;
};

class GfxHandlerB {
public:
    GfxHandlerB(GfxAllocator *owner) : vtable(NULL), allocator(owner) {}
    static void *operator new(u32 size, GfxAllocator *owner) throw() { return owner->allocate(size, 4); }
    /* 0x00 */ void *vtable;      /* class not recovered: its virtual table is not reproduced */
    /* 0x04 */ GfxAllocator *allocator;
};

class GfxHandlerC {
public:
    GfxHandlerC(GfxAllocator *owner) : vtable(NULL), allocator(owner) {}
    static void *operator new(u32 size, GfxAllocator *owner) throw() { return owner->allocate(size, 4); }
    /* 0x00 */ void *vtable;      /* class not recovered: its virtual table is not reproduced */
    /* 0x04 */ GfxAllocator *allocator;
};

/* The 0x2C-byte arena: a block of `count` 16-byte slots and the handlers that serve it. */
class GfxArena {
public:
    GfxArena(GfxAllocator *owner, u32 slotCount)
        : vtable(NULL), owner(owner), allocator(owner), slots(NULL), slotsEnd(NULL), count(slotCount & 0x3FFFFFFF)
    {
        if (slotCount != 0)
            slots = owner->allocate(slotCount << 4, 0x20);
        slotsEnd = slots;
        handlerC = NULL;
        handlerB = NULL;
        handlerA = NULL;
        handlerA2 = NULL;
        locked = 0;
    }
    static void *operator new(u32 size, GfxAllocator *owner) throw() { return owner->allocate(size, 4); }

    /* 0x00 */ void *vtable;      /* class not recovered: its virtual table is not reproduced */
    /* 0x04 */ GfxAllocator *owner;
    /* 0x08 */ GfxAllocator *allocator;
    /* 0x0C */ void *slots;
    /* 0x10 */ void *slotsEnd;
    /* 0x14 */ u32 count;
    /* 0x18 */ GfxHandlerC *handlerC;
    /* 0x1C */ GfxHandlerB *handlerB;
    /* 0x20 */ GfxHandlerA *handlerA;
    /* 0x24 */ GfxHandlerA *handlerA2;
    /* 0x28 */ u8 locked;
};

/* The graphics context: pool, handlers, arena, scalar state. */
struct GfxContext {
    /* 0x00 */ GfxAllocator *allocator;
    /* 0x04 */ void *pool;
    /* 0x08 */ GfxHandlerA *handlerA;
    /* 0x0C */ GfxHandlerB *handlerB;
    /* 0x10 */ GfxHandlerC *handlerC;
    /* 0x14 */ GfxArena *arena;
    /* 0x18 */ void *scene;
    /* 0x1C */ u8 unk1C;
    /* 0x1D */ u8 unk1D[3];
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u8 unk30;
    /* 0x31 */ u8 unk31[7];
    /* 0x38 */ u32 unk38[2];
    /* 0x40 */ f32 values[10];
    /* 0x68 */ u32 unk68;
    /* 0x6C */ u32 unk6C;
    /* 0x70 */ FloatState *floatState;
    /* 0x74 */ u32 unk74;
};

typedef char GfxContextSize[sizeof(GfxContext) == 0x78 ? 1 : -1];

struct GfxPoolRequest {
    u32 alignment;
    u32 size;
    u32 count;
    u32 slotSize;
    u32 flags;
};

extern "C" {
extern u32 DAT_004dae2c;   /* number of arena slots */

void *FUN_0011f9d0(GfxPoolRequest *request, GfxAllocator *allocator);
void *resourceCreateOwnedObject(GfxAllocator *allocator);
void FUN_0011cfb4(FloatState *state);

GfxContext *FUN_00111724(GfxAllocator *allocator)
{
    GfxContext *context = static_cast<GfxContext *>(allocator->allocate(sizeof(GfxContext), 4));
    if (context != NULL) {
        context->allocator = NULL;
        context->pool = NULL;
        context->handlerA = NULL;
        context->arena = NULL;
        context->scene = NULL;
        context->unk1C = 0;
        context->unk20 = 0;
        context->unk24 = 0;
        context->unk28 = 0;
        context->unk2C = 0;
        context->unk30 = 0;
        context->unk38[0] = 0;
        context->unk38[1] = 0;
        for (s32 i = 0; i < 10; i++)
            context->values[i] = 0.0f;
        context->unk68 = 0;
        context->floatState = NULL;
    }

    GfxPoolRequest request = { 0x20, 0x80, 0x20, 4, 0 };
    context->pool = FUN_0011f9d0(&request, allocator);
    context->handlerA = new (allocator) GfxHandlerA(allocator);
    context->handlerB = new (allocator) GfxHandlerB(allocator);
    context->handlerC = new (allocator) GfxHandlerC(allocator);
    context->arena = new (allocator) GfxArena(allocator, DAT_004dae2c);

    GfxArena *arena = context->arena;
    arena->slotsEnd = arena->slots;
    arena->locked = 0;
    if (context->handlerC != NULL)
        arena->handlerC = context->handlerC;
    if (context->handlerB != NULL)
        arena->handlerB = context->handlerB;
    if (context->handlerA != NULL) {
        arena->handlerA = context->handlerA;
        arena->handlerA2 = context->handlerA;
    }

    context->scene = resourceCreateOwnedObject(allocator);
    *(void **)((u8 *)context->scene + 8) = context->pool;

    void *block = allocator->allocate(0x60, 4);
    FloatState *floatState = block != NULL ? new (block) FloatState() : NULL;
    FUN_0011cfb4(floatState);
    context->floatState = floatState;
    context->allocator = allocator;
    return context;
}

} /* extern "C" */
