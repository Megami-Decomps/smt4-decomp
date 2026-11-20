/* NON_MATCHING: allocation size, trace, entries/objects and the loops match; retail stores refCount/unk20/self with one stm before the entries/objects pair (zero in r0, shared with the loop index), the build splits the triple around that pair. */
#include "AsdSDK/Source/Gfx/Effect/effTLP.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match2_TextureHolder.h"

extern "C" {

void *memAlloc(int, int, int, u32 size, int align, int);
s32 texIsStexFile(void *data);

/* Builds a TLP object from file data: copies the header and entries and creates an effect object
 * for each entry's data block (or a default one when the block is not valid). */
TlpObject *effTlpCreate(TlpFile *file)
{
    u32 count = file->count;
    u32 entriesSize = count * 0x10;
    u32 size = entriesSize + count * 4 + 0x28;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effTLP.cpp", 54);
    TlpObject *tlp = (TlpObject *)memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
    TlpEntry *src;
    u8 *block;
    u32 i;
    u32 total;

    tlp->refCount = 0;
    tlp->unk20 = -1;
    tlp->self = tlp;
    tlp->entries = (TlpEntry *)tlp->payload;
    tlp->objects = (void **)(tlp->entries + count);
    src = file->entry;
    block = (u8 *)(src + count);
    tlp->unk00 = file->unk00;
    tlp->count = file->count;
    tlp->unk08 = file->unk08;
    tlp->unk0c = file->unk0c;
    for (i = 0; i < count; i++) {
        TlpEntry *dst = &tlp->entries[i];

        *dst = *src;
        if (texIsStexFile(block) != 0) {
            tlp->objects[i] = asdEffectTextureCreate(block);
        } else {
            tlp->objects[i] = textureCreateFromImage(block);
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
