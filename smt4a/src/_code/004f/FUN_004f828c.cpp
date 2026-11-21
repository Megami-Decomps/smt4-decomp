/* NON_MATCHING: the name tests now repeat retail's NULL tests (header helpers); retail keeps the file buffer's address
 * in fp and work/path in r6 where the build hoists the work's +0x3000 base into fp, and the frame is set up earlier. */
#include "runtime/Stdio.h"
#include "battle/BtlEffectNameTests.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "gamedata/GameDataAccess.h"
#include <string.h>

extern "C" {

extern const char DAT_0052853c[];
extern const char DAT_00528534[];
extern const char DAT_005284c0[];

char *libc_strcpy(char *destination, const char *source);
void sysMemClear(void *buffer, s32 size);
char *libc_strrchr(char *text, s32 character);
void btlCameraFinishTransition(BtlEffectWorkA *work);
u32 filterCreateByKind(u32 first, u32 second, u32 third);

/* Resolves the effects a battle unit asks for: names the battle ignores are skipped, numbered ones
 * select the numbered effect, any other name has its effect file loaded into the unit's slot. */
u32 FUN_004f828c(BtlEffectWorkA *work)
{
    if (work->request == NULL) {
        return 0;
    }
    for (s32 i = 0; i < 4; i++) {
        char *name = work->request->names[4 + i];
        char path[128];
        char file[128];

        if (libc_strlen(name) != 0 && strcmp(name, "0") != 0) {
            if (strcmp(DAT_0052853c, name) != 0 && !btlEffectIsIgnoredName(name)) {
                if (btlEffectHasIgnoredPrefix(name)) {
                    continue;
                }
                if (btlEffectHasNumberedPrefix(name)) {
                    bool found = false;
                    for (s32 n = 0; n < 11; n++) {
                        __2sprintf(file, DAT_00528534, g_btlEffect.numberedPrefix, n);
                        if (strcmp(file, name) == 0) {
                            btlCameraFinishTransition(work);
                            work->numberedEffect = filterCreateByKind(n & 0xff, 7, 0);
                            work->numberedIndex = n;
                            found = true;
                            break;
                        }
                    }
                    if (found) {
                        continue;
                    }
                }
                if (!btlEffectIsIgnoredNameB(name)) {
                    sysMemClear(path, 0x80);
                    sysMemClear(file, 0x80);
                    __2sprintf(file, DAT_005284c0, name);
                    libc_strcpy(path, file);
                    if (libc_strlen(path) != 0) {
                        BtlEffectFileSlot *slot = &work->slots[4 + i];
                        libc_strcpy(slot->name, libc_strrchr(path, '/') + 1);
                        if (findRecordByKey(slot->name) == 0xff) {
                            asdLoadFileAsyncSimple(path, reinterpret_cast<u32 *>(&slot->file), 1);
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
