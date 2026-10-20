/* NON_MATCHING: the allocation size is computed as (count*16 + count*4 + 40) before the trace in retail (shifts/adds, count kept in r8), and the loop registers differ */
#include "AsdSDK/Source/Gfx/Effect/effTLP.h"
#include "AsdSDK/AsdDebug.h"

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
    TlpObject *tlp;
    TlpEntry *src;
    u8 *block;
    u32 i;
    u32 total;

    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Effect\\effTLP.cpp", 54);
    tlp = (TlpObject *)memAlloc(0x10000, 0x100, 0, count * 0x14 + 0x28, 0x10, 1);
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
