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

/* Result codes the retail code gives as the addresses 0x400000-0x400002. */
extern u8 DAT_00400001;
extern u8 DAT_00400002;
extern EffectEditor g_effectEditor;

extern s32 FUN_002430c8(const char *path, s32 flags, FileInfo *info);
extern EditorEntry *FUN_002f325c(void *current, FileInfo *info);
extern const char **FUN_00246854(void);
extern char *libc_strcpy(char *dst, const char *src);

/* Looks up the effect editor's "effect_editor/ep/" entry: 0x400000 for a directory (type 2); for a
 * file (type 1) copies the current entry's name into it and gives 0x400002; 0x400001 otherwise. */
u8 *FUN_003238d0(void)
{
    FileInfo info;
    u8 *result = &DAT_00400001;

    FUN_002430c8("effect_editor/ep/", 0x20, &info);
    if (info.type == 2) {
        result = (u8 *)0x400000;
    } else if (info.type == 1) {
        if (g_effectEditor.current != NULL) {
            EditorEntry *entry = FUN_002f325c(g_effectEditor.current, &info);

            libc_strcpy(entry->path, *FUN_00246854());
        }
        result = &DAT_00400002;
    }
    return result;
}

} /* extern "C" */
