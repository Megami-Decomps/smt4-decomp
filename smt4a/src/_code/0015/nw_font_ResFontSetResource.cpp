/* NON_MATCHING: nw::font::ResFont::SetResource with Rebuild inlined (the smt4 twin is nw_font_ResFontSetResource,
 * third-party there); retail loads the block count after the header size and hoists the FINF signature in the
 * resolved-file search, and resolves the FINF glyph offset before loading the width offset (built: one ldm) */
#include "shard/W6_W6Match7_FontResource.h"


/* nw::ut::ResolveOffset: turns an offset from base into a pointer, in place. */
template <typename T>
static __inline void resolveOffset(T *&pointer, void *base)
{
    pointer = (T *)((u8 *)base + (u32)pointer);
}

extern "C" {
s32 nw_ut_IsValidBinaryFile(const NwFontFileHeader *file, u32 signature, u32 version, u32 minimumBlocks);

/* nw::font::ResFont::Rebuild: resolves the in-file offsets of every block and marks the file resolved. */
static NwFontInfo *resFontRebuild(NwFontFileHeader *file)
{
    NwFontBlockHeader *block;
    NwFontInfo *info = NULL;
    s32 nBlocks = 0;

    block = (NwFontBlockHeader *)((u8 *)file + file->headerSize);
    while (nBlocks < file->blockCount) {
        switch (block->signature) {
        case 0x464E4946:
            info = (NwFontInfo *)(block + 1);
            resolveOffset(info->sheetInfo, file);
            if (info->widthTable != NULL)
                resolveOffset(info->widthTable, file);
            if (info->charMap != NULL)
                resolveOffset(info->charMap, file);
            break;
        case 0x504C4754: {
            NwFontSheetInfo *sheet = (NwFontSheetInfo *)(block + 1);
            resolveOffset(sheet->sheetImage, file);
            break;
        }
        case 0x48445743: {
            NwFontWidthTable *widths = (NwFontWidthTable *)(block + 1);
            if (widths->next != NULL)
                resolveOffset(widths->next, file);
            break;
        }
        case 0x50414D43: {
            NwFontCharacterMap *map = (NwFontCharacterMap *)(block + 1);
            if (map->next != NULL)
                resolveOffset(map->next, file);
            break;
        }
        case 0x52474C47:
            break;
        default:
            return NULL;
        }
        block = (NwFontBlockHeader *)((u8 *)block + block->byteSize);
        nBlocks++;
    }
    file->signature = 0x554E4643;
    return info;
}

/* nw::font::ResFont::SetResource: resolves the font file once, then binds its FINF data to an unused font. */
bool nw_font_ResFontSetResource(NwResFontBase *font, void *resource)
{
    NwFontInfo *info = NULL;
    NwFontFileHeader *file = (NwFontFileHeader *)resource;
    if (font->resourceView.resource != NULL)
        return false;
    if (file->signature == 0x554E4643) {
        NwFontBlockHeader *block;
        s32 nBlocks = 0;

        block = (NwFontBlockHeader *)((u8 *)file + file->headerSize);
        while (nBlocks < file->blockCount) {
            if (block->signature == 0x464E4946) {
                info = (NwFontInfo *)(block + 1);
                break;
            }
            block = (NwFontBlockHeader *)((u8 *)block + block->byteSize);
            nBlocks++;
        }
    } else {
        if (!nw_ut_IsValidBinaryFile(file, 0x544E4643, 0x03000000, 2))
            return false;
        info = resFontRebuild(file);
    }
    if (info == NULL)
        return false;
    nw_font_ResFontSetResourceBuffer(font, (NwFontFileHeader *)resource, info);
    return true;
}
} /* extern "C" */
