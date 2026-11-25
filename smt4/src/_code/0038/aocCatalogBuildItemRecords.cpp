/* NON_MATCHING: 513 lines (shape 447), IV's twin of smt4a aocCatalogBuildItemRecords (six glyph replacements, the
 * description copied with FUN_0026281c): retail's frame is 0x1C00 bytes with each attribute label copied from its call's
 * temporary into a second slot, keeps g_aocMain in sl (and passes it as the licence allocation's unset owner word),
 * stores the terminator with mvn #0, and its delete[] goes through the stub FUN_002b4b80. */
#include "addon/AocBufferRequest.h"
#include "addon/AocCatalogQuery.h"
#include "addon/aocIcon.h"
#include "addon/aocMain.h"
#include "classes/Obj422214Owner.h"
#include "classes/WindowStatus.h"
#include "gamedata/GameDataAccess_Shard0050.h"
#include "gamedata/TableEntryRef.h"
#include "nn/Result.h"
#include "nn/fs/ArchivePath.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "shard/W6_W6Match7_ArchiveIcon.h"
#include "shard/W6_W6Match8_ArchiveValues.h"
#include "shard/W6_W6Match8_DateTimeValue.h"
#include "text/TextCode.h"
#include "AsdSDK/Source/Sys/Mem/AsdOperatorNewB.h"
#include "sys/WindowStatusCheck.h"

/* One licence entry of an item (0x18 bytes); bits 0 and 1 of `flags` are read through objGetFlagBit0/1. */
struct AocItemLicense {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 flags;
    /* 0x11 */ u8 unk11[7];
};

/* A character the item text replaces: `wideFrom` in the decoded text, `codeFrom` (stored with its bytes swapped)
 * once the single-byte glyphs are expanded. */
struct AocGlyphReplacement {
    /* 0x00 */ u16 wideFrom;
    /* 0x02 */ u16 wideTo;
    /* 0x04 */ u16 codeFrom;
    /* 0x06 */ u16 codeTo;
};

enum {
    ICON_BYTES = 0x1200,       /* six 0x300-byte strips */
    ICON_NONE = 0xFFFF,
    DESCRIPTION_CHARS = 0x400,
    GLYPH_REPLACEMENTS = 6,
    GLYPH_DIGIT = 4            /* the replacement followed by a digit stored as its value */
};

extern "C" {

u16 halfPair48LowByteA(void *file);
u16 halfPair48LowByteB(void *file);
u32 FUN_00234170(Archive *archive, u32 key);
u32 FUN_002c5e80(const char *text, char **end, s32 base);
s32 textConvertToBoundedWide(AocMain *main, u16 *destination, u32 capacity, const void *source);
s32 FUN_0026281c(u8 *destination, const u16 *source, u32 limit);
void FUN_0038bee4(AocIcon *icon, const u8 *source);
WindowStatusResult FUN_003df850(Archive *archive, u32 *blocks);
u32 FUN_003df63c(Archive *archive);
WindowStatusResult FUN_003df7d4(Archive *archive, u32 *readCount, AocItemLicense *licenses, u32 count, u32 start);
u8 objGetFlagBit0(AocItemLicense *license); // declcheck: local (code/Code002a_Smt4.h types the record as Obj *)
u8 objGetFlagBit1(AocItemLicense *license);
void FUN_003df648(DateTimeValue *output, const Archive *source);
void ownerTableEntryGet(u8 **out, AocAuxBufferRequest *request, u32 index); // declcheck: local (code/Code003d_Smt4.h keeps the decompiler's Owner view)

/* Rebuilds the shop's item records from the catalog's item entries: name, summary and description text, the sale
 * flag, the icon, the size in blocks, the news date and whether every licence of the item has bits 1 and 0 set.
 * Each service read leaves its result in the job; the first failure is returned. */
s32 aocCatalogBuildItemRecords(AocCatalogJob *job)
{
    AocMain *main = g_aocMain;

    if (main->itemRecordCount == 0) {
        return 0;
    }
    if (main->selectedRecord != NULL) {
        delete[] main->selectedRecord;
    }
    main->selectedRecord = new Obj422214Owner[main->itemRecordCount];

    u32 kept = 0;
    for (u32 index = 0; index < main->itemRecordCount; ++index) {
        TableEntryRef entry;
        u16 description[DESCRIPTION_CHARS];
        u8 iconData[ICON_BYTES];
        u32 blocks;
        u32 licenseCount;
        s32 result;

        ownerTableEntryGet((u8 **)&entry.entry, main->itemRequest, index);
        Obj422214Owner *record = &main->selectedRecord[kept];
        ++kept;
        record->contentId = (u16)index;
        Archive *archive = (Archive *)&entry;

        u32 value = FUN_00234170(archive, (u32)main->attributeNames[5].text);
        if (value != 0 && FUN_002c5e80((const char *)value, NULL, 10) == 1) {
            record->flags[4] = 1;
        }

        AocAttributeName nameLabel = aocItemAttributeLabel(0, halfPair48LowByteA(main->contentFile), halfPair48LowByteB(main->contentFile));
        const char *text = (const char *)FUN_00234170(archive, (u32)nameLabel.text);
        if (text == NULL) {
            text = "";
        }
        result = textConvertToBoundedWide(main, (u16 *)record->header, 0x40, text);
        if (nnResultIsFailure(result)) {
            return result;
        }

        AocAttributeName shortLabel = aocItemAttributeLabel(2, halfPair48LowByteA(main->contentFile), halfPair48LowByteB(main->contentFile));
        text = (const char *)FUN_00234170(archive, (u32)shortLabel.text);
        if (text == NULL) {
            text = "";
        }
        result = textConvertToBoundedWide(main, (u16 *)record->directory, 0x80, text);
        if (nnResultIsFailure(result)) {
            return result;
        }

        memClear(description, sizeof(description));
        AocAttributeName longLabel = aocItemAttributeLabel(3, halfPair48LowByteA(main->contentFile), halfPair48LowByteB(main->contentFile));
        text = (const char *)FUN_00234170(archive, (u32)longLabel.text);
        if (text == NULL) {
            text = "";
        }
        result = textConvertToBoundedWide(main, description, DESCRIPTION_CHARS, text);
        if (nnResultIsFailure(result)) {
            return result;
        }

        AocGlyphReplacement replacements[GLYPH_REPLACEMENTS] = {
            { 0x000A, 0x2501, 0x84AA, 0xF801 },
            { 0x005B, 0x2503, 0x84AB, 0xF816 },
            { 0x002F, 0x250F, 0x84AC, 0xF817 },
            { 0x005D, 0x2513, 0x84AD, 0xF818 },
            { 0x003C, 0x251B, 0x84AE, 0xF804 },
            { 0xFF0D, 0x2542, 0x84BE, 0x817C }
        };
        s32 length = wstrlenU16(description);
        for (s32 position = 0; position < length; ++position) {
            for (s32 which = 0; which < GLYPH_REPLACEMENTS; ++which) {
                if (description[position] == replacements[which].wideFrom) {
                    description[position] = replacements[which].wideTo;
                    break;
                }
            }
        }
        FUN_0026281c(record->contents, description, sizeof(description));

        u16 *contents = (u16 *)record->contents;
        length = wstrlenU16(contents);
        for (s32 position = 0; position < length; ++position) {
            for (s32 which = 0; which < GLYPH_REPLACEMENTS; ++which) {
                if (textCodeSwapBytes(replacements[which].codeFrom) == contents[position]) {
                    contents[position] = textCodeSwapBytes(replacements[which].codeTo);
                    if (which == GLYPH_DIGIT) {
                        contents[position + 1] = (u8)(textCodeSwapBytes(contents[position + 1]) - '0');
                    }
                    break;
                }
            }
        }
        /* the text's terminator: FF FF FF 00 */
        record->contents[length * 2 + 1] = 0xFF;
        record->contents[length * 2 + 2] = 0xFF;
        record->contents[length * 2 + 3] = 0;
        record->contents[length * 2] = 0xFF;

        AocAttributeName iconLabel = aocItemAttributeLabel(5, halfPair48LowByteA(main->contentFile), halfPair48LowByteB(main->contentFile));
        value = FUN_00234170(archive, (u32)iconLabel.text);
        if (value == 0) {
            record->iconId = 0;
            memClear(iconData, sizeof(iconData));
        } else {
            record->iconId = (u16)FUN_002c5e80((const char *)value, NULL, 10);
            if (record->iconId != ICON_NONE) {
                job->result = archiveReadIcon((const ArchiveIconSource *)main->contentFile, iconData, record->iconId);
                result = legacyResourceIdRemap(&job->result);
                if (nnResultIsFailure(result)) {
                    return result;
                }
            } else {
                memClear(iconData, sizeof(iconData));
            }
        }
        FUN_0038bee4((AocIcon *)&record->buffers, iconData);

        job->result = FUN_003df850(archive, &blocks);
        result = legacyResourceIdRemap(&job->result);
        if (nnResultIsFailure(result)) {
            return result;
        }
        record->blocks = blocks;
        DateTimeValue newSince;
        FUN_003df648(&newSince, archive);
        record->modified.milliseconds = newSince.milliseconds;

        u32 licenseTotal = FUN_003df63c(archive);
        AocItemLicense *licenses = (AocItemLicense *)asdOperatorNewB(licenseTotal * sizeof(AocItemLicense), NULL);
        u8 allBit1 = 1;
        u8 allBit0 = 1;
        job->result = FUN_003df7d4(archive, &licenseCount, licenses, licenseTotal, 0);
        if (windowStatusFailed(job->result)) {
            asdOperatorDelete(licenses);
            return legacyResourceIdRemap(&job->result);
        }
        for (u32 license = 0; license < licenseCount; ++license) {
            allBit1 &= objGetFlagBit1(&licenses[license]);
            allBit0 &= objGetFlagBit0(&licenses[license]);
        }
        record->flags[0] = allBit1;
        record->flags[1] = allBit0;
        asdOperatorDelete(licenses);
    }
    if (main->itemRecordCount != kept) {
        jyoucyuGetTableEntry(0);
        main->itemRecordCount = kept;
    }
    return 0;
}

} /* extern "C" */
