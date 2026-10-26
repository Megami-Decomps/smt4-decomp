#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "script/ScriptArgs_Smt4a.h"

struct ScriptProcess004b {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ u32 state;
};

struct ScriptProcessOwner004b {
    /* 0x0000 */ u8 unk0000[0x439c];
    /* 0x439C */ void *heapA;
    /* 0x43A0 */ ScriptProcess004b *process;
    /* 0x43A4 */ void *heapB;
    /* 0x43A8 */ void *resource;
};

extern "C" {
s32 loadSlotIsLoaded(u32 slot);
ScriptProcess004b *FUN_00275bc8(void *heapA, void *heapB);

/* Once the heaps, load slots 0x14 and 0x25 and the three textures of table 0x1d are ready, creates
 * the script process (first time only) and returns 1; returns 0 while still loading. */
u32 scriptProcessCreateWhenReady(ScriptProcessOwner004b *owner)
{
    s32 loaded;
    s32 i;

    if (owner->heapA == NULL || owner->heapB == NULL || owner->resource == NULL ||
        loadSlotIsLoaded(0x14) == 0 || loadSlotIsLoaded(0x25) == 0) {
        return 0;
    }
    loaded = 0;
    for (i = 0; i < 3; i++) {
        if (asdTMTexTableNodeIsLoaded(0x1d, i) != 0) {
            loaded++;
        }
    }
    if (loaded < 3) {
        return 0;
    }
    if (owner->process == NULL) {
        owner->process = FUN_00275bc8(owner->heapA, owner->heapB);
        owner->process->state = 0;
    }
    return 1;
}

} /* extern "C" */
