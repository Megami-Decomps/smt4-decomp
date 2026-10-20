#include "common.h"

extern "C" {

typedef struct Ref {
    /* 0x00 */ u32 kind;
    /* 0x04 */ u32 offset;         /* from the start of the table */
} Ref;

typedef struct RefTable {
    /* 0x00 */ u32 count;
    /* 0x04 */ Ref refs[1];
} RefTable;

typedef struct InfoBlockBody {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 fileTableOffset;
} InfoBlockBody;

/* Returns the file info for the low 24 bits of `id` (0 when out of range). */
u8 *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetFileInfo(InfoBlockBody *body, u32 id)
{
    RefTable *table;
    u8 *info;

    table = (RefTable *)((u8 *)body + body->fileTableOffset);
    if (table->count <= (id & 0xFFFFFF)) {
        info = NULL;
    } else {
        info = (u8 *)table + table->refs[id & 0xFFFFFF].offset;
    }
    return info;
}

} /* extern "C" */
