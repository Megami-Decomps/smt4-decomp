/* NON_MATCHING: built uses different registers (r9 for the null constant, r2/r1 swapped for the table load) and a different switch/loop layout (215 rows vs 232); the font slot loading is the same. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {

/* The virtual interface of the reader object kept in a font slot. */
class FontReader {
public:
    virtual void v0();
    virtual void destroy();
};

/* One loaded font (0x2C bytes). */
typedef struct FontSlot {
    /* 0x00 */ u8 *data;             /* the font file image */
    /* 0x04 */ u8 *glyphInfo;        /* its glyph info block (FINF) */
    /* 0x08 */ FontReader *reader;
    /* 0x0C */ AsdTexture **sheets;  /* one texture per sheet */
    /* 0x10 */ u32 sheetCount;
    /* 0x14 */ u16 format;           /* the sheet's pixel format id */
    /* 0x16 */ u8 unk16[2];
    /* 0x18 */ u32 glFormat;
    /* 0x1C */ u32 glType;
    /* 0x20 */ u32 bitsPerPixel;
    /* 0x24 */ u8 compression;       /* 1 uncompressed, 2 ETC-style */
    /* 0x25 */ u8 unk25[3];
    /* 0x28 */ u32 unk28;
} FontSlot;

typedef struct FontSlotTable {
    FontSlot *slots;
    u32 count;
} FontSlotTable;

extern FontSlotTable DAT_005b3bc0;

void asdTextureRelease(AsdTexture *texture);
void asdMemFree(void *memory);
void *asdMemoryAlloc(u32 size, u32 alignment, u32 a, u32 count, u32 b);
void *FUN_00178b04(u32 size, const char *sourceFile, u32 sourceLine);
FontReader *initVtable0055c618(void *storage);
s32 FUN_0015ef04(FontReader *reader, u8 *data);
AsdTexture *asdTextureCreate(s32 shared);
void asdTextureSetImage(AsdTexture *texture);

/* Loads font `index` from the file image `data`: frees whatever the slot held, creates its
 * reader, finds the FINF block and creates one texture per sheet in the sheet's pixel format.
 * Returns 0 when `index` is out of range. */
u32 FUN_00140e6c(u32 index, u8 *data)
{
    FontSlot *slot;

    if (DAT_005b3bc0.slots == NULL || index >= DAT_005b3bc0.count) {
        return 0;
    }
    slot = &DAT_005b3bc0.slots[index];
    if (slot == NULL) {
        return 0;
    }
    if (slot->data != NULL) {
        if (slot->sheets != NULL) {
            for (u32 i = 0; i < slot->sheetCount; i++) {
                slot->sheets[i]->storage.pixels = NULL;
                asdTextureRelease(slot->sheets[i]);
            }
            asdMemFree(slot->sheets);
            slot->sheets = NULL;
        }
        if (slot->reader != NULL) {
            slot->reader->destroy();
            slot->reader = NULL;
        }
        if (slot->data != NULL) {
            asdMemFree(slot->data);
            slot->data = NULL;
        }
        slot->glyphInfo = NULL;
    }
    slot->data = data;
    FontReader *reader = (FontReader *)FUN_00178b04(0x18, "c:\\SMT4F\\AsdSDK\\Source\\Gfx\\Font\\AsdFont.cpp", 537);

    if (reader != NULL) {
        reader = initVtable0055c618(reader);
    }
    slot->reader = reader;
    if (FUN_0015ef04(reader, slot->data) == 0) {
        return 1;
    }
    u8 *blocks = slot->data + *(u16 *)(slot->data + 6);
    u32 *glyphInfo = NULL;
    u32 *block = (u32 *)blocks;

    for (s32 i = 0; i < *(u16 *)(slot->data + 0x10); i++) {
        if (block[0] == 0x464E4946) {
            glyphInfo = block + 2;
        }
        block = (u32 *)((u8 *)block + block[1]);
    }
    slot->glyphInfo = (u8 *)glyphInfo;
    u8 *sheetInfo = (u8 *)glyphInfo[2];

    slot->sheets = (AsdTexture **)asdMemoryAlloc(0x100, 0x100, 0, *(u16 *)(sheetInfo + 8) << 2, 1);
    slot->sheetCount = *(u16 *)(sheetInfo + 8);
    slot->unk28 = 0;
    slot->format = *(u16 *)(sheetInfo + 10);
    switch (slot->format) {
    case 0:
        slot->glFormat = 0x6752;
        slot->glType = 0x1401;
        slot->bitsPerPixel = 0x20;
        break;
    case 1:
        slot->glFormat = 0x6754;
        slot->glType = 0x1401;
        slot->bitsPerPixel = 0x18;
        break;
    case 2:
        slot->glFormat = 0x6752;
        slot->glType = 0x8034;
        slot->bitsPerPixel = 0x10;
        break;
    case 3:
        slot->glFormat = 0x6754;
        slot->glType = 0x8363;
        slot->bitsPerPixel = 0x10;
        break;
    case 4:
        slot->glFormat = 0x6752;
        slot->glType = 0x8033;
        slot->bitsPerPixel = 0x10;
        break;
    case 5:
        slot->glFormat = 0x6758;
        slot->glType = 0x1401;
        slot->bitsPerPixel = 0x10;
        break;
    case 8:
        slot->glFormat = 0x6756;
        slot->glType = 0x1401;
        slot->bitsPerPixel = 8;
        break;
    case 9:
        slot->glFormat = 0x6758;
        slot->glType = 0x6760;
        slot->bitsPerPixel = 8;
        break;
    case 11:
        slot->glFormat = 0x6756;
        slot->glType = 0x6761;
        slot->bitsPerPixel = 4;
        break;
    default:
        slot->glFormat = 0x6756;
        slot->glType = 0x1401;
        slot->bitsPerPixel = 0;
        return 1;
    }
    slot->compression = slot->glFormat != 0x6756 ? 1 : 2;
    u32 offset = 0;

    for (u32 i = 0; i < slot->sheetCount; i++) {
        AsdTexture *texture = asdTextureCreate(0);

        slot->sheets[i] = texture;
        texture->image.mip.level = 0;
        texture->dimensions.width = *(u16 *)(sheetInfo + 0x10);
        texture->dimensions.height = *(u16 *)(sheetInfo + 0x12);
        texture->target = ASDTEXTURE_TARGET_2D;
        texture->unk08 = 0x10000;
        texture->image.flags = 0x2000000;
        texture->image.format = slot->glFormat;
        texture->image.type = slot->glType;
        texture->storage.pixels = (u8 *)*(s32 *)(sheetInfo + 0x14) + offset;
        texture->storage.unk28 = *(u32 *)(sheetInfo + 4);
        asdTextureSetImage(texture);
        offset += *(u32 *)(sheetInfo + 4);
    }
    return 1;
}

}
