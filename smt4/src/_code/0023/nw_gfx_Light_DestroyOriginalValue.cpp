#include "common.h"

extern "C" {

struct Allocator;
typedef struct AllocatorVtbl {
    /* 0x0 */ void *unk0[3];
    /* 0xC */ void (*free)(struct Allocator *allocator, u32 ptr);
} AllocatorVtbl;

typedef struct Allocator {
    /* 0x0 */ AllocatorVtbl *vtbl;
} Allocator;

typedef struct Light {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ Allocator *allocator;
    /* 0x008 */ u8 unk008[0x140];
    /* 0x148 */ u32 originalValue;
} Light;

void nw_gfx_Light_DestroyOriginalValue(Light *light)
{
    light->allocator->vtbl->free(light->allocator, light->originalValue);
    light->originalValue = 0;
}

} /* extern "C" */
