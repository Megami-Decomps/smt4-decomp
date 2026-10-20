#include "common.h"

extern "C" {

typedef struct Target {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ u8 state;
} Target;

typedef struct Watcher Watcher;
typedef void (*WatcherCallback)(Watcher *watcher, s32 reason, u32 userData);
struct Watcher {
    /* 0x00 */ s32 owner;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ WatcherCallback callback;
    /* 0x10 */ u32 userData;
    /* 0x14 */ u8 active;
    /* 0x15 */ u8 started;
    /* 0x16 */ u8 pending;
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u8 unk18[4];
    /* 0x1C */ Target *target;
};

/* If the watcher is active and pending, and its owner's target is not in state 1 or 2, notifies the callback (reason 0) and clears `pending` and `started`. */
void FUN_001b9624(Watcher *watcher)
{
    u8 pending;
    u8 active;
    Target *target;

    active = watcher->active != 0;
    pending = 0;
    if (active) {
        pending = watcher->pending;
    }
    if (active && pending != 0) {
        target = NULL;
        if (watcher->owner != 0) {
            target = watcher->target;
        }
        if ((watcher->owner != 0 && target != NULL) && (target->state != 1 && target->state != 2)) {
            if (watcher->callback != NULL) {
                watcher->callback(watcher, 0, watcher->userData);
            }
            watcher->pending = 0;
            watcher->started = 0;
        }
    }
}

} /* extern "C" */
