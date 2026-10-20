#include "common.h"

extern "C" {

typedef struct FileInfoEntry {
    /* 0x0 */ u32 offset;   /* relative to the table */
    /* 0x4 */ u32 unk4;
} FileInfoEntry;

typedef struct FileInfoTable {
    /* 0x0 */ u32 count;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ FileInfoEntry entries[1];
} FileInfoTable;

typedef struct InfoBlockBody {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 fileInfoTableOffset;
} InfoBlockBody;

/* Address of the file info for the low 24 bits of `id`, or 0 when out of range. */
s32 nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetFileInfo(InfoBlockBody *body, u32 id)
{
    FileInfoTable *table = (FileInfoTable *)((s32)body + body->fileInfoTableOffset);
    s32 result;

    if (table->count <= (id & 0xffffff)) {
        result = 0;
    } else {
        result = (s32)table + table->entries[id & 0xffffff].offset;
    }
    return result;
}

} /* extern "C" */
