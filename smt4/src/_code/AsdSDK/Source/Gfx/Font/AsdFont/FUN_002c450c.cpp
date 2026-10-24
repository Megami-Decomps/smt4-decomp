/* NON_MATCHING: readable rebuild of AsdFont's glyph-set load (releases the slot's old font, then wraps the new BFFNT file: finds its FINF block, allocates one texture per glyph sheet and fills them from the sheet table); armcc here lays out the format switch (retail stores the three format words per case) and the loop variables differently. */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "shard/W6_W6Match7_FontResource.h"

/* A BFFNT glyph sheet descriptor (TGLP). */
struct GlyphSheetInfo {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 sheetBytes;
    /* 0x08 */ u16 sheetCount;
    /* 0x0A */ u16 format;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u16 width;
    /* 0x12 */ u16 height;
    /* 0x14 */ u8 *data;
};

/* The font info block (FINF) body: its glyph sheet descriptor is the third word. */
struct FontInfoBody {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ GlyphSheetInfo *sheets;
};

/* A font object whose second virtual function destroys it. */
class GlyphFont {
public:
    virtual void vfunc00();
    virtual void destroy();
};

/* One glyph set of the font table (0x2C bytes). */
struct GlyphSet {
    /* 0x00 */ NwFontFileHeader *file;
    /* 0x04 */ FontInfoBody *info;
    /* 0x08 */ GlyphFont *font;
    /* 0x0C */ AsdTexture **textures;
    /* 0x10 */ u32 sheetCount;
    /* 0x14 */ u16 format;
    /* 0x16 */ u8 unk16[2];
    /* 0x18 */ u32 glFormat;
    /* 0x1C */ u32 glType;
    /* 0x20 */ u32 bitsPerTexel;
    /* 0x24 */ u8 mode;           /* 2 for the 0x6756 format, else 1 */
    /* 0x25 */ u8 unk25[3];
    /* 0x28 */ u32 unk28;
};

struct AsdFontTable {
    GlyphSet *items;
    u32 count;
};

extern "C" {
extern AsdFontTable DAT_00464a70;

AsdTexture *asdTextureCreate(s32 shared);
void asdTextureRelease(AsdTexture *texture);
void *asdOperatorNew(u32 bytes);
void asdMemFree(void *block);
void *asdMemoryAlloc(s32 heap, s32 alignClass, s32 unk, u32 size, s32 fromFront);
GlyphFont *FUN_00121e38(void *memory);

/* Loads font file `file` into glyph set `index`: returns 1 when the slot exists. */
u32 FUN_002c450c(u32 index, NwFontFileHeader *file)
{
    GlyphSet *set = DAT_00464a70.items != NULL && index < DAT_00464a70.count ? &DAT_00464a70.items[index] : NULL;
    if (set == NULL)
        return 0;
    if (set->file != NULL) {
        if (set->textures != NULL) {
            for (u32 i = 0; i < set->sheetCount; i++) {
                set->textures[i]->storage.pixels = NULL;
                asdTextureRelease(set->textures[i]);
            }
            asdMemFree(set->textures);
            set->textures = NULL;
        }
        if (set->font != NULL) {
            set->font->destroy();
            set->font = NULL;
        }
        if (set->file != NULL) {
            asdMemFree(set->file);
            set->file = NULL;
        }
        set->info = NULL;
    }
    set->file = file;
    void *memory = asdOperatorNew(0x18);
    GlyphFont *font = NULL;
    if (memory != NULL)
        font = FUN_00121e38(memory);
    set->font = font;
    if (!nw_font_ResFontSetResource((NwResFontBase *)set->font, set->file))
        return 1;
    NwFontFileHeader *header = set->file;
    u32 *finf = NULL;
    u32 *block = (u32 *)((u8 *)header + header->headerSize);
    for (s32 i = 0; i < header->blockCount; i++) {
        if (block[0] == 0x464E4946)
            finf = block + 2;
        block = (u32 *)((u8 *)block + block[1]);
    }
    set->info = (FontInfoBody *)finf;
    GlyphSheetInfo *sheets = set->info->sheets;
    set->textures = (AsdTexture **)asdMemoryAlloc(0x100, 0x100, 0, (u32)sheets->sheetCount << 2, 1);
    set->sheetCount = sheets->sheetCount;
    set->unk28 = 0;
    set->format = sheets->format;
    switch (sheets->format) {
    case 0:
        set->glFormat = 0x6752;
        set->glType = 0x1401;
        set->bitsPerTexel = 0x20;
        break;
    case 1:
        set->glFormat = 0x6754;
        set->glType = 0x1401;
        set->bitsPerTexel = 0x18;
        break;
    case 2:
        set->glFormat = 0x6752;
        set->glType = 0x8034;
        set->bitsPerTexel = 0x10;
        break;
    case 3:
        set->glFormat = 0x6754;
        set->glType = 0x8363;
        set->bitsPerTexel = 0x10;
        break;
    case 4:
        set->glFormat = 0x6752;
        set->glType = 0x8033;
        set->bitsPerTexel = 0x10;
        break;
    case 5:
        set->glFormat = 0x6758;
        set->glType = 0x1401;
        set->bitsPerTexel = 0x10;
        break;
    case 8:
        set->glFormat = 0x6756;
        set->glType = 0x1401;
        set->bitsPerTexel = 8;
        break;
    case 9:
        set->glFormat = 0x6758;
        set->glType = 0x6760;
        set->bitsPerTexel = 8;
        break;
    case 11:
        set->glFormat = 0x6756;
        set->glType = 0x6761;
        set->bitsPerTexel = 4;
        break;
    default:
        set->glFormat = 0x6756;
        set->glType = 0x1401;
        set->bitsPerTexel = 0;
        return 1;
    }
    set->mode = set->glFormat != 0x6756 ? 1 : 2;
    u32 offset = 0;
    for (u32 i = 0; i < set->sheetCount; i++) {
        AsdTexture *texture = asdTextureCreate(0);
        set->textures[i] = texture;
        u8 *data = sheets->data;
        u16 width = sheets->width;
        u16 height = sheets->height;
        texture->image.mip.level = 0;
        texture->dimensions.width = width;
        texture->dimensions.height = height;
        texture->image.format = set->glFormat;
        texture->target = ASDTEXTURE_TARGET_2D;
        texture->unk08 = 0x10000;
        texture->image.flags = 0x2000000;
        texture->image.type = set->glType;
        texture->storage.pixels = data + offset;
        texture->storage.unk28 = sheets->sheetBytes;
        asdTextureSetImage(texture);
        offset += sheets->sheetBytes;
    }
    return 1;
}

} /* extern "C" */
