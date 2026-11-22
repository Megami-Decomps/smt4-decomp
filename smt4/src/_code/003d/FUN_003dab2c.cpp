/* NON_MATCHING: the control flow and calls are the same; retail addresses the reference-model fields through a second copy of the work pointer made just before FUN_002276f8 (this build hoists work + 0x3000 to the top and spills it), keeps the current name pointer in the first word of the 128-byte text buffer during the reference scan, and allocates the loop registers differently. */
#include "common.h"
#include "runtime/Stdio.h"
#include <string.h>

extern "C" {

/* One effect slot (0x8C bytes). */
typedef struct EffectSlot {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 file;            /* the load request of the effect file */
    /* 0x08 */ char name[0x80];     /* the effect's file name */
    /* 0x88 */ u8 flags;            /* 1: loading */
    /* 0x89 */ u8 unk89[3];
} EffectSlot;

/* The battle effect work block (the name table pointer, the slot array and the reference model state). */
typedef struct EffectWork {
    /* 0x0000 */ u8 unk0000[0x1CFC];
    /* 0x1CFC */ const char (*names)[22];   /* four 22-byte names */
    /* 0x1D00 */ EffectSlot slots[27];
    /* 0x2BC4 */ u8 unk2BC4[0x3034 - 0x2BC4];
    /* 0x3034 */ u32 referenceFilter;   /* the filter of the selected reference model */
    /* 0x3038 */ u8 referenceIndex;     /* the selected reference model */
} EffectWork;

extern const char *g_btlEffect[];           /* name prefixes and special names the table skips */
extern const char DAT_00400664[11][32];     /* "ef_e_ref..." reference names, one per reference slot */
extern const char DAT_0040090c[];           /* "NOT_EFT" */
extern const char DAT_00400904[];           /* "%s%02d" */
extern const char DAT_004008c4[];           /* "battle/effect/%s.eft" */

u32 libc_strlen(const char *s);
s32 libc_strncmp(const char *a, const char *b, u32 n);
char *libc_strcpy(char *destination, const char *source);
void memClear(void *block, s32 size);
s32 keyedRecordFindByName(const char *name);
void FUN_002276f8(EffectWork *work);
u32 filterCreateByKind(u32 index, u32 kind, u32 flag);
char *libc_strrchr(const char *text, s32 character);
void asdLoadFileAsyncSimple(const char *path, u32 *file, s32 flag);

/* Prepares the four effect names: names naming a reference model select it, and every other name that is
 * not special starts loading its battle/effect file unless the record already exists. Returns 1 when the table exists. */
u32 FUN_003dab2c(EffectWork *work)
{
    if (work->names == NULL) {
        return 0;
    }
    char path[128];
    char text[128];
    for (s32 i = 0; i < 4; i++) {
        const char *name = work->names[i];
        if (libc_strlen(name) == 0) {
            continue;
        }
        if (strcmp(name, "0") == 0) {
            continue;
        }
        if (strcmp(DAT_0040090c, name) == 0) {
            continue;
        }
        if (name != NULL && strcmp(name, g_btlEffect[4]) == 0) {
            continue;
        }
        if (name != NULL && libc_strncmp(name, g_btlEffect[3], libc_strlen(g_btlEffect[3])) == 0) {
            continue;
        }
        bool selected = false;
        if (name != NULL && libc_strncmp(name, g_btlEffect[0], libc_strlen(g_btlEffect[0])) == 0) {
            for (s32 j = 0; j < 11; j++) {
                __2sprintf(text, DAT_00400904, g_btlEffect[0], j);
                if (strcmp(text, name) == 0) {
                    FUN_002276f8(work);
                    work->referenceFilter = filterCreateByKind(j & 0xff, 7, 0);
                    work->referenceIndex = j;
                    selected = true;
                    break;
                }
            }
            if (selected) {
                continue;
            }
        }
        if (name != NULL && strcmp(name, g_btlEffect[5]) == 0) {
            continue;
        }
        memClear(path, 0x80);
        memClear(text, 0x80);
        __2sprintf(text, DAT_004008c4, name);
        libc_strcpy(path, text);
        if (libc_strlen(path) == 0) {
            continue;
        }
        if (name != NULL) {
            s32 reference = -1;
            for (s32 j = 0; j < 11; j++) {
                if (libc_strncmp(name, DAT_00400664[j], libc_strlen(DAT_00400664[j])) == 0) {
                    reference = j;
                    break;
                }
            }
            if (reference >= 0) {
                continue;
            }
        }
        EffectSlot *slot = &work->slots[i];
        libc_strcpy(slot->name, libc_strrchr(path, '/') + 1);
        if (keyedRecordFindByName(slot->name) == 0xff) {
            asdLoadFileAsyncSimple(path, &slot->file, 0);
            slot->flags |= 1;
        }
    }
    return 1;
}

} /* extern "C" */
