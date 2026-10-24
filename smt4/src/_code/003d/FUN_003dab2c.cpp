/* NON_MATCHING: the stack layout and register allocation differ - retail keeps the current name pointer in the first word of the 128-byte text buffer and fetches the effect work through r7/r8; the control flow and calls are the same. */
#include "common.h"

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
    /* 0x2BA4 */ u8 unk2ba4[0x3034 - 0x2BA4 + 0x1D00 - 0x1D00];
} EffectWork;

extern const char *g_btlEffect[];           /* name prefixes and special names the table skips */
extern const char DAT_00400664[11][32];     /* "ef_e_ref..." reference names, one per reference slot */
extern const char DAT_0040090c[];           /* "NOT_EFT" */
extern const char DAT_00400904[];           /* "%s%02d" */
extern const char DAT_004008c4[];           /* "battle/effect/%s.eft" */

u32 libc_strlen(const char *s);
s32 libc_strcmp(const char *a, const char *b);
s32 libc_strncmp(const char *a, const char *b, u32 n);
char *libc_strcpy(char *destination, const char *source);
s32 textFormatBuffer(char *buffer, const char *format, ...);
void memClear(void *block, s32 size);
s32 keyedRecordFindByName(const char *name);
void FUN_002276f8(EffectWork *work);
u32 FUN_00246644(u32 index, u32 kind, u32 flag);
char *FUN_002522e0(const char *text, s32 character);
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
        if (libc_strcmp(name, "0") == 0) {
            continue;
        }
        if (libc_strcmp(DAT_0040090c, name) == 0) {
            continue;
        }
        if (name != NULL && libc_strcmp(name, g_btlEffect[4]) == 0) {
            continue;
        }
        if (name != NULL && libc_strncmp(name, g_btlEffect[3], libc_strlen(g_btlEffect[3])) == 0) {
            continue;
        }
        bool selected = false;
        if (name != NULL && libc_strncmp(name, g_btlEffect[0], libc_strlen(g_btlEffect[0])) == 0) {
            for (u32 j = 0; j < 11; j++) {
                textFormatBuffer(text, DAT_00400904, g_btlEffect[0], j);
                if (libc_strcmp(text, name) == 0) {
                    FUN_002276f8(work);
                    *reinterpret_cast<u32 *>(reinterpret_cast<u8 *>(work) + 0x3034) = FUN_00246644(j & 0xff, 7, 0);
                    *(reinterpret_cast<u8 *>(work) + 0x3038) = j;
                    selected = true;
                    break;
                }
            }
            if (selected) {
                continue;
            }
        }
        if (name != NULL && libc_strcmp(name, g_btlEffect[5]) == 0) {
            continue;
        }
        memClear(path, 0x80);
        memClear(text, 0x80);
        textFormatBuffer(text, DAT_004008c4, name);
        libc_strcpy(path, text);
        if (libc_strlen(path) == 0) {
            continue;
        }
        if (name != NULL) {
            bool reference = false;
            for (s32 j = 0; j < 11; j++) {
                if (libc_strncmp(name, DAT_00400664[j], libc_strlen(DAT_00400664[j])) == 0) {
                    reference = true;
                    break;
                }
            }
            if (reference) {
                continue;
            }
        }
        EffectSlot *slot = &work->slots[i];
        libc_strcpy(slot->name, FUN_002522e0(path, '/') + 1);
        if (keyedRecordFindByName(slot->name) == 0xff) {
            asdLoadFileAsyncSimple(path, &slot->file, 0);
            slot->flags |= 1;
        }
    }
    return 1;
}

} /* extern "C" */
