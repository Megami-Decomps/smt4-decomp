#include "common.h"

extern "C" {

void FUN_00310284(void);
u32 FUN_002eb5f4(void);
u8 FUN_00306d18(s32 handle, void *owner, u32 a, u32 b);

typedef struct Owner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 handle;
} Owner;

typedef struct Watcher {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Owner *owner;
    /* 0x08 */ s8 enabled;
    /* 0x09 */ u8 registered;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ u32 stamp;
} Watcher;

/* Enables or disables the watcher: enabling registers it with its owner (when the owner has a handle) and records FUN_002eb5f4's stamp; disabling calls FUN_00310284. */
void FUN_00120f5c(Watcher *watcher, s32 enable)
{
    s32 handle;

    watcher->enabled = (s8)enable;
    if (enable != 0) {
        handle = watcher->owner->handle;
        if (handle != 0) {
            watcher->registered = FUN_00306d18(handle, watcher->owner, 0xF, 0);
        }
        watcher->stamp = FUN_002eb5f4();
        return;
    }
    FUN_00310284();
}

} /* extern "C" */
