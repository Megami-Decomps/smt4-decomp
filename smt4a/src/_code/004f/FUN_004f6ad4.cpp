/* NON_MATCHING: the null checks on the name come out as `cmp; beq` with the argument moved afterwards, where retail tests the argument register itself (`movs r0, r6`) and loads the table field after the test; the frame setup and the hoisted slot base register differ accordingly */
#include "battle/BtlEffectLoad.h"

extern "C" {

extern BtlEffectNames g_btlEffect;
extern const char DAT_0052853c[];
extern const char DAT_00528534[];
extern const char DAT_005284c0[];

u32 wstrlen(const char *text);
s32 libc_strcmp(const char *a, const char *b);
s32 libc_strncmp(const char *a, const char *b, u32 count);
char *libc_strcpy(char *destination, const char *source);
void sysMemClear(void *buffer, s32 size);
void textFormatBuffer(char *buffer, const char *format, ...);
char *FUN_00100d60(char *text, s32 character);
s32 findRecordByKey(const char *key);
void btlCameraFinishTransition(BtlEffectWorkA *work);
u32 FUN_002282c8(u32 first, u32 second, u32 third);
void asdLoadFileAsyncSimple(const char *path, void **resource, s32 mode);

/* Resolves the effects a battle unit asks for: names the battle ignores are skipped, numbered ones
 * select the numbered effect, any other name has its effect file loaded into the unit's slot. */
u32 FUN_004f6ad4(BtlEffectWorkA *work)
{
    if (work->request == NULL) {
        return 0;
    }
    for (s32 i = 0; i < 4; i++) {
        char *name = work->request->names[i];
        char path[128];
        char file[128];

        if (wstrlen(name) != 0 && libc_strcmp(name, "0") != 0) {
            if (libc_strcmp(DAT_0052853c, name) != 0 && (name == NULL || libc_strcmp(name, g_btlEffect.ignoredName) != 0)) {
                if (name != NULL) {
                    if (libc_strncmp(name, g_btlEffect.ignoredPrefix, wstrlen(g_btlEffect.ignoredPrefix)) == 0) {
                        continue;
                    }
                }
                if (name != NULL) {
                    if (libc_strncmp(name, g_btlEffect.numberedPrefix, wstrlen(g_btlEffect.numberedPrefix)) == 0) {
                        bool found = false;
                        for (s32 n = 0; n < 11; n++) {
                            textFormatBuffer(file, DAT_00528534, g_btlEffect.numberedPrefix, n);
                            if (libc_strcmp(file, name) == 0) {
                                btlCameraFinishTransition(work);
                                work->numberedEffect = FUN_002282c8(n & 0xff, 7, 0);
                                work->numberedIndex = n;
                                found = true;
                                break;
                            }
                        }
                        if (found) {
                            continue;
                        }
                    }
                }
                if (name == NULL || libc_strcmp(name, g_btlEffect.ignoredNameB) != 0) {
                    sysMemClear(path, 0x80);
                    sysMemClear(file, 0x80);
                    textFormatBuffer(file, DAT_005284c0, name);
                    libc_strcpy(path, file);
                    if (wstrlen(path) != 0) {
                        BtlEffectSlot *slot = &work->slots[i];
                        libc_strcpy(slot->name, FUN_00100d60(path, '/') + 1);
                        if (findRecordByKey(slot->name) == 0xff) {
                            asdLoadFileAsyncSimple(path, &slot->file, 1);
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
