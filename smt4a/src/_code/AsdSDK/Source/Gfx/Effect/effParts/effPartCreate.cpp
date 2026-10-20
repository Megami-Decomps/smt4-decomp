/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 26 vs built 21 rows, 6 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effParts.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
void sysMemClear(void *block, s32 size);
void FUN_001b4ddc(EffPart *part);

/* Creates a part object: a zeroed 0x90-byte block with unk80/unk84 cleared, then initialized. */
EffPart *effPartCreate(void)
{
    EffPart *part = (EffPart *)memAlloc(0x10000, 0x100, 0, 0x90, 0x10, 1);

    sysMemClear(part, 0x90);
    part->unk80 = 0;
    part->unk84 = 0;
    FUN_001b4ddc(part);
    return part;
}

} /* extern "C" */
