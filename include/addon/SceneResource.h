#ifndef ADDON_SCENERESOURCE_H
#define ADDON_SCENERESOURCE_H

#include "common.h"
#include "addon/AocRequestMemory.h"
#include <stddef.h>

struct SceneResource;
struct SceneResourceWork {
    /* 0x00 */ u32 job;
    union {
        /* 0x04 */ u8 unk04[0x14];
        struct {
            /* 0x04 */ u8 unk04BeforeDraw[8];
            /* 0x0C */ u32 drawJob;
        } tasks;
    };
    /* 0x18 */ u8 readyToRelease;
    union {
        /* 0x19 */ u8 unk19[3];
        struct {
            /* 0x19 */ u8 resetChannels;
            /* 0x1A */ u8 pending;
        } state;
    };
    /* 0x1C */ SceneResource *resource;
};

typedef char SceneResourceWorkLayoutCheck[
    sizeof(SceneResourceWork) == 0x20 &&
    offsetof(SceneResourceWork, tasks.drawJob) == 0x0C &&
    offsetof(SceneResourceWork, state.resetChannels) == 0x19 &&
    offsetof(SceneResourceWork, state.pending) == 0x1A ? 1 : -1];

extern "C" {
void aocMainShutdown(void);
SceneResource *_ZN7AocMenuD1Ev(SceneResource *resource);
}

/* Marks the scene ready to release and, if it still owns its AocMenu, shuts the AOC system down and
 * destroys and frees the menu: the body of sceneResourceShutdownAoc (the AOC process's end callback),
 * inlined by the process's close step (smt4 aocMainProcessUpdate, smt4a aocMainProcessUpdate) and aocMainPollShutdown. */
static __inline void sceneResourceRelease(SceneResourceWork *work)
{
    work->readyToRelease = 1;
    if (work->resource != NULL) {
        aocMainShutdown();
        if (work->resource != NULL) {
            aocRequestMemoryFree(_ZN7AocMenuD1Ev(work->resource));
            work->resource = NULL;
        }
    }
}

#endif
