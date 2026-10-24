/* NON_MATCHING: retail keeps every `name != NULL` test and the name/path/work pointers share registers (mov r6,sp / mov r6,r8); armcc here threads the redundant null tests and keeps separate registers */
#include "common.h"
#include "battle/btlEffect.h"

/* The effect names of one battle, 0x16 bytes each, after a 0x108 byte header. */
struct BtlEffectNameTable {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ BtlEffectSlot names[BTL_EFFECT_SLOTS];
};

/* An effect file being loaded: its data, requested name and state. */
struct BtlEffectLoad {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *file;   /* asynchronously loaded effect file */
    /* 0x08 */ char name[0x80]; /* file name without its directory */
    /* 0x88 */ u8 flags;     /* bit 0: load requested */
    /* 0x89 */ u8 unk89[3];
};

struct BtlEffectWork {
    /* 0x0000 */ u8 unk0000[0x1F54];
    /* 0x1F54 */ BtlEffectNameTable *names;
    /* 0x1F58 */ u8 unk1F58[0x25EC - 0x1F58];
    /* 0x25EC */ BtlEffectLoad loads[BTL_EFFECT_SLOTS];
    /* 0x281C */ u8 unk281C[0x33A8 - 0x281C];
    /* 0x33A8 */ u32 transition;
    /* 0x33AC */ u8 transitionEffect;
};

typedef char BtlEffectWorkOffsets[offsetof(BtlEffectWork, names) == 0x1F54 &&
    offsetof(BtlEffectWork, loads) == 0x25EC &&
    sizeof(BtlEffectLoad) == 0x8C &&
    offsetof(BtlEffectWork, transition) == 0x33A8 ? 1 : -1];

extern "C" {

extern BtlEffectGlobals g_btlEffect;
extern const char DAT_0052853c[]; /* "NOT_EFT" */
extern const char DAT_00528534[]; /* "%s%02d" */
extern const char DAT_005284c0[]; /* "battle/effect/%s.eft" */

u32 wstrlen(const char *text);
s32 libc_strcmp(const char *a, const char *b);
s32 libc_strncmp(const char *a, const char *b, u32 count);
char *libc_strcpy(char *dest, const char *src);
void textFormatBuffer(char *buffer, const char *format, ...);
void sysMemClear(void *buffer, u32 bytes);
char *FUN_00100d60(const char *text, s32 character);
s32 findRecordByKey(const char *key);
void asdLoadFileAsyncSimple(const char *path, void **output, u32 flags);
void btlCameraFinishTransition(BtlEffectWork *work);
u32 FUN_002282c8(u32 effect, u32 a, u32 b);

/* Requests the loading of every effect the battle names; returns 0 when it has no name table. */
u32 FUN_004f9764(BtlEffectWork *work)
{
    s32 i;

    if (work->names == NULL) {
        return 0;
    }
    for (i = 0; i < BTL_EFFECT_SLOTS; i++) {
        const char *name = work->names->names[i].name;
        char path[128];
        char text[128];
        s32 n;

        if (wstrlen(name) == 0 || libc_strcmp(name, "0") == 0) {
            continue;
        }
        if (libc_strcmp(DAT_0052853c, name) != 0 &&
            (name == NULL || (libc_strcmp(name, g_btlEffect.skipped.skipFirst) != 0 &&
                              libc_strcmp(name, g_btlEffect.skipped.skipSecond) != 0)) &&
            (name == NULL || libc_strcmp(name, g_btlEffect.reserved.name) != 0)) {
            if (name != NULL && libc_strncmp(name, g_btlEffect.otherPrefix, wstrlen(g_btlEffect.otherPrefix)) == 0) {
                continue;
            }
            if (name != NULL && libc_strncmp(name, g_btlEffect.prefix, wstrlen(g_btlEffect.prefix)) == 0) {
                for (n = 0; n < 11; n++) {
                    textFormatBuffer(text, DAT_00528534, g_btlEffect.prefix, n);
                    if (libc_strcmp(text, name) == 0) {
                        btlCameraFinishTransition(work);
                        work->transition = FUN_002282c8(n & 0xff, 7, 0);
                        work->transitionEffect = n;
                        break;
                    }
                }
                if (n < 11) {
                    continue;
                }
            }
            if (name == NULL || libc_strcmp(name, g_btlEffect.reserved.otherName) != 0) {
                sysMemClear(path, sizeof(path));
                sysMemClear(text, sizeof(text));
                textFormatBuffer(text, DAT_005284c0, name);
                libc_strcpy(path, text);
                if (wstrlen(path) != 0) {
                    BtlEffectLoad *load = &work->loads[i];

                    libc_strcpy(load->name, FUN_00100d60(path, '/') + 1);
                    if (findRecordByKey(load->name) == 0xff) {
                        asdLoadFileAsyncSimple(path, &load->file, 1);
                        load->flags |= 1;
                    }
                }
            }
        }
    }
    return 1;
}

} /* extern "C" */
