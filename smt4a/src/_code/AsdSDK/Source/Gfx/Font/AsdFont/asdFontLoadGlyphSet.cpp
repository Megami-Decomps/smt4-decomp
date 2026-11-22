/* NON_MATCHING: 128 lines (106 by shape); the format switch and the texture set-up match, as in IV's
 * asdFontLoadGlyphSet. Retail keeps the constant 1 in r7 from before the block walk (the allocation's last argument
 * and the mode-1 store use it), tests the block signature with `adds` of the negated 'FINF', branches from the
 * unknown-format arm to the shared `return 1`, sets the release loop's index after its count test
 * (`movne r5, #0`), swaps r1/r2 in the glyph-set lookup and loads the sheet size and image in r2/r3/r1. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "font/FontStringReader.h"

extern "C" {
extern FontRecordPool g_asdFontGlyphSets;

AsdTexture *asdTextureCreate(s32 shared);
void asdTextureRelease(AsdTexture *texture);
void asdMemFree(void *memory);
void *asdMemoryAlloc(u32 heap, u32 alignClass, u32 unk, u32 size, u32 fromFront); // declcheck: local (the shared declaration is in the flag-bank header shard/W5_W5Match7_FlagBanks.h, which pulls in the map types)
void *asdMemoryAllocTraced(u32 size, const char *sourceFile, u32 sourceLine);
FontGlyphLookup *initVtable0055c618(void *storage); // declcheck: local (the shared declaration takes no storage and returns nothing)

/* recordTableGet's body: glyph set `index`, or NULL when the table has no such set. */
static __inline FontRegisteredRecord *glyphSetGet(u32 index)
{
    if (g_asdFontGlyphSets.records != NULL && index < g_asdFontGlyphSets.count)
        return &g_asdFontGlyphSets.records[index];
    return NULL;
}

/* Loads font file `file` into glyph set `index`: releases what the set held, creates the font reader over the
 * file, finds its FINF block and wraps each glyph sheet image in a texture of the sheet's format. Returns 0 when
 * the table has no such set. */
u32 asdFontLoadGlyphSet(u32 index, NwFontFileHeader *file)
{
    FontRegisteredRecord *set = glyphSetGet(index);
    if (set == NULL)
        return 0;
    if (set->file != NULL) {
        if (set->textures != NULL) {
            for (u32 i = 0; i < set->sheetCount; i++) {
                /* the pixels belong to the font file, freed below */
                set->textures[i]->storage.pixels = NULL;
                asdTextureRelease(set->textures[i]);
            }
            asdMemFree(set->textures);
            set->textures = NULL;
        }
        if (set->font != NULL) {
            set->font->vtable->lifetime.destroy(set->font);
            set->font = NULL;
        }
        if (set->file != NULL) {
            asdMemFree(set->file);
            set->file = NULL;
        }
        set->info = NULL;
    }
    set->file = file;
    FontGlyphLookup *font = (FontGlyphLookup *)asdMemoryAllocTraced(0x18, "c:\\SMT4F\\AsdSDK\\Source\\Gfx\\Font\\AsdFont.cpp", 537);
    if (font != NULL)
        font = initVtable0055c618(font);
    set->font = font;
    if (!nw_font_ResFontSetResource((NwResFontBase *)set->font, set->file))
        return 1;
    NwFontFileHeader *header = set->file;
    NwFontInfo *info = NULL;
    NwFontBlockHeader *block = (NwFontBlockHeader *)((u8 *)header + header->headerSize);
    for (s32 i = 0; i < header->blockCount; i++) {
        if (block->signature == 0x464E4946)  /* 'FINF' */
            info = (NwFontInfo *)(block + 1);
        block = (NwFontBlockHeader *)((u8 *)block + block->byteSize);
    }
    set->info = info;
    NwFontSheetInfo *sheets = set->info->sheetInfo;
    u32 bytes = (u32)sheets->sheetCount << 2;
    asdDebugTrace("c:\\SMT4F\\AsdSDK\\Source\\Gfx\\Font\\AsdFont.cpp", 288);
    set->textures = (AsdTexture **)asdMemoryAlloc(0x100, 0x100, 0, bytes, 1);
    set->sheetCount = sheets->sheetCount;
    set->unk28 = 0.0f;
    set->format = sheets->sheetFormat;
    /* the GL format, type and texel size of each font sheet format */
    switch (set->format) {
    case 11:  /* A4 */
        set->glFormat = 0x6756;
        set->glType = 0x6761;
        set->bitsPerTexel = 4;
        break;
    case 8:  /* A8 */
        set->glFormat = 0x6756;
        set->glType = 0x1401;
        set->bitsPerTexel = 8;
        break;
    case 9:  /* LA4 */
        set->glFormat = 0x6758;
        set->glType = 0x6760;
        set->bitsPerTexel = 8;
        break;
    case 5:  /* LA8 */
        set->glFormat = 0x6758;
        set->glType = 0x1401;
        set->bitsPerTexel = 16;
        break;
    case 4:  /* RGBA4 */
        set->glFormat = 0x6752;
        set->glType = 0x8033;
        set->bitsPerTexel = 16;
        break;
    case 2:  /* RGB5A1 */
        set->glFormat = 0x6752;
        set->glType = 0x8034;
        set->bitsPerTexel = 16;
        break;
    case 0:  /* RGBA8 */
        set->glFormat = 0x6752;
        set->glType = 0x1401;
        set->bitsPerTexel = 32;
        break;
    case 3:  /* RGB565 */
        set->glFormat = 0x6754;
        set->glType = 0x8363;
        set->bitsPerTexel = 16;
        break;
    case 1:  /* RGB8 */
        set->glFormat = 0x6754;
        set->glType = 0x1401;
        set->bitsPerTexel = 24;
        break;
    default:
        set->glFormat = 0x6756;
        set->glType = 0x1401;
        set->bitsPerTexel = 0;
        return 1;
    }
    /* A two-way switch, not an if: retail tests the format the arms stored at run time by subtraction (`sub; subs`)
     * and keeps each arm's three stores; any if or ternary spelling lets armcc thread the test into the nine arms and
     * merge their stores into stm (shape 78 against 195 in IV, 106 against 223 in Apocalypse). Still NON_MATCHING. */
    switch (set->glFormat) {
    case 0x6756:
        set->mode = 2;
        break;
    default:
        set->mode = 1;
        break;
    }
    u32 offset = 0;
    for (u32 i = 0; i < set->sheetCount; i++) {
        AsdTexture *texture = asdTextureCreate(0);
        set->textures[i] = texture;
        asdTextureDescribeImage(texture, sheets->sheetWidth, sheets->sheetHeight, set->glFormat, set->glType,
                                sheets->sheetImage + offset, sheets->sheetSize);
        asdTextureSetImage(texture);
        offset += sheets->sheetSize;
    }
    return 1;
}

} /* extern "C" */
