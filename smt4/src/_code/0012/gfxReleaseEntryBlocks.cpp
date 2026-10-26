#include "common.h"
#include "shard/W6_W6Match7_DefaultTextureWork.h"

namespace {
struct GfxReleaseEntry {
    /* 0x00 */ void *mainData;
    /* 0x04 */ void *subData;
    /* 0x08 */ u32 unk08[3];
    /* 0x14 */ u32 mainKind;
    /* 0x18 */ s32 kind;
};
struct GfxReleaseTarget {
    /* 0x00 */ u32 address;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ GfxReleaseEntry *entry;
};
}

extern "C" {
extern DriverTextureRelease *g_gfxReleaseCallback;

// Hand an entry's main and sub blocks back to the driver, then clear both block pointers.
void gfxReleaseEntryBlocks(GfxReleaseTarget *target)
{
    GfxReleaseEntry *entry = target->entry;
    switch (entry->kind) {
    case 0x2020000:
    case 0x2030000:
        if (entry->mainData != NULL && g_gfxReleaseCallback != NULL)
            g_gfxReleaseCallback(entry->mainKind, 0x102, target->address, entry->mainData);
        break;
    case 0x1010000:
        if (entry->subData != NULL && g_gfxReleaseCallback != NULL)
            g_gfxReleaseCallback(0x10000, 0x102, target->address, entry->subData);
        break;
    case 0x1020000:
    case 0x1030000:
        if (entry->mainData != NULL && g_gfxReleaseCallback != NULL)
            g_gfxReleaseCallback(entry->mainKind, 0x102, target->address, entry->mainData);
        if (entry->subData != NULL && g_gfxReleaseCallback != NULL)
            g_gfxReleaseCallback(0x10000, 0x102, target->address, entry->subData);
        break;
    case 0x2010000:
        break;
    }
    entry->mainData = NULL;
    entry->subData = NULL;
}
}
