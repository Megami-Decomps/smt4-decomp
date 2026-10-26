/* NON_MATCHING: same as the IV twin - the stack layout differs (retail keeps the current name pointer in the first word of the 128-byte text buffer) and registers are allocated differently; control flow and calls are the same. */
#include "common.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "gamedata/GameDataAccess.h"

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
    /* 0x0000 */ u8 unk0000[0x1F58];
    /* 0x1F58 */ const char (*names)[22];   /* four 22-byte names */
    /* 0x1F5C */ EffectSlot slots[27];
    /* 0x2BA4 */ u8 unk2ba4[0x33a8 - 0x2BA4 + 0x1F5C - 0x1F5C];
} EffectWork;

extern const char *g_btlEffect[];           /* name prefixes and special names the table skips */
extern const char DAT_00528220[11][32];     /* "ef_e_ref..." reference names, one per reference slot */
extern const char DAT_0052853c[];           /* "NOT_EFT" */
extern const char DAT_00528534[];           /* "%s%02d" */
extern const char DAT_005284c0[];           /* "battle/effect/%s.eft" */

u32 libc_strlen(const char *s);
s32 libc_strcmp(const char *a, const char *b);
s32 libc_strncmp(const char *a, const char *b, u32 n);
char *libc_strcpy(char *destination, const char *source);
s32 textFormatBuffer(char *buffer, const char *format, ...);
void sysMemClear(void *block, s32 size);
void btlCameraFinishTransition(EffectWork *work);
u32 FUN_002282c8(u32 index, u32 kind, u32 flag);
char *FUN_00100d60(const char *text, s32 character);

/* Prepares the four effect names: names naming a reference model select it, and every other name that is
 * not special starts loading its battle/effect file unless the record already exists. Returns 1 when the table exists. */
u32 FUN_004f716c(EffectWork *work)
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
        if (libc_strcmp(DAT_0052853c, name) == 0) {
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
                textFormatBuffer(text, DAT_00528534, g_btlEffect[0], j);
                if (libc_strcmp(text, name) == 0) {
                    btlCameraFinishTransition(work);
                    *reinterpret_cast<u32 *>(reinterpret_cast<u8 *>(work) + 0x33a8) = FUN_002282c8(j & 0xff, 7, 0);
                    *(reinterpret_cast<u8 *>(work) + 0x33ac) = j;
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
        sysMemClear(path, 0x80);
        sysMemClear(text, 0x80);
        textFormatBuffer(text, DAT_005284c0, name);
        libc_strcpy(path, text);
        if (libc_strlen(path) == 0) {
            continue;
        }
        if (name != NULL) {
            bool reference = false;
            for (s32 j = 0; j < 11; j++) {
                if (libc_strncmp(name, DAT_00528220[j], libc_strlen(DAT_00528220[j])) == 0) {
                    reference = true;
                    break;
                }
            }
            if (reference) {
                continue;
            }
        }
        EffectSlot *slot = &work->slots[i];
        libc_strcpy(slot->name, FUN_00100d60(path, '/') + 1);
        if (findRecordByKey(slot->name) == 0xff) {
            asdLoadFileAsyncSimple(path, &slot->file, 1);
            slot->flags |= 1;
        }
    }
    return 1;
}

} /* extern "C" */
