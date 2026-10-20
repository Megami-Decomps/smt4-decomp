#include "shard/Shard003F.h"

extern "C" {

typedef struct NkdwHeader {
    /* 0x00 */ u32 magic;
    /* 0x04 */ u16 count1;
    /* 0x06 */ u16 count3;
    /* 0x08 */ s32 count2;
    /* 0x0C */ u16 count4;
    /* 0x0E */ u8 unk0E[0x1A];
} NkdwHeader;

typedef struct NkdwRec20 {
    /* 0x00 */ u8 data[0x20];
} NkdwRec20;

typedef struct NkdwRec28 {
    /* 0x00 */ u8 data[0x28];
} NkdwRec28;

typedef struct NkdwRec18 {
    /* 0x00 */ u8 data[0x18];
} NkdwRec18;

typedef struct NkdwLoader {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ NkdwHeader *header;
    /* 0x14 */ NkdwRec20 *table14;
    /* 0x18 */ NkdwRec28 *table18;
    /* 0x1C */ u32 *table1C;
    /* 0x20 */ NkdwRec18 *table20;
    /* 0x24 */ NkdwRec18 *table24;
    /* 0x28 */ NkdwHeader *file;
    /* 0x2C */ u8 unk2C[0x10];
    /* 0x3C */ u8 parsed;
} NkdwLoader;

/* Parses the "NKDW" file the loader points at (once): records where each of its tables starts. */
u32 nkdwLoaderParse(NkdwLoader *loader)
{
    NkdwHeader *file = loader->file;
    NkdwRec28 *rec28;
    u32 *words;
    u16 wordCount;

    if (file == NULL) {
        return 0;
    }
    if (loader->parsed == 0) {
        loader->parsed = 1;
        loader->header = file;
        if (file->magic != 0x57444B4E) {
            loader->header = NULL;
        } else {
            loader->table14 = (NkdwRec20 *)(file + 1);
            loader->table18 = (NkdwRec28 *)(loader->table14 + file->count1);
            rec28 = loader->table18 + file->count2;
            loader->table1C = (u32 *)rec28;
            wordCount = file->count3;
            words = (u32 *)rec28;
            loader->table20 = (NkdwRec18 *)(words + wordCount);
            loader->table24 = (NkdwRec18 *)(words + wordCount) + file->count4;
        }
    }
    return 1;
}

} /* extern "C" */
