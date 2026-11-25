/* NON_MATCHING: the frame is allocated before the request check, and armcc keeps the
 * path workspace's base instead of the formatted path's address in a saved register. */
#include "AsdSDK/AsdMemUtil.h"
#include "battle/BtlEffectNameTests.h"
#include "runtime/Stdio.h"
#include "shard/W6_W6Match7_KeyedRecordStorage.h"

extern "C" {
extern const char DAT_00528544[];
extern const char DAT_0052853c[]; /* NOT_EFT sentinel. */
extern const char DAT_005284c0[]; /* Battle effect path format. */
char *libc_strcpy(char *destination, const char *source);
u32 FUN_003478dc(u32 id, const char *version);
} /* extern "C" */

/* Registers versioned effects from the second half of the request's name table. */
extern "C" void btlEffectLoadSecondaryResources(BtlEffectWorkA *owner)
{
    /* unit-local: the workspace used to format and copy the path. */
    struct EffectPaths { char path[128]; char formatted[128]; };

    if (owner->request == NULL)
        return;

    enum { SECONDARY_START = 4, SECONDARY_COUNT = 4 };
    s32 index = 0;
    do {
        const char *name = owner->request->names[index + SECONDARY_START];
        if (libc_strlen(name) == 0 || strcmp(name, DAT_00528544) == 0 || strcmp(DAT_0052853c, name) == 0)
            continue;
        if (btlEffectHasNumberedPrefix(name) || btlEffectIsIgnoredName(name) ||
            btlEffectHasIgnoredPrefix(name) || btlEffectIsIgnoredNameB(name))
            continue;

        EffectPaths paths;
        sysMemClear(paths.path, sizeof(paths.path));
        sysMemClear(paths.formatted, sizeof(paths.formatted));
        __2sprintf(paths.formatted, DAT_005284c0, name);
        libc_strcpy(paths.path, paths.formatted);
        if (libc_strlen(paths.path) == 0)
            continue;

        BtlEffectFileSlot *slot = &owner->slots[index + SECONDARY_START];
        const char *version = (const char *)slot->file;
        if (version[0] == 'V' && version[1] == 'E' && version[2] == 'R') {
            u32 id = keyedRecordRegisterName(slot->name);
            slot->handle = (u8)id;
            slot->handle = (u8)FUN_003478dc(id, version);
        }
    } while (++index < SECONDARY_COUNT);
}
