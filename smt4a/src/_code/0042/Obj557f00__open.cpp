#include "classes/Obj557f00.h"
extern "C" {
s32 FUN_00422814(s32 width, s32 height, u32 mode);
bool FUN_00423ce0(Obj557f00 *frame, Obj557f00Allocator *allocator, const Obj557f00Description *description, s32 a, s32 b);
}

u32 Obj557f00::open(u32 allocatorAddress, const void *parameters, s32 depth, u32 mode)
{
    const Obj557f00Description *desc = (const Obj557f00Description *)parameters;
    if (!FUN_00423ce0(this, (Obj557f00Allocator *)allocatorAddress, desc, 1, 16)) {
        return 0;
    }
    capacity = desc->width * desc->height * depth * 2;
    pixels = (u8 *)allocator->vtable->allocate(allocator, capacity, 32);
    if (pixels == NULL) {
        return 0;
    }
    handle = FUN_00422814(desc->width, desc->height, mode);
    if (handle == -1) {
        allocator->vtable->release(allocator, pixels);
        pixels = NULL;
        return 0;
    }
    submitted = 0;
    cursor = 0;
    return 1;
}
