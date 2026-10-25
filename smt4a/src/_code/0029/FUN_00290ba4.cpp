/* NON_MATCHING: scheduling only: retail loads the g_btlUi address before calling campCommonBgRelease, built after */
/* Tears down the session: resets its sub-state, releases its handle, frees the session itself and notifies the owner's window. */
#include "common.h"
#include "shard/asdMemFree.h"

extern "C" {

typedef struct Session {
    /* 0x0000 */ u8 unk0000[0x28C4];
    /* 0x28C4 */ u8 subState[0x4BC4];
    /* 0x7488 */ u32 handle;
} Session;

typedef struct SessionHolder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Session *session;
} SessionHolder;

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ u32 window;
} Owner;

extern SessionHolder g_btlUi;

extern void jobStop(u32 window, s32 arg);
extern void asdOperatorDelete(u32 handle);
extern void partyReleasePreviewResources(void *subState);
extern void campCommonBgRelease(void);

void FUN_00290ba4(Owner *owner)
{
    Session *session;

    campCommonBgRelease();
    session = g_btlUi.session;
    partyReleasePreviewResources(session->subState);
    asdOperatorDelete(session->handle);
    session->handle = 0;
    if (g_btlUi.session != NULL) {
        asdMemFree(g_btlUi.session);
        g_btlUi.session = NULL;
    }
    jobStop(owner->window, 0);
}

}
