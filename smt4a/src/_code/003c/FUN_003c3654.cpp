#include "common.h"

extern "C" {

typedef struct FileInfo {
    /* 0x000 */ u8 name[256];
    /* 0x100 */ s32 type;
} FileInfo;

typedef struct EditorEntry {
    /* 0x000 */ u8 unk000[0x9C];
    /* 0x09C */ char path[1];
} EditorEntry;

typedef struct EffectEditor {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ void *current;
} EffectEditor;

/* Result codes: the values 0x400000-0x400002. */
extern EffectEditor g_effectEditor;

extern s32 FUN_0037cdcc(const char *path, s32 flags, FileInfo *info);
extern EditorEntry *FUN_0037667c(void *current, FileInfo *info);
extern const char **FUN_002b30e4(void);
extern char *libc_strcpy(char *dst, const char *src);

/* Looks up the effect editor's "effect_editor/ep/" entry: 0x400000 for a directory (type 2); for a
 * file (type 1) copies the current entry's name into it and gives 0x400002; 0x400001 otherwise. */
u8 *FUN_003c3654(void)
{
    FileInfo info;
    u8 *result = (u8 *)0x400001;

    FUN_0037cdcc("effect_editor/ep/", 0x20, &info);
    if (info.type == 2) {
        result = (u8 *)0x400000;
    } else if (info.type == 1) {
        if (g_effectEditor.current != NULL) {
            EditorEntry *entry = FUN_0037667c(g_effectEditor.current, &info);

            libc_strcpy(entry->path, *FUN_002b30e4());
        }
        result = (u8 *)0x400002;
    }
    return result;
}

} /* extern "C" */
