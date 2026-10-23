/* NON_MATCHING: resource/header stack spilling, block dispatch ordering and register allocation differ from retail. */
#include "shard/W6_W6Match7_FontResource.h"

extern "C" {
s32 nw_ut_IsValidBinaryFile(const NwFontFileHeader *file, u32 signature, u32 version, u32 minimumBlocks);
void FUN_00175f48(NwResFontBase *font, NwFontFileHeader *file, NwFontInfo *info);

// Relocate CFNT block pointers in place, then bind its FINF data to an unused font object.
u32 FUN_0015ef04(NwResFontBase *font, NwFontFileHeader *file)
{
    if (font->resourceView.resource != NULL) {
        return 0;
    }
    NwFontInfo *info = NULL;
    NwFontBlockHeader *block = (NwFontBlockHeader *)((u8 *)file + file->headerSize);
    if (file->signature == 0x554E4643) {
        for (s32 i = 0; i < file->blockCount; ++i) {
            if (block->signature == 0x464E4946) {
                info = (NwFontInfo *)(block + 1);
                break;
            }
            block = (NwFontBlockHeader *)((u8 *)block + block->byteSize);
        }
    } else {
        if (!nw_ut_IsValidBinaryFile(file, 0x544E4643, 0x03000000, 2)) {
            return 0;
        }
        for (s32 i = 0; i < file->blockCount; ++i) {
            switch (block->signature) {
            case 0x464E4946:
                info = (NwFontInfo *)(block + 1);
                info->sheetInfo = (NwFontSheetInfo *)((u8 *)file + (u32)info->sheetInfo);
                if (info->widthTable != NULL) {
                    info->widthTable = (NwFontWidthTable *)((u8 *)file + (u32)info->widthTable);
                }
                if (info->charMap != NULL) {
                    info->charMap = (u8 *)file + (u32)info->charMap;
                }
                break;
            case 0x544C4754: {
                NwFontSheetInfo *sheet = (NwFontSheetInfo *)(block + 1);
                sheet->sheetImage = (u8 *)file + (u32)sheet->sheetImage;
                break;
            }
            case 0x48445743: {
                NwFontWidthTable *widths = (NwFontWidthTable *)(block + 1);
                if (widths->next != NULL) {
                    widths->next = (NwFontWidthTable *)((u8 *)file + (u32)widths->next);
                }
                break;
            }
            case 0x50414D43: {
                NwFontCharacterMap *map = (NwFontCharacterMap *)(block + 1);
                if (map->next != NULL) {
                    map->next = (NwFontCharacterMap *)((u8 *)file + (u32)map->next);
                }
                break;
            }
            case 0x52474C47:
                break;
            default:
                return 0;
            }
            block = (NwFontBlockHeader *)((u8 *)block + block->byteSize);
        }
        file->signature = 0x554E4643;
    }
    if (info == NULL) {
        return 0;
    }
    FUN_00175f48(font, file, info);
    return 1;
}
}
