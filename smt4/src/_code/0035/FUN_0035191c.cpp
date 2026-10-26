#include "common.h"
#include "nn/svc.h"
#include <stddef.h>
#include "mobiclip_ctrl/DeblockerHandle.h"

extern "C" {
void mobiclipS4PlayerDestroy(void *player);
void mobiclipDeblockerRelease(u32 *handle);
void nn_os_Thread_FinalizeImpl(u32 *thread);
}

/* The movie player (only what its destructor touches): the reader thread handle and the deblocker handle. */
struct MoviePlayerView {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ u32 threadHandle;
    /* 0x02c */ u8 unk02c[0x12c];
    /* 0x158 */ u32 deblocker;
};
typedef char MoviePlayerViewOffsetsCheck[
    offsetof(MoviePlayerView, threadHandle) == 0x28 &&
    offsetof(MoviePlayerView, deblocker) == 0x158 ? 1 : -1];

extern "C" {

/* Stops the player, releases its deblocker and closes its thread. */
MoviePlayerView *FUN_0035191c(MoviePlayerView *player)
{
    mobiclipS4PlayerDestroy(player);
    u32 *handle = &player->deblocker;
    mobiclipDeblockerRelease(handle);
    mwmofilterDeblockerRelease(*handle);
    *handle = 0;
    handle = &player->threadHandle;
    nn_os_Thread_FinalizeImpl(handle);
    if (*handle != 0) {
        nn::svc::CloseHandle(*handle);
        *handle = 0;
    }
    return player;
}

} /* extern "C" */
