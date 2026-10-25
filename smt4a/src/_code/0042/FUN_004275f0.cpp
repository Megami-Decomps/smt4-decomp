/* NON_MATCHING: retail walks the entry list with a re-checked list pointer each pass and orders the packed-record bit tests differently; the catalogue query logic is the same (161 vs 184 rows). */
#include "nn/Result.h"
#include "common.h"

extern "C" {

/* One key/value pair of a catalogue entry. */
typedef struct CatalogPair {
    const char *key;
    const char *value;
} CatalogPair;

/* One catalogue entry (0x30 bytes): a packed id/kind pair and its key/value pairs. */
typedef struct CatalogEntry {
    /* 0x00 */ u32 packedLow;
    /* 0x04 */ u32 packedHigh;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ CatalogPair *pairs;
    /* 0x1C */ u32 pairCount;
    /* 0x20 */ u8 unk20[0x10];
} CatalogEntry;

typedef struct CatalogList {
    /* 0x00 */ CatalogEntry *entries;
    /* 0x04 */ u32 count;
} CatalogList;

/* The catalogue response object (only the fields used here). */
typedef struct Catalog {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ CatalogList *list;
    /* 0x08 */ u32 extraBuffer;
    /* 0x0C */ u32 extraSize;
} Catalog;

/* The request: output buffers for the query (a null buffer pointer means "use the request itself"). */
typedef struct CatalogRequest {
    /* 0x00 */ void *first;
    /* 0x04 */ u32 firstSize;
    /* 0x08 */ void *third;
    /* 0x0C */ u32 thirdCount;
    /* 0x10 */ u32 key0;
    /* 0x14 */ u32 key1;
    /* 0x18 */ void *sixth;
    /* 0x1C */ u32 unk1c[3];
    /* 0x28 */ u8 priceMode;
    /* 0x29 */ u8 unk29[3];
    /* 0x2C */ void *seventh;
    /* 0x30 */ u32 seventhSize;
} CatalogRequest;

extern u8 DAT_00642980[];
extern u8 DAT_00642b80[];
extern u32 DAT_005c0a8c;
extern u32 DAT_005c0a90;

s32 FUN_00428428(Catalog *catalog, u32 a, u32 b);
void *dataGetBlockBase(Catalog *catalog);
u32 FUN_004283e0(Catalog *catalog);
void wordPairClear(void);
void recordTableAppend(const char *key);
void pricingSelectionBuildPredicate(s32 mode);
u32 FUN_00439750(u32 id, u32 option, void *first, u32 firstSize, void *second, u32 secondSize, void *third,
                 u32 thirdCount, void *fourth, u32 fourthCount, void *fifth, u32 fifthCount, void *sixth,
                 u32 sixthCount, void *seventh, u32 seventhSize, u32 *outputCount, void *extraBuffer, u32 extraSize);
s32 libc_strncmp(const char *a, const char *b, u32 count);
u32 FUN_001029f4(const char *text, s32 end, s32 base);
void sysFatalBreak(void);
s32 FUN_00428334(Catalog *catalog, u32 *record, u32 version);

/* Queries the catalogue service for the title `id` and fills `catalog`: appends the six
 * attribute names to ask for, runs the query, then registers every returned entry with its
 * TitleVersion. Returns a negative error code on failure. */
s32 FUN_004275f0(Catalog *catalog, u32 id, u32 option, CatalogRequest *request)
{
    s32 result = FUN_00428428(catalog, request->key0, request->key1);

    if (nnResultIsFailure(result)) {
        return result;
    }
    void *block = dataGetBlockBase(catalog);
    u32 blockSize = FUN_004283e0(catalog);

    wordPairClear();
    recordTableAppend("Prices");
    recordTableAppend("Ratings");
    recordTableAppend("NewSince");
    recordTableAppend("TitleVersion");
    recordTableAppend("sys.ItemCode");
    recordTableAppend("sys.AllowContentOverlap");
    pricingSelectionBuildPredicate(request->priceMode);
    void *first = request->first != NULL ? request->first : request;
    void *third = request->third != NULL ? request->third : request;
    void *sixth = request->sixth != NULL ? request->sixth : request;

    result = FUN_00439750(id, option, first, request->firstSize, DAT_00642980, DAT_005c0a8c, third,
                          request->thirdCount, DAT_00642b80, DAT_005c0a90, block, blockSize, sixth,
                          request->sixth != NULL, request->seventh, request->seventhSize, (u32 *)&catalog->list,
                          (void *)catalog->extraBuffer, catalog->extraSize);
    if (!nnResultIsFailure(result)) {
        result = 0;
    }
    if (nnResultIsFailure(result)) {
        return result;
    }
    for (u32 i = 0; catalog->list != NULL && i < catalog->list->count; i++) {
        CatalogEntry *entry = catalog->list != NULL && i <= catalog->list->count ? &catalog->list->entries[i] : NULL;
        const char *versionText = NULL;

        for (u32 j = 0; j < entry->pairCount; j++) {
            if (libc_strncmp(entry->pairs[j].key, "TitleVersion", 0x40) == 0) {
                versionText = entry->pairs[j].value;
                break;
            }
        }
        u32 version = (u16)FUN_001029f4(versionText, 0, 10);
        u32 high = entry->packedHigh;
        u32 low = entry->packedLow;
        u32 itemId = ((low >> 8) | (high << 24)) & 0xFFFFF;
        u32 kind;

        if ((high >> 14) == 0x10 && (high & 0xFFFF) == 0x8C) {
            kind = 0;
        } else if ((high >> 14) == 0x10 && (high & 0xFFFF) == 0xD) {
            kind = 1;
        } else {
            kind = 0xFF;
        }
        u32 type = ((low >> 28) | (high << 4)) & 0xF;
        u32 typeFlag = 0;

        if (type != 0) {
            if (type == 2) {
                typeFlag = 1;
            } else {
                sysFatalBreak();
            }
        }
        u32 record[2];

        record[0] = itemId;
        record[1] = (typeFlag << 16) | ((low & 0xFF) << 8) | kind;
        result = FUN_00428334(catalog, record, version);
        if (nnResultIsFailure(result)) {
            return result;
        }
    }
    return 0;
}

}
