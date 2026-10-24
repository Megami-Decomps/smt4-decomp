#include "common.h"

/* One 0x18-byte entry; its first word is an id, -1 when unused. */
struct Entry003ab3f8 {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 unk04[0x14];
};

struct Table003ab3f8 {
    /* 0x00 */ Entry003ab3f8 *entries;
};

struct Source003ab3f8 {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 count;
};

struct Object003ab3f8 {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ Table003ab3f8 *table;
    /* 0x40 */ Source003ab3f8 *source;
};

extern "C" {

/* Marks as unused (-1) as many entries of the table as the source holds. */
void FUN_003ab3f8(Object003ab3f8 *object)
{
    Table003ab3f8 *table = object->table;
    Source003ab3f8 *source = object->source;
    Entry003ab3f8 *entries = table->entries;
    s32 count = source->count;

    for (s32 i = 0; i < count; i++)
        entries[i].id = -1;
}

} /* extern "C" */
