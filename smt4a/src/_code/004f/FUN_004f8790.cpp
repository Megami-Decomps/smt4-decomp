/* NON_MATCHING: retail keeps &formatted (sp+128) in saved sl for the whole loop and spills the inlined reference search's `name` to the stack slot at sp+128 (reused after formatted); ours keeps name in fp and recomputes the address (147 rows against 150). */
#include "common.h"

/* One effect slot of the battle effect set (0x8C bytes). */
struct BtlEffectEntry {
    /* 0x00 */ u8 id;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ const char *script;
    /* 0x08 */ u8 key[0x84];
};

/* The battle effect set as the name resolver reads it. */
struct BtlEffectWork {
    /* 0x0000 */ u8 unk0000[0x1C00];
    /* 0x1C00 */ u8 unk1C00[0x358];
    /* 0x1F58 */ char (*names)[22];            /* four effect file names, 22 bytes each */
    /* 0x1F5C */ BtlEffectEntry active[4];
    /* 0x218C */ u8 unk218C[0x690];
    /* 0x281C */ BtlEffectEntry references[11]; /* the reference effects the names may match */
};

extern "C" {

extern const char *g_btlEffect[6];
extern const char DAT_0052853c[];  /* NOT_EFT */
extern const char DAT_005284c0[];  /* battle/effect/%s.eft */
extern const char DAT_00528220[];  /* table of the 11 reference effect names, 32 bytes each */

s32 libc_strlen(const char *text);
s32 libc_strcmp(const char *first, const char *second);
s32 libc_strncmp(const char *first, const char *second, s32 count);
void libc_strcpy(char *destination, const char *source);
void sysMemClear(void *memory, u32 size);
void textFormatBuffer(char *destination, const char *format, ...);
u32 keyedRecordRegisterName(u8 *key);
u32 FUN_003478dc(u32 value, const char *script);

/* True when `name` is set and equals `text`. */
static inline bool nameIs(const char *name, const char *text)
{
    return name != NULL && libc_strcmp(name, text) == 0;
}

/* Index of the reference effect whose name starts `name`, or -1. */
static s32 findReferenceEffect(const char *name)
{
    if (name != NULL) {
        for (s32 k = 0; k < 11; k++) {
            const char *reference = DAT_00528220 + k * 32;

            if (libc_strncmp(name, reference, libc_strlen(reference)) == 0) {
                return k;
            }
        }
    }
    return -1;
}

/* Resolves the four effect names of the battle effect set: a name that is not a plain effect file
 * takes the id of the matching reference effect, or a VER script name is registered as a key. */
void FUN_004f8790(BtlEffectWork *work)
{
    char path[128];
    char formatted[128];
    s32 i;

    if (work->names == NULL) {
        return;
    }
    for (i = 0; i < 4; i++) {
        char *name = work->names[i];
        BtlEffectEntry *entry;
        const char *script;
        s32 k;

        if (libc_strlen(name) == 0 || libc_strcmp(name, "0") == 0 || libc_strcmp(DAT_0052853c, name) == 0) {
            continue;
        }
        if (name != NULL && libc_strncmp(name, g_btlEffect[0], libc_strlen(g_btlEffect[0])) == 0) {
            continue;
        }
        if (nameIs(name, g_btlEffect[4])) {
            continue;
        }
        if (name != NULL && libc_strncmp(name, g_btlEffect[3], libc_strlen(g_btlEffect[3])) == 0) {
            continue;
        }
        if (nameIs(name, g_btlEffect[5])) {
            continue;
        }
        sysMemClear(path, 0x80);
        sysMemClear(formatted, 0x80);
        textFormatBuffer(formatted, DAT_005284c0, name);
        libc_strcpy(path, formatted);
        if (libc_strlen(path) == 0) {
            continue;
        }
        k = findReferenceEffect(name);
        if (k >= 0) {
            work->active[i].id = work->references[k].id;
            continue;
        }
        entry = &work->active[i];
        script = entry->script;
        if (script[0] == 'V' && script[1] == 'E' && script[2] == 'R') {
            entry->id = keyedRecordRegisterName(entry->key);
            entry->id = FUN_003478dc(entry->id, script);
        }
    }
}

} /* extern "C" */
