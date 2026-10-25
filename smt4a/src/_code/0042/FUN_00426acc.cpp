/* NON_MATCHING: readable rebuild of the shop item table builder from asm (the draft was unstructured); the FUN_004396bc call takes 16 stack words laid out as read from the retail prologue, and the entry word is composed by bit-field masks that armcc here orders differently (retail: bic/orr pairs over one register). */
#include "nn/Result.h"
#include "common.h"

/* One column of a data row: a name and its value. */
struct DataColumn {
    const char *name;
    u32 value;
};

/* One data row (0x30 bytes): two packed id words and its named columns. */
struct DataRow {
    /* 0x00 */ u32 word0;
    /* 0x04 */ u32 word1;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ DataColumn *columns;
    /* 0x1C */ u32 columnCount;
    /* 0x20 */ u8 unk20[0x10];
};

/* The rows of a loaded table. */
struct DataRows {
    /* 0x00 */ DataRow *rows;
    /* 0x04 */ u32 count;
    /* 0x08 */ u32 unk08;
};

/* The table loader. */
struct TableLoader {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ DataRows *rows;
    /* 0x08 */ u32 sizeA;
    /* 0x0C */ u32 sizeB;
};

/* The build configuration (a view over a larger block; null links fall back to the block itself). */
struct TableBuildConfig {
    /* 0x00 */ s32 *first;
    /* 0x04 */ s32 second;
    /* 0x08 */ s32 *third;
    /* 0x0C */ s32 fourth;
    /* 0x10 */ s32 sourceA;
    /* 0x14 */ s32 sourceB;
    /* 0x18 */ s32 *fifth;
    /* 0x1C */ s32 *sixth;
    /* 0x20 */ u8 unk20[8];
    /* 0x28 */ u8 predicate;
    /* 0x29 */ u8 unk29[3];
    /* 0x2C */ s32 seventh;
    /* 0x30 */ s32 eighth;
};

/* A parsed entry: the packed id and its flags. */
struct TableEntry {
    u32 id;
    u32 flags;
};

extern "C" {
extern u8 DAT_00642980;
extern u8 DAT_00642b80;
extern u32 DAT_005c0a8c;
extern u32 DAT_005c0a90;

s32 FUN_00428428(TableLoader *loader, s32 a, s32 b);
u8 *dataGetBlockBase(TableLoader *loader);
u32 FUN_004283e0(TableLoader *loader);
void wordPairClear(void);
void recordTableAppend(const char *name);
void pricingSelectionBuildPredicate(s32 predicate);
s32 FUN_004396bc(s32 a, u32 b, s32 *c, s32 d, u8 *s0, u32 s4, s32 *s8, s32 s12, u8 *s16, u32 s20, u8 *s24, u32 s28,
                 s32 *s32w, u32 s36, s32 *s40, u32 s44, s32 s48, s32 s52, u32 *s56, u32 s60, u32 s64);
s32 libc_strncmp(const char *a, const char *b, u32 count);
u16 FUN_001029f4(u32 value, s32 a, s32 b);
void sysFatalBreak(void);
s32 FUN_00428334(TableLoader *loader, TableEntry *entry, u16 id);

#define TABLE_BUILD_EMPTY ((s32)0xC8A13908)

/* Builds the shop item table: registers the column names, parses the source into the loader and then
 * adds one entry per row (id, kind flags and the row's title version). Returns 0 or a negative error. */
s32 FUN_00426acc(TableLoader *loader, u32 argA, u32 argB, TableBuildConfig *config)
{
    s32 result = FUN_00428428(loader, config->sourceA, config->sourceB);
    if (nnResultIsFailure(result))
        return result;
    u8 *base = dataGetBlockBase(loader);
    u32 size = FUN_004283e0(loader);
    wordPairClear();
    recordTableAppend("Prices");
    recordTableAppend("Ratings");
    recordTableAppend("NewSince");
    recordTableAppend("TitleVersion");
    recordTableAppend("sys.ItemCode");
    pricingSelectionBuildPredicate(config->predicate);
    s32 *first = config->first != NULL ? config->first : (s32 *)config;
    s32 *third = config->third != NULL ? config->third : (s32 *)config;
    s32 *fifth = config->fifth != NULL ? config->fifth : (s32 *)config;
    s32 *sixth = config->sixth != NULL ? config->sixth : (s32 *)config;
    result = FUN_004396bc(argA, argB, first, config->second, &DAT_00642b80, DAT_005c0a90, third, config->fourth,
                          &DAT_00642980, DAT_005c0a8c, base, size, fifth, config->fifth != NULL, sixth,
                          config->sixth != NULL, config->seventh, config->eighth, (u32 *)&loader->rows,
                          loader->sizeA, loader->sizeB);
    if (nnResultIsSuccess(result))
        result = 0;
    if (nnResultIsFailure(result))
        return result;
    for (u32 i = 0; loader->rows != NULL && i < loader->rows->count; i++) {
        DataRow *row = (loader->rows != NULL && i <= loader->rows->count) ? &loader->rows->rows[i] : NULL;
        u32 titleVersion = 0;
        for (u32 c = 0; c < row->columnCount; c++) {
            if (libc_strncmp(row->columns[c].name, "TitleVersion", 64) == 0) {
                titleVersion = row->columns[c].value;
                break;
            }
        }
        u16 version = FUN_001029f4(titleVersion, 0, 10);
        u32 word0 = row->word0;
        u32 word1 = row->word1;
        u32 id = ((word0 >> 8) | (word1 << 24)) & 0xFFFFF;
        u32 category;
        if ((word1 >> 14) == 0x10 && (u16)word1 == 0x8C)
            category = 0;
        else if ((word1 >> 14) == 0x10 && (u16)word1 == 0xD)
            category = 1;
        else
            category = 0xFF;
        u32 kind = ((word0 >> 28) | (word1 << 4)) & 15;
        u32 premium;
        if (kind == 0) {
            premium = 0;
        } else if (kind == 2) {
            premium = 1;
        } else {
            sysFatalBreak();
            premium = 0;
        }
        TableEntry entry;
        entry.id = id;
        entry.flags = category | ((word0 & 0xFF) << 8) | (premium << 16);
        result = FUN_00428334(loader, &entry, version);
        if (nnResultIsFailure(result))
            return result;
    }
    if (loader->rows != NULL && loader->rows->unk08 != 0)
        return 0;
    return TABLE_BUILD_EMPTY;
}

} /* extern "C" */
