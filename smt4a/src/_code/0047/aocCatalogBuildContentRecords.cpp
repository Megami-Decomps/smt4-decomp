/* NON_MATCHING: 714 lines (shape 610), the twin of smt4 FUN_0038c224 written as smt4a aocCatalogBuildItemRecords: retail's
 * frame is 0x1C00 bytes (each attribute label copied from its call's temporary into a shared slot), keeps the entry
 * index on the stack and g_aocMain in fp, and passes an unset owner word to both asdOperatorNewE calls. */
#include "addon/AocCatalogQuery.h"
#include "addon/aocIcon.h"
#include "addon/aocMain.h"
#include "classes/Obj422214Owner.h"
#include "classes/WindowStatus.h"
#include "gamedata/GameDataAccess_Shard0050.h"
#include "gamedata/TableEntryRef.h"
#include "nn/Result.h"
#include "nn/fnd/DateTime.h"
#include "nn/fs/ArchivePath.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "shard/W6_W6Match7_ArchiveIcon.h"
#include "shard/W6_W6Match8_ArchiveValues.h"
#include "shard/W6_W6Match8_DateTimeValue.h"
#include "text/TextCode.h"
#include "sys/WindowStatusCheck.h"

/* One licence entry of an item (0x18 bytes); bits 0 and 1 of `flags` are read through objGetFlagBit0/1. */
struct AocItemLicense {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 flags;
    /* 0x11 */ u8 unk11[7];
};

/* A character the content text replaces: `wideFrom` in the decoded text, `codeFrom` (stored with its bytes
 * swapped) once the text is copied into the record. */
struct AocGlyphReplacement {
    /* 0x00 */ u16 wideFrom;
    /* 0x02 */ u16 wideTo;
    /* 0x04 */ u16 codeFrom;
    /* 0x06 */ u16 codeTo;
};

/* What FUN_002345a4 reads for a sale: its text from +0x20 (0x40 bytes). */
struct AocSaleText {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ char text[0x20];
};

/* A sale's name label (0x20 bytes), FUN_003df1d4's result. */
struct AocSaleName {
    /* 0x00 */ u8 bytes[0x20];
};

enum {
    ICON_BYTES = 0x1200,       /* six 0x300-byte strips */
    ICON_NONE = 0xFFFF,
    DESCRIPTION_CHARS = 0x400,
    GLYPH_REPLACEMENTS = 3,
    GLYPH_DIGIT = 4            /* the replacement followed by a digit stored as its value */
};

extern "C" {

void asdOperatorDeleteB(void *memory);
u16 halfPair48LowByteA(void *file);
u16 halfPair48LowByteB(void *file);
u32 FUN_004fff5c(Archive *archive, const char *name);
u32 FUN_001029f4(const char *text, char **end, s32 base);
s32 textConvertToBoundedWide(AocMain *main, u16 *destination, u32 capacity, const void *source);
void FUN_00102bbc(void *destination, const void *source, u32 bytes);
void textExpandSingleByteGlyphs(const u8 *source, s8 *destination, s32 capacity);
char *libc_strcpy(char *destination, const char *source); // declcheck: local (the shared header keeps the decompiler's word-pointer view)
void FUN_004749a0(AocIcon *icon, const u8 *source);
void holderOwnerFree(AocIcon *icon);
WindowStatusResult FUN_004fffc0(Archive *archive, u32 *blocks);
u8 FUN_004ffd38(Archive *archive);
AocSaleName FUN_00500054(Archive *archive);
u32 FUN_004ffd4c(Archive *archive); // declcheck: local (code/Code004f_VariantA.h takes a bare pointer)
WindowStatusResult FUN_004ffee0(Archive *archive, u32 *readCount, AocItemLicense *licenses, u32 count, u32 start);
u8 objGetFlagBit0(AocItemLicense *license);
u8 objGetFlagBit1(AocItemLicense *license);
void dictionaryWasUpdatedSince(DateTimeValue *output, const Archive *source);
s32 nn_fnd_DateTime_GetYear(const DateTimeValue *dateTime); // declcheck: local (protos__code.h has the placeholder prototype)
s32 nn_fnd_DateTime_GetMonth(const DateTimeValue *dateTime); // declcheck: local (protos__code.h has the placeholder prototype)
s32 nn_fnd_DateTime_GetDay(const DateTimeValue *dateTime); // declcheck: local (protos__code.h has the placeholder prototype)
s32 nn_fnd_DateTime_DateToDays(s32 year, s32 month, s32 day);
void stringCopyTruncated(char *destination, const char *source, u32 capacity);

/* Copies the decimal digits of `text` (its first 31 characters) into `digits`, terminated. */
static __inline void aocCopyDigits(char *digits, const s8 *text)
{
    s32 count = 0;
    for (s32 position = 0; position < 31; ++position) {
        s8 character = text[position];
        if (character == '\0') {
            break;
        }
        if ((u32)(character - '0') < 10) {
            digits[count++] = character;
        }
    }
    digits[count] = '\0';
}

/* Rebuilds the AOC records from the content entries released by `job->today`: name, summary and description
 * text, the icon, the size in blocks, the release date, the sale and its value text, and whether every licence
 * of the content has bits 1 and 0 set; a hidden content's record is cleared again. A last, empty record ends
 * the list. Each service read leaves its result in the job; the first failure is returned. */
s32 aocCatalogBuildContentRecords(AocCatalogJob *job)
{
    AocMain *main = g_aocMain;

    if (main->recordCount == 0) {
        return 0;
    }
    if (main->records != NULL) {
        delete[] main->records;
        main->records = NULL;
    }
    main->records = new Obj422214Owner[main->recordCount + 1];

    s32 kept = 0;
    for (u32 index = 0; index < (u32)main->recordCount; ++index) {
        TableEntryRef entry;
        u16 description[DESCRIPTION_CHARS];
        u8 iconData[ICON_BYTES];
        u32 blocks;
        u32 licenseCount;
        s32 result;

        table30GetEntryB((u8 **)&entry.entry, (Table30 *)main->contentRequest, index);
        Archive *archive = (Archive *)&entry;
        DateTimeValue released;
        dictionaryWasUpdatedSince(&released, archive);
        DateTimeValue day = released;
        if (nn_fnd_DateTime_DateToDays(nn_fnd_DateTime_GetYear(&day), nn_fnd_DateTime_GetMonth(&day),
                                       nn_fnd_DateTime_GetDay(&day)) > job->today) {
            continue;
        }
        Obj422214Owner *record = &main->records[kept];
        ++kept;
        record->contentId = (u16)index;

        u32 value = FUN_004fff5c(archive, main->attributeNames[5].text);
        if (value != 0 && FUN_001029f4((const char *)value, NULL, 10) == 1) {
            record->flags[4] = 1;
        }

        AocAttributeName nameLabel = aocItemAttributeLabel(0, halfPair48LowByteA(main->contentFile), halfPair48LowByteB(main->contentFile));
        const char *text = (const char *)FUN_004fff5c(archive, nameLabel.text);
        if (text == NULL) {
            text = "";
        }
        result = textConvertToBoundedWide(main, (u16 *)record->header, 0x40, text);
        if (nnResultIsFailure(result)) {
            return result;
        }

        AocAttributeName shortLabel = aocItemAttributeLabel(2, halfPair48LowByteA(main->contentFile), halfPair48LowByteB(main->contentFile));
        text = (const char *)FUN_004fff5c(archive, shortLabel.text);
        if (text == NULL) {
            text = "";
        }
        result = textConvertToBoundedWide(main, (u16 *)record->directory, 0x80, text);
        if (nnResultIsFailure(result)) {
            return result;
        }

        sysMemClear(description, sizeof(description));
        AocAttributeName longLabel = aocItemAttributeLabel(3, halfPair48LowByteA(main->contentFile), halfPair48LowByteB(main->contentFile));
        text = (const char *)FUN_004fff5c(archive, longLabel.text);
        if (text == NULL) {
            text = "";
        }
        result = textConvertToBoundedWide(main, description, DESCRIPTION_CHARS, text);
        if (nnResultIsFailure(result)) {
            return result;
        }

        AocGlyphReplacement replacements[GLYPH_REPLACEMENTS] = {
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
        value = FUN_004fff5c(archive, iconLabel.text);
        if (value == 0) {
            record->iconId = 0;
            sysMemClear(iconData, sizeof(iconData));
        } else {
            record->iconId = (u16)FUN_001029f4((const char *)value, NULL, 10);
            if (record->iconId != ICON_NONE) {
                job->result = archiveReadIcon((const ArchiveIconSource *)main->contentFile, iconData, record->iconId);
                result = legacyResourceIdRemap(&job->result);
                if (nnResultIsFailure(result)) {
                    return result;
                }
            } else {
                sysMemClear(iconData, sizeof(iconData));
            }
        }
        FUN_004749a0((AocIcon *)&record->buffers, iconData);

        job->result = FUN_004fffc0(archive, &blocks);
        result = legacyResourceIdRemap(&job->result);
        if (nnResultIsFailure(result)) {
            return result;
        }
        record->blocks = blocks;
        dictionaryWasUpdatedSince(&released, archive);
        record->modified.milliseconds = released.milliseconds;

        if (FUN_004ffd38(archive)) {
            AocSaleText sale;
            record->flags[3] = 1;
            AocSaleName saleName = FUN_00500054(archive);
            job->result = FUN_00428060(main->serviceClock, &sale, &saleName);
            result = legacyResourceIdRemap(&job->result);
            if (nnResultIsFailure(result)) {
                return result;
            }
            stringCopyTruncated(record->valueText, sale.text, sizeof(record->valueText));
        } else {
            record->flags[4] = 0;
            value = FUN_004fff5c(archive, main->attributeNames[6].text);
            if (value != 0) {
                libc_strcpy(record->valueText, (const char *)value);
            }
        }
        char digits[32];
        aocCopyDigits(digits, (const s8 *)record->valueText);
        u32 number = FUN_001029f4(digits, NULL, 10);
        if (number == 0) {
            record->flags[5] = 1;
        }
        value = FUN_004fff5c(archive, main->attributeNames[8].text);
        if (value != 0) {
            aocCopyDigits(digits, (const s8 *)value);
            if (FUN_001029f4(digits, NULL, 10) != number) {
                record->flags[6] = 1;
            }
        }

        u32 licenseTotal = FUN_004ffd4c(archive);
        AocItemLicense *licenses = (AocItemLicense *)asdOperatorNewE(licenseTotal * sizeof(AocItemLicense));
        u8 allBit1 = 1;
        u8 allBit0 = 1;
        job->result = FUN_004ffee0(archive, &licenseCount, licenses, licenseTotal, 0);
        if (windowStatusFailed(job->result)) {
            asdOperatorDeleteB(licenses);
            return legacyResourceIdRemap(&job->result);
        }
        for (s32 license = 0; license < (s32)licenseCount; ++license) {
            allBit1 &= objGetFlagBit1(&licenses[license]);
            allBit0 &= objGetFlagBit0(&licenses[license]);
        }
        record->flags[0] = allBit1;
        record->flags[1] = allBit0;
        asdOperatorDeleteB(licenses);

        if (record->flags[0] == 0) {
            value = FUN_004fff5c(archive, main->attributeNames[7].text);
            if (value != 0 && FUN_001029f4((const char *)value, NULL, 10) == 1) {
                --kept;
                holderOwnerFree((AocIcon *)&record->buffers);
                sysMemClear(record->header, sizeof(record->header));
                sysMemClear(record->directory, sizeof(record->directory));
                sysMemClear(record->contents, sizeof(record->contents));
                record->modified = nn::fnd::DateTime(1970, 1, 1, 0, 0, 0, 0);
                record->flags[0] = 0;
                record->flags[1] = 0;
                record->flags[2] = 0;
                record->flags[3] = 0;
                record->flags[4] = 0;
                record->flags[5] = 0;
                record->flags[6] = 0;
                record->flags[7] = 0;
            }
        }
    }
    s32 count = kept + 1;
    main->records[kept].flags[7] = 1;
    main->recordCount = main->recordCount + 1;
    ++main->catalogTotal;
    if (main->recordCount != count) {
        jyoucyuGetTableEntry(0);
        main->recordCount = count;
    }
    return 0;
}

} /* extern "C" */
