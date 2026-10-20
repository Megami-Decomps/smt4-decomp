/* NON_MATCHING: scheduling only: retail loads the DAT_0057a9b8 address before calling FUN_0035b304, built after */
/* Tears down the session: resets its sub-state, releases its handle, frees the session itself and notifies the owner's window. */
#include "common.h"

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

extern SessionHolder DAT_0057a9b8;

extern void jobStop(u32 window, s32 arg);
extern void asdMemFree(Session *session);
extern void FUN_002e3328(u32 handle);
extern void FUN_00318c3c(void *subState);
extern void FUN_0035b304(void);

void FUN_00290ba4(Owner *owner)
{
    Session *session;

    FUN_0035b304();
    session = DAT_0057a9b8.session;
    FUN_00318c3c(session->subState);
    FUN_002e3328(session->handle);
    session->handle = 0;
    if (DAT_0057a9b8.session != NULL) {
        asdMemFree(DAT_0057a9b8.session);
        DAT_0057a9b8.session = NULL;
    }
    jobStop(owner->window, 0);
}

}
