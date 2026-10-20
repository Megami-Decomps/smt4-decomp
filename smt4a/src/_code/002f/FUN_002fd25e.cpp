#include "common.h"

extern "C" {

void handleWatcherPoll(void);
u8 FUN_00306d18(s32 handle, s32 owner, u32 a, u32 b);

typedef struct Owner {
    /* 0x00 */ u8 unk00[0xB0];
    /* 0xB0 */ s32 handle;
} Owner;

typedef struct Watcher {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 enabled;
    /* 0x05 */ u8 registered;
    /* 0x06 */ u8 unk06[6];
    /* 0x0C */ Owner *owner;
} Watcher;

/* Enables or disables the watcher: enabling registers it with its owner (when the owner has a handle); disabling runs handleWatcherPoll. */
void FUN_002fd25e(Watcher *watcher, s32 enable)
{
    u8 result;
    s32 handle;

    watcher->enabled = (u8)enable;
    if (enable != 0) {
        handle = watcher->owner->handle;
        if (handle != 0) {
            result = FUN_00306d18(handle, (s32)watcher->owner, 1, 0);
            watcher->registered = result;
        }
        return;
    }
    handleWatcherPoll();
}

} /* extern "C" */
