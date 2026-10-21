/* NON_MATCHING: file/block/index and dispatch registers differ, FINF width loading moves before its sheet store, and the success epilogue is rescheduled (118/118 rows). */
#include "shard/W6_W6Match7_FontResource.h"

extern "C" bool nw_ut_IsValidBinaryFile(const NwFontFileHeader*, u32 signature,
                                       u32 version, u32 minimumBlocks);

namespace {
struct FontCodeMap {
    u16 firstCode;
    u16 lastCode;
    u16 method;
    u16 reserved;
    FontCodeMap* next;
};

struct FontBlock {
    u32 kind;
    u32 size;
};

template <class T>
inline void relocateFontOffset(T*& pointer, NwFontFileHeader* file)
{
    pointer = reinterpret_cast<T*>(reinterpret_cast<u8*>(file) +
                                  reinterpret_cast<u32>(pointer));
}

NwFontInfo* findFontInfo(NwFontFileHeader* file)
{
    FontBlock* block = reinterpret_cast<FontBlock*>(
        reinterpret_cast<u8*>(file) + file->headerSize);
    for (s32 index = 0; index < file->blockCount; ++index) {
        if (block->kind == 0x464e4946) {
            return reinterpret_cast<NwFontInfo*>(block + 1);
        }
        block = reinterpret_cast<FontBlock*>(
            reinterpret_cast<u8*>(block) + block->size);
    }
    return NULL;
}

NwFontInfo* relocateFontFile(NwFontFileHeader* file)
{
    if (!nw_ut_IsValidBinaryFile(file, 0x544e4643, 0x03000000, 2)) {
        return NULL;
    }
    NwFontInfo* info = NULL;
    FontBlock* block = reinterpret_cast<FontBlock*>(
        reinterpret_cast<u8*>(file) + file->headerSize);
    for (s32 index = 0; index < file->blockCount; ++index) {
        switch (block->kind) {
        case 0x464e4946: // FINF
            info = reinterpret_cast<NwFontInfo*>(block + 1);
            relocateFontOffset(info->sheetInfo, file);
            if (info->widthTable != NULL) {
                relocateFontOffset(info->widthTable, file);
            }
            if (info->charMap != NULL) {
                relocateFontOffset(info->charMap, file);
            }
            break;
        case 0x504c4754: { // TGLP
            NwFontSheetInfo* sheet = reinterpret_cast<NwFontSheetInfo*>(block + 1);
            relocateFontOffset(sheet->sheetImage, file);
            break;
        }
        case 0x48445743: { // CWDH
            NwFontWidthTable* widths = reinterpret_cast<NwFontWidthTable*>(block + 1);
            if (widths->next != NULL) {
                relocateFontOffset(widths->next, file);
            }
            break;
        }
        case 0x50414d43: { // CMAP
            FontCodeMap* map = reinterpret_cast<FontCodeMap*>(block + 1);
            if (map->next != NULL) {
                relocateFontOffset(map->next, file);
            }
            break;
        }
        case 0x52474c47: // GLGR
            break;
        default:
            return NULL;
        }
        block = reinterpret_cast<FontBlock*>(
            reinterpret_cast<u8*>(block) + block->size);
    }
    file->signature = 0x554e4643;
    return info;
}
}

// Resolve the font's in-file links once, then attach its FINF data to the reader.
extern "C" bool nw_font_ResFontSetResource(NwResFontBase* font, NwFontFileHeader* file)
{
    if (font->resourceView.resource != NULL) {
        return false;
    }
    NwFontInfo* info;
    if (file->signature == 0x554e4643) { // CFNU: links have already been resolved.
        info = findFontInfo(file);
    } else {
        info = relocateFontFile(file);
    }
    if (info == NULL) {
        return false;
    }
    nw_font_ResFontSetResourceBuffer(font, file, info);
    return true;
}
