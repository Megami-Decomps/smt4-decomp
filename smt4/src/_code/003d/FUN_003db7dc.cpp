/* NON_MATCHING: the same source as btlEffectResolveRequestedEffects (names 4-7); the null checks on the name come out as `cmp; beq` with the argument moved afterwards, where retail tests the argument register itself (`movs r0, r6`); the frame setup and the hoisted slot base register differ accordingly */
#include "runtime/Stdio.h"
#include "battle/BtlEffectLoad.h"
#include <string.h>

extern "C" {

extern BtlEffectNames g_btlEffect;
extern const char DAT_0040090c[];
extern const char DAT_00400904[];
extern const char DAT_004008c4[];

u32 libc_strlen(const char *text);
s32 libc_strncmp(const char *a, const char *b, u32 count);
char *libc_strcpy(char *destination, const char *source);
void memClear(void *buffer, s32 size);
char *libc_strrchr(char *text, s32 character);
s32 keyedRecordFindByName(const char *key);
void FUN_002276f8(BtlEffectWork *work);
u32 filterCreateByKind(u32 first, u32 second, u32 third);
void asdLoadFileAsyncSimple(const char *path, void **resource, s32 mode);

/* Resolves the effects a battle unit asks for: names the battle ignores are skipped, numbered ones
 * select the numbered effect, any other name has its effect file loaded into the unit's slot. */
u32 FUN_003db7dc(BtlEffectWork *work)
{
    if (work->request == NULL) {
        return 0;
    }
    for (s32 i = 0; i < 4; i++) {
        char *name = work->request->names[4 + i];
        char path[128];
        char file[128];

        if (libc_strlen(name) != 0 && strcmp(name, "0") != 0) {
            if (strcmp(DAT_0040090c, name) != 0 && (name == NULL || strcmp(name, g_btlEffect.ignoredName) != 0)) {
                if (name != NULL) {
                    if (libc_strncmp(name, g_btlEffect.ignoredPrefix, libc_strlen(g_btlEffect.ignoredPrefix)) == 0) {
                        continue;
                    }
                }
                if (name != NULL) {
                    if (libc_strncmp(name, g_btlEffect.numberedPrefix, libc_strlen(g_btlEffect.numberedPrefix)) == 0) {
                        bool found = false;
                        for (s32 n = 0; n < 11; n++) {
                            __2sprintf(file, DAT_00400904, g_btlEffect.numberedPrefix, n);
                            if (strcmp(file, name) == 0) {
                                FUN_002276f8(work);
                                work->numberedIndex = n;
                                work->numberedEffect = filterCreateByKind(n & 0xff, 7, 0);
                                found = true;
                                break;
                            }
                        }
                        if (found) {
                            continue;
                        }
                    }
                }
                if (name == NULL || strcmp(name, g_btlEffect.ignoredNameB) != 0) {
                    memClear(path, 0x80);
                    memClear(file, 0x80);
                    __2sprintf(file, DAT_004008c4, name);
                    libc_strcpy(path, file);
                    if (libc_strlen(path) != 0) {
                        BtlEffectFileSlot *slot = &work->slots[4 + i];
                        libc_strcpy(slot->name, libc_strrchr(path, '/') + 1);
                        if (keyedRecordFindByName(slot->name) == 0xff) {
                            asdLoadFileAsyncSimple(path, &slot->file, 0);
                            slot->flags |= 1;
                        }
                    }
                }
            }
        }
    }
    return 1;
}

}
