/* NON_MATCHING: the frame is allocated before the request check, and armcc keeps the
 * path workspace's base instead of the formatted path's address in a saved register. */
#include "AsdSDK/AsdMemUtil.h"
#include "battle/BtlEffectNameTests.h"
#include "runtime/Stdio.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "shard/W6_W6Match7_KeyedRecordStorage.h"

extern "C" {
extern const char DAT_00400914[];
extern const char DAT_0040090c[]; /* NOT_EFT sentinel. */
extern const char DAT_004008c4[]; /* Battle effect path format. */
u32 FUN_00249e54(u32 id, const char *version);
} /* extern "C" */

/* Registers versioned effects from the first four names of its request. */
extern "C" void btlEffectLoadVersionedResources(BtlEffectWork *owner)
{
    /* unit-local: the workspace used to format and copy the path. */
    struct EffectPaths { char path[128]; char formatted[128]; };

    if (owner->request == NULL)
        return;

    enum { EFFECT_COUNT = 4 };
    s32 index = 0;
    do {
        const char *name = owner->request->names[index];
        if (libc_strlen(name) == 0 || strcmp(name, DAT_00400914) == 0 || strcmp(DAT_0040090c, name) == 0)
            continue;
        if (btlEffectHasNumberedPrefix(name) || btlEffectIsIgnoredName(name) ||
            btlEffectHasIgnoredPrefix(name) || btlEffectIsIgnoredNameB(name))
            continue;

        EffectPaths paths;
        memClear(paths.path, sizeof(paths.path));
        memClear(paths.formatted, sizeof(paths.formatted));
        __2sprintf(paths.formatted, DAT_004008c4, name);
        libc_strcpy((u32 *)paths.path, (u32 *)paths.formatted);
        if (libc_strlen(paths.path) == 0)
            continue;

        BtlEffectFileSlot *slot = &owner->slots[index];
        const char *version = (const char *)slot->file;
        if (version[0] == 'V' && version[1] == 'E' && version[2] == 'R') {
            u32 id = keyedRecordRegisterName(slot->name);
            slot->handle = (u8)id;
            slot->handle = (u8)FUN_00249e54(id, version);
        }
    } while (++index < EFFECT_COUNT);
}
