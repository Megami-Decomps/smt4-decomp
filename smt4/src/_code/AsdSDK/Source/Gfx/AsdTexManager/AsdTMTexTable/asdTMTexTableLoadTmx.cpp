/* NON_MATCHING: close: relocation loops, string literals and debug traces match; built keeps the flags argument in r9 (retail r5, then spilled to [sp]) and combines the file-flag computation differently */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

void *FUN_002b73a8(u32 size, u32 flags);
void *fileLoadSync(char *path, u8 *size, u32 flags);
char *FUN_0010024c(char *str, u32 ch);
void libc_strcpy(char *dst, const char *src);
void textFormatBuffer(char *dst, const char *format, ...);

extern const char DAT_00409270[];
extern TexTable g_texTable;

/* A group record of the TMX file (0x14 bytes); `texture` is an index until relocated. */
struct TmxGroup {
    /* 0x00 */ s32 unk00[3];
    /* 0x0C */ s32 texture;
    /* 0x10 */ s32 unk10;
};

/* A set record of the TMX file (0x10 bytes). */
struct TmxSet {
    /* 0x00 */ s32 group;        /* index until relocated into a pointer */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 data;         /* offset until relocated into a pointer */
    /* 0x0C */ u32 unk0C;
};

/* Turns the backslashes of a directory path into slashes. */
static __inline void pathUseSlashes(char *path)
{
    char buffer[0x80];
    char *p;

    libc_strcpy(buffer, path);
    for (p = buffer; *p != '\0'; p++) {
        char *slash = FUN_0010024c(p, 0x5C);

        if (slash != NULL) {
            *slash = '/';
        }
    }
    libc_strcpy(path, buffer);
}

/* Loads the TMX container of table entry `index` (once), relocates its offsets into pointers and builds the node
 * list for its sets. Returns the loaded file, or NULL when the file is missing. */
TexFile *asdTMTexTableLoadTmx(s32 index, u32 flags)
{
    TexTableEntry *entry = &g_texTable.entries[index];
    TexFile *loaded = entry->file;

    if (loaded == NULL) {
        TexTableHeader *header = g_texTable.header;
        char path[0x100];
        u8 size[4];
        TmxHeader *file;
        u8 fileFlags;
        u8 *textures;
        TmxGroup *groups;
        TmxSet *sets;
        u8 *data;
        TmxGroup *group;
        TmxSet *set;
        s32 i;

        pathUseSlashes(header->dirPrefix);
        textFormatBuffer(path, "%s%s.%s", header->dirPrefix, entry->name, "ttd");
        fileFlags = (flags & 1) != 0 ? 1 : 0;
        if ((flags & 2) != 0) {
            fileFlags |= 2;
        }
        file = (TmxHeader *)fileLoadSync(path, size, fileFlags);
        if (file == NULL) {
            entry->file = NULL;
            return NULL;
        }
        textures = (u8 *)file + file->texOffset;
        groups = (TmxGroup *)((u8 *)file + file->groupOffset);
        sets = (TmxSet *)((u8 *)file + file->setOffset);
        data = (u8 *)file + file->dataOffset;
        for (group = groups, i = 0; i < file->groupCount; i++, group++) {
            if (group->texture == -1) {
                group->texture = 0;
            } else {
                group->texture = (s32)(textures + group->texture * 0x50);
            }
        }
        for (set = sets, i = 0; i < file->setCount; i++, set++) {
            set->group = (s32)&groups[set->group];
            set->data += (u32)data;
        }
        asdDebugTrace(DAT_00409270, 455);
        loaded = (TexFile *)FUN_002b73a8(0x2C, flags);
        if (file->setCount <= 0) {
            loaded->nodes = NULL;
        } else {
            asdDebugTrace(DAT_00409270, 458);
            loaded->nodes = (TexNode *)FUN_002b73a8(file->setCount << 5, flags);
        }
        {
            TexNode *node = loaded->nodes;
            set = sets;
            for (i = 0; i < file->setCount; i++) {
                node->set = (u32 *)set;
                node->file = loaded;
                node++;
                set++;
            }
        }
        loaded->image = (u8 *)file;
        loaded->image2 = (u8 *)file;
        pathUseSlashes(header->dirPrefix2);
        textFormatBuffer(loaded->path, "%s%s/", header->dirPrefix2, (u8 *)file + 4);
        entry->file = loaded;
    }
    return loaded;
}

} /* extern "C" */
