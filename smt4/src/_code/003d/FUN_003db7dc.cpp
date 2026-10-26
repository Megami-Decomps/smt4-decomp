/* NON_MATCHING: null-check/branch shapes now match retail; remaining: the frame setup (retail `sub sp` after the table load), `work`/`path` held in a second register (`mov r6,r8` / `mov r6,sp`) where the build keeps them, and the hoisted slot base register */
#include "battle/BtlEffectLoad.h"

extern "C" {

extern BtlEffectNames g_btlEffect;
extern const char DAT_0040090c[];
extern const char DAT_00400904[];
extern const char DAT_004008c4[];

u32 libc_strlen(const char *text);
s32 libc_strcmp(const char *a, const char *b);
s32 libc_strncmp(const char *a, const char *b, u32 count);
char *libc_strcpy(char *destination, const char *source);
void memClear(void *buffer, s32 size);
void textFormatBuffer(char *buffer, const char *format, ...);
char *FUN_002522e0(char *text, s32 character);
s32 keyedRecordFindByName(const char *key);
void FUN_002276f8(BtlEffectWork *work);
u32 FUN_00246644(u32 first, u32 second, u32 third);
void asdLoadFileAsyncSimple(const char *path, void **resource, s32 mode);

static __inline bool isIgnoredName(const char *name)
{
    return name != NULL && libc_strcmp(name, g_btlEffect.ignoredName) == 0;
}

static __inline bool isIgnoredNameB(const char *name)
{
    return name != NULL && libc_strcmp(name, g_btlEffect.ignoredNameB) == 0;
}

static __inline bool hasIgnoredPrefix(const char *name)
{
    return name != NULL && libc_strncmp(name, g_btlEffect.ignoredPrefix, libc_strlen(g_btlEffect.ignoredPrefix)) == 0;
}

static __inline void selectNumberedEffect(BtlEffectWork *work, s32 number)
{
    FUN_002276f8(work);
    work->numberedEffect = FUN_00246644(number & 0xff, 7, 0);
    work->numberedIndex = number;
}

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

        if (libc_strlen(name) != 0 && libc_strcmp(name, "0") != 0) {
            if (libc_strcmp(DAT_0040090c, name) != 0 && !isIgnoredName(name)) {
                if (hasIgnoredPrefix(name)) {
                    continue;
                }
                if (name != NULL) {
                    if (libc_strncmp(name, g_btlEffect.numberedPrefix, libc_strlen(g_btlEffect.numberedPrefix)) == 0) {
                        bool found = false;
                        for (s32 n = 0; n < 11; n++) {
                            textFormatBuffer(file, DAT_00400904, g_btlEffect.numberedPrefix, n);
                            if (libc_strcmp(file, name) == 0) {
                                selectNumberedEffect(work, n);
                                found = true;
                                break;
                            }
                        }
                        if (found) {
                            continue;
                        }
                    }
                }
                if (!isIgnoredNameB(name)) {
                    memClear(path, 0x80);
                    memClear(file, 0x80);
                    textFormatBuffer(file, DAT_004008c4, name);
                    libc_strcpy(path, file);
                    if (libc_strlen(path) != 0) {
                        BtlEffectSlot *slot = &work->slots[4 + i];
                        libc_strcpy(slot->name, FUN_002522e0(path, '/') + 1);
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
