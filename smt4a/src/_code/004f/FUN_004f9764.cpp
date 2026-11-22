/* NON_MATCHING: 166 vs 166 rows (72 diff lines): matches the smt4 twin FUN_003dc68c (nameEquals/nameStartsWith by reference); remaining differences are the hoisted work+0x3000 base (retail hoists buffer pointer into fp) and entry address formation before NULL tests. */
#include "common.h"
#include "runtime/Stdio.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/AsdMemUtil.h"
#include "gamedata/GameDataAccess.h"
#include "shard/W6_W6Match3_RotationY.h"
#include <string.h>

/* One effect load slot (0x8C bytes). */
struct EffectSlot {
    u8 unk00[4];
    u32 file;
    char name[0x80];
    u8 flags;
    u8 unk89[3];
};

/* The battle effect work (accessed fields). */
struct BtlEffectWork {
    u8 unk0000[0x1F54];
    char *names;
    u8 unk1F58[0x25EC - 0x1F58];
    EffectSlot slots[4];
    u8 unk281C[0x33A8 - 0x281C];
    u32 bufferHandle;
    u8 bufferIndex;
};

extern "C" {
extern const char *g_btlEffect[6];
extern const char DAT_0052853c[]; /* "NOT_EFT" */
extern const char DAT_00528534[]; /* "%s%02d" */
extern const char DAT_005284c0[]; /* "battle/effect/%s.eft" */
u32 libc_strlen(const char *text);
s32 libc_strncmp(const char *a, const char *b, u32 count);
char *libc_strcpy(char *dest, const char *src);
void btlCameraFinishTransition(BtlEffectWork *work);
char *libc_strrchr(const char *text, s32 character);
} /* extern "C" */

static __inline bool nameEquals(const char *name, const char *const &other)
{
    return name != 0 && strcmp(name, other) == 0;
}

static __inline bool nameStartsWith(const char *name, const char *const &prefix)
{
    return name != 0 && libc_strncmp(name, prefix, libc_strlen(prefix)) == 0;
}

/* Start loading the effect file of every named battle effect that is not already known. */
extern "C" u32 FUN_004f9764(BtlEffectWork *work)
{
    if (work->names == 0) {
        return 0;
    }
    char path[128];
    char buffer[128];
    for (s32 i = 0; i < 4; i++) {
        const char *name = work->names + 0x108 + i * 0x16;
        if (libc_strlen(name) == 0 || strcmp(name, "0") == 0) {
            continue;
        }
        if (strcmp(DAT_0052853c, name) == 0) {
            continue;
        }
        if (name != 0 && (strcmp(name, g_btlEffect[1]) == 0 || strcmp(name, g_btlEffect[2]) == 0)) {
            continue;
        }
        if (nameEquals(name, g_btlEffect[4])) {
            continue;
        }
        if (nameStartsWith(name, g_btlEffect[3])) {
            continue;
        }
        if (nameStartsWith(name, g_btlEffect[0])) {
            bool found = false;
            for (s32 n = 0; n < 11; n++) {
                __2sprintf(buffer, DAT_00528534, g_btlEffect[0], n);
                if (strcmp(buffer, name) == 0) {
                    btlCameraFinishTransition(work);
                    work->bufferHandle = (u32)filterCreateByKind(n & 0xFF, 7, 0);
                    work->bufferIndex = n;
                    found = true;
                    break;
                }
            }
            if (found) {
                continue;
            }
        }
        if (nameEquals(name, g_btlEffect[5])) {
            continue;
        }
        sysMemClear(path, 128);
        sysMemClear(buffer, 128);
        __2sprintf(buffer, DAT_005284c0, name);
        libc_strcpy(path, buffer);
        if (libc_strlen(path) != 0) {
            EffectSlot *slot = &work->slots[i];
            libc_strcpy(slot->name, libc_strrchr(path, '/') + 1);
            if (findRecordByKey(slot->name) == 0xFF) {
                asdLoadFileAsyncSimple(path, &slot->file, 1);
                slot->flags |= 1;
            }
        }
    }
    return 1;
}
