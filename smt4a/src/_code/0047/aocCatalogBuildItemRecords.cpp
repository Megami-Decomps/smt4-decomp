/* NON_MATCHING: 351 lines (shape 283). Retail's frame holds five more 0x40-byte labels (0x1C00 against 0x1AC0):
 * each aocItemAttributeLabel result lands in a compiler temporary and is copied (two 8-word ldm/stm) into a second
 * slot whose address goes to archiveFindEntryValue, as for a key class with a copy constructor passed by value; the
 * shared declarations take plain pointers, so the labels are passed in place here. Retail also hands both
 * asdOperatorNewE calls a second argument it never set (r5, then g_aocMain's register), which is not written, tests
 * the looked-up text in r0 before moving it to r3, and stores the terminator bytes with mvn #0. */
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
    DESCRIPTION_CHARS = 0x400
};

extern "C" {

void asdOperatorDeleteB(void *memory);
s32 legacyResourceIdRemap(const WindowStatusResult *result); // declcheck: local (the shared declarations take a packed id or a bare pointer and return u32)
u16 halfPair48LowByteA(void *file);
u16 halfPair48LowByteB(void *file);
u32 archiveFindEntryValue(Archive *archive, u32 key);
u32 FUN_001029f4(const char *text, char **end, s32 base);
void FUN_00102bbc(void *destination, const void *source, u32 bytes);
void textExpandSingleByteGlyphs(const u8 *source, s8 *destination, s32 capacity);
char *libc_strcpy(char *destination, const char *source); // declcheck: local (the shared header keeps the decompiler's word-pointer view)
s32 textConvertToBoundedWide(AocMain *main, u16 *destination, u32 capacity, const void *source);
void FUN_004749a0(AocIcon *icon, const u8 *source);
WindowStatusResult FUN_00500788(Archive *archive, u32 *blocks);
u32 FUN_00500514(Archive *archive);
WindowStatusResult FUN_005006a8(Archive *archive, u32 *readCount, void *records, u32 count, u32 start);
u32 objGetFlagBit0(AocItemLicense *license);
u32 objGetFlagBit1(AocItemLicense *license);

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
        AocAttributeName label;
        u32 blocks;
        u32 licenseCount;
        s32 result;

        table30GetEntry((u8 **)&entry.entry, (Table30 *)main->itemRequest, index);
        Obj422214Owner *record = &main->selectedRecord[kept];
        ++kept;
        record->contentId = (u16)index;
        Archive *archive = (Archive *)&entry;

        u32 value = archiveFindEntryValue(archive, (u32)main->attributeNames[5].text);
        if (value != 0 && FUN_001029f4((const char *)value, NULL, 10) == 1) {
            record->flags[4] = 1;
        }

        aocItemAttributeLabel(label.text, 0, halfPair48LowByteA(main->contentFile), halfPair48LowByteB(main->contentFile));
        const char *text = (const char *)archiveFindEntryValue(archive, (u32)label.text);
        if (text == NULL) {
            text = "";
        }
        result = textConvertToBoundedWide(main, (u16 *)record->header, 0x40, text);
        if (nnResultIsFailure(result)) {
            return result;
        }

        aocItemAttributeLabel(label.text, 2, halfPair48LowByteA(main->contentFile), halfPair48LowByteB(main->contentFile));
        text = (const char *)archiveFindEntryValue(archive, (u32)label.text);
        if (text == NULL) {
            text = "";
        }
        result = textConvertToBoundedWide(main, (u16 *)record->directory, 0x80, text);
        if (nnResultIsFailure(result)) {
            return result;
        }

        sysMemClear(description, sizeof(description));
        aocItemAttributeLabel(label.text, 3, halfPair48LowByteA(main->contentFile), halfPair48LowByteB(main->contentFile));
        text = (const char *)archiveFindEntryValue(archive, (u32)label.text);
        if (text == NULL) {
            text = "";
        }
        result = textConvertToBoundedWide(main, description, DESCRIPTION_CHARS, text);
        if (nnResultIsFailure(result)) {
            return result;
        }

        AocGlyphReplacement replacements[3] = {
            { 0x000A, 0x2501, 0x84AA, 0xF801 },
            { 0x003C, 0x251B, 0x84AE, 0xF804 },
            { 0xFF0D, 0x2542, 0x84BE, 0x817C }
        };
        u16 *character = description;
        for (s32 left = wstrlenU16(description); left > 0; --left) {
            if (*character == replacements[0].wideFrom) {
                *character = replacements[0].wideTo;
            } else if (*character == replacements[1].wideFrom) {
                *character = replacements[1].wideTo;
            } else if (*character == replacements[2].wideFrom) {
                *character = replacements[2].wideTo;
            }
            ++character;
        }
        FUN_00102bbc(record->contents, description, sizeof(description));
        textExpandSingleByteGlyphs(record->contents, (s8 *)description, sizeof(description) - 2);
        libc_strcpy((char *)record->contents, (const char *)description);

        u16 *contents = (u16 *)record->contents;
        s32 length = wstrlenU16(contents);
        for (s32 position = 0; position < length; ++position) {
            for (s32 which = 0; which < 3; ++which) {
                if (textCodeSwapBytes(replacements[which].codeFrom) == contents[position]) {
                    contents[position] = textCodeSwapBytes(replacements[which].codeTo);
                    if (which == 4) {
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

        aocItemAttributeLabel(label.text, 5, halfPair48LowByteA(main->contentFile), halfPair48LowByteB(main->contentFile));
        value = archiveFindEntryValue(archive, (u32)label.text);
        if (value == 0) {
            record->unk9A8 = 0;
            sysMemClear(iconData, sizeof(iconData));
        } else {
            record->unk9A8 = (u16)FUN_001029f4((const char *)value, NULL, 10);
            if (record->unk9A8 != ICON_NONE) {
                job->result = archiveReadIcon((const ArchiveIconSource *)main->contentFile, iconData, record->unk9A8);
                result = legacyResourceIdRemap(&job->result);
                if (nnResultIsFailure(result)) {
                    return result;
                }
            } else {
                sysMemClear(iconData, sizeof(iconData));
            }
        }
        FUN_004749a0((AocIcon *)&record->buffers, iconData);

        job->result = FUN_00500788(archive, &blocks);
        result = legacyResourceIdRemap(&job->result);
        if (nnResultIsFailure(result)) {
            return result;
        }
        *(u32 *)&record->unk9B4[4] = blocks;
        DateTimeValue newSince;
        archiveReadNewsSinceDateTime(&newSince, archive);
        record->modified.milliseconds = newSince.milliseconds;

        u32 licenseTotal = FUN_00500514(archive);
        AocItemLicense *licenses = (AocItemLicense *)asdOperatorNewE(licenseTotal * sizeof(AocItemLicense));
        u8 allBit1 = 1;
        u8 allBit0 = 1;
        job->result = FUN_005006a8(archive, &licenseCount, licenses, licenseTotal, 0);
        if (nnResultIsFailure(legacyResourceIdRemap(&job->result))) {
            asdOperatorDeleteB(licenses);
            return legacyResourceIdRemap(&job->result);
        }
        for (u32 license = 0; license < licenseCount; ++license) {
            allBit1 &= objGetFlagBit1(&licenses[license]);
            allBit0 &= objGetFlagBit0(&licenses[license]);
        }
        record->flags[0] = allBit1;
        record->flags[1] = allBit0;
        asdOperatorDeleteB(licenses);
    }
    if (main->itemRecordCount != kept) {
        jyoucyuGetTableEntry(0);
        main->itemRecordCount = kept;
    }
    return 0;
}

} /* extern "C" */
