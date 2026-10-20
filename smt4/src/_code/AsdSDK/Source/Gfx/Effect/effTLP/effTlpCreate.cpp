/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 92 vs built 90 rows, 107 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effTLP.h"

extern "C" {

void *memAlloc(int, int, int, u32 size, int align, int);
s32 FUN_0028c904(void *data);
void *asdEffectTextureCreate(void *data);
void *FUN_0028c814(void);

/* Builds a TLP object from file data: copies the header and entries and creates an effect object
 * for each entry's data block (or a default one when the block is not valid). */
TlpObject *effTlpCreate(TlpFile *file)
{
    u32 count = file->count;
    TlpObject *tlp = (TlpObject *)memAlloc(0x10000, 0x100, 0, count * 0x14 + 0x28, 0x10, 1);
    TlpEntry *src;
    u8 *block;
    u32 i;
    u32 total;

    tlp->refCount = 0;
    tlp->unk20 = -1;
    tlp->self = tlp;
    tlp->entries = (TlpEntry *)tlp->payload;
    tlp->objects = (void **)(tlp->payload + count * 0x10);
    src = file->entry;
    block = (u8 *)(src + count);
    tlp->unk00 = file->unk00;
    tlp->count = file->count;
    tlp->unk08 = file->unk08;
    tlp->unk0c = file->unk0c;
    for (i = 0; i < count; i++) {
        TlpEntry *dst = &tlp->entries[i];

        *dst = *src;
        if (FUN_0028c904(block) != 0) {
            tlp->objects[i] = asdEffectTextureCreate(block);
        } else {
            tlp->objects[i] = FUN_0028c814();
        }
        block += src->size;
        src++;
    }
    total = 0;
    for (i = 0; i < tlp->count; i++) {
        total += tlp->entries[i].length + 1;
    }
    tlp->totalLength = total;
    tlp->refCount++;
    return tlp;
}

} /* extern "C" */
