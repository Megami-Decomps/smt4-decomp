/* NON_MATCHING: register allocation and block layout differ (retail keeps the scratch buffer pointer in fp and the effect-name table in r9, and the slot base is not hoisted); logic equivalent. */
#include "common.h"
#include <string.h>

/* Names the battle effect loader recognises (g_btlEffect). */
struct BtlEffectNames {
    const char *bufferPrefix;     // 0x00: "<prefix>NN" effects
    const char *reservedA;          // 0x04
    const char *reservedB;          // 0x08
    const char *prefix;             // 0x0C
    const char *reservedC;          // 0x10
    const char *skipName;           // 0x14
};

/* One effect load slot (0x8C bytes). */
struct EffectSlot {
    u8 unk00[4];
    void *file;                 // 0x04 (slot + 0x2394)
    char name[0x80];            // 0x08
    u8 flags;                   // 0x88
    u8 unk89[3];
};

/* The battle effect work (accessed fields). */
struct BtlEffectWork {
    u8 unk0000[0x1CFC];
    char *names;                // 0x1CFC: entries of 0x16 bytes from +0x108
    u8 unk1D00[0x694];
    EffectSlot slots[4];        // 0x2394 - 4
    u8 unk25C4[0xA70];
    u32 bufferHandle;         // 0x3034
    u8 bufferIndex;           // 0x3038
};

extern "C" {
extern BtlEffectNames g_btlEffect;
extern const char DAT_0040090c[];   /* "NOT_EFT" */
extern const char DAT_00400904[];   /* "%s%02d" */
extern const char DAT_004008c4[];   /* "battle/effect/%s.eft" */
u32 libc_strlen(const char *text);
s32 libc_strcmp(const char *a, const char *b);
s32 libc_strncmp(const char *a, const char *b, u32 count);
char *libc_strcpy(char *dest, const char *src);
void memClear(void *buffer, s32 size);
s32 textFormatBuffer(char *buffer, const char *format, ...);
void FUN_002276f8(BtlEffectWork *work);
u32 FUN_00246644(u32 index, u32 a, u32 b);
char *FUN_002522e0(const char *text, s32 character);
s32 keyedRecordFindByName(const char *name);
void asdLoadFileAsyncSimple(const char *path, void **file, s32 flags);
}

static __inline bool nameEquals(const char *name, const char *other)
{
    return name != 0 && libc_strcmp(name, other) == 0;
}

static __inline bool nameStartsWith(const char *name, const char *prefix)
{
    return name != 0 && libc_strncmp(name, prefix, libc_strlen(prefix)) == 0;
}

/* Start loading the effect file of every named battle effect that is not already known. */
extern "C" u32 FUN_003dc68c(BtlEffectWork *work)
{
    if (work->names == 0)
        return 0;
    char path[128];
    char buffer[128];
    for (s32 i = 0; i < 4; i++) {
        const char *name = work->names + 0x108 + i * 0x16;
        if (libc_strlen(name) == 0 || libc_strcmp(name, "0") == 0)
            continue;
        if (libc_strcmp(DAT_0040090c, name) == 0)
            continue;
        if (name != 0 && (libc_strcmp(name, g_btlEffect.reservedA) == 0 || libc_strcmp(name, g_btlEffect.reservedB) == 0))
            continue;
        if (nameEquals(name, g_btlEffect.reservedC))
            continue;
        if (nameStartsWith(name, g_btlEffect.prefix))
            continue;
        if (nameStartsWith(name, g_btlEffect.bufferPrefix)) {
            bool found = false;
            for (s32 n = 0; n < 11; n++) {
                textFormatBuffer(buffer, DAT_00400904, g_btlEffect.bufferPrefix, n);
                if (libc_strcmp(buffer, name) == 0) {
                    FUN_002276f8(work);
                    work->bufferHandle = FUN_00246644(n & 0xFF, 7, 0);
                    work->bufferIndex = n;
                    found = true;
                    break;
                }
            }
            if (found)
                continue;
        }
        if (nameEquals(name, g_btlEffect.skipName))
            continue;
        memClear(path, 128);
        memClear(buffer, 128);
        textFormatBuffer(buffer, DAT_004008c4, name);
        libc_strcpy(path, buffer);
        if (libc_strlen(path) != 0) {
            EffectSlot *slot = &work->slots[i];
            libc_strcpy(slot->name, FUN_002522e0(path, '/') + 1);
            if (keyedRecordFindByName(slot->name) == 0xFF) {
                asdLoadFileAsyncSimple(path, &slot->file, 0);
                slot->flags |= 1;
            }
        }
    }
    return 1;
}
