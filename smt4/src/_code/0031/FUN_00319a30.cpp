#include "common.h"

/* One 0x2c-byte entry; its first word is an id, -1 when unused. */
struct Entry00319a30 {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 unk04[0x28];
};

struct Table00319a30 {
    /* 0x00 */ Entry00319a30 *entries;
};

struct Source00319a30 {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 count;
};

struct Object00319a30 {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ Table00319a30 *table;
    /* 0x40 */ Source00319a30 *source;
};

extern "C" {

/* Marks as unused (-1) as many entries of the table as the source holds. */
void FUN_00319a30(Object00319a30 *object)
{
    Table00319a30 *table = object->table;
    Source00319a30 *source = object->source;
    Entry00319a30 *entries = table->entries;
    s32 count = source->count;

    for (s32 i = 0; i < count; i++)
        entries[i].id = -1;
}

} /* extern "C" */
