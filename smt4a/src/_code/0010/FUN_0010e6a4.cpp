#include "common.h"

extern "C" {

typedef struct Object Object;
typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*destroy)(Object *object);
    /* 0x08 */ void *unk08;
    /* 0x0C */ void (*shutdown)(Object *object);
} ObjectVtbl;
struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
    /* 0x04 */ u8 unk04[0x18];
    /* 0x1C */ u8 active;
};

typedef struct Owner {
    /* 0x000 */ u8 unk000[0x14C];
    /* 0x14C */ Object *primary;
    /* 0x150 */ Object *secondary;
    /* 0x154 */ void *buffer;
    /* 0x158 */ u8 unk158[0x70];
    /* 0x1C8 */ u8 closing;
} Owner;

typedef struct FlagBlockView {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ s8 secondaryEnabled;
} FlagBlockView;
extern FlagBlockView g_flagBlock;

void FUN_002f4ab0(Object *object, u32 mode);
void sharedRefRelease(void *buffer);
u32 FUN_002e6e26(void);
void FUN_002f8e58(u32 pool, void *buffer);

/* Marks the owner as closing, then releases its primary and secondary objects and its buffer; always returns 1. */
u32 FUN_0010e6a4(Owner *owner)
{
    Object *primary;
    u32 pool;

    owner->closing = 1;
    primary = owner->primary;
    if (primary != NULL && primary->active != 0) {
        FUN_002f4ab0(primary, 0xFFFFFFFF);
        if (owner->primary != NULL) {
            owner->primary->vtbl->destroy(owner->primary);
        }
        owner->primary = NULL;
    }
    if (g_flagBlock.secondaryEnabled != 0 && owner->secondary != NULL) {
        owner->secondary->vtbl->shutdown(owner->secondary);
        if (owner->secondary != NULL) {
            owner->secondary->vtbl->destroy(owner->secondary);
        }
        owner->secondary = NULL;
    }
    if (owner->buffer != NULL && FUN_002e6e26() != 0) {
        pool = FUN_002e6e26();
        FUN_002f8e58(pool, owner->buffer);
        sharedRefRelease(owner->buffer);
        owner->buffer = NULL;
    }
    return 1;
}

} /* extern "C" */
