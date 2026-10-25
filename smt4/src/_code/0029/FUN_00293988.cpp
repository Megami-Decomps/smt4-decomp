#include "common.h"

extern "C" {

extern void *saveGetIndexedMapValue(int index);

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ s16 unk48;
} Entry;

typedef struct Scene {
    /* 0x0000 */ u8 unk0000[0x2F34];
    /* 0x2F34 */ int unk2F34;
    /* 0x2F38 */ u8 unk2F38[0x1570];
    /* 0x44A8 */ u32 flags;
} Scene;

/* 1 unless the scene is neither flagged (0x40) nor in state 1-4 and has no active entries. */
u32 FUN_00293988(void *work)
{
    Scene *scene = static_cast<Scene *>(work);
    Entry *entry;
    int active;
    int i;

    if (((scene->flags & 0x40) == 0) && (scene->unk2F34 - 1U > 3U)) {
        active = 0;
        i = active;
        do {
            entry = (Entry *)saveGetIndexedMapValue(i);
            i = i + 1;
            if (entry->unk48 != 0) {
                active = active + 1;
            }
        } while (i < 0xc);
        if (active < 1) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
