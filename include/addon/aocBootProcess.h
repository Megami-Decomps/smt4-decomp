/* addon/aocBootProcess.c: the add-on content (AOC) boot process.
 *
 * A job created at startup that walks a small state machine (see AocBoot.state) and raises
 * `finished` once it is done. Its state lives in one heap block, owned by a module global. */
#ifndef ADDON_AOCBOOTPROCESS_H
#define ADDON_AOCBOOTPROCESS_H

#include "common.h"

typedef struct AocBoot {
    /* 0x000 */ u32 job;          /* handle of the job that runs the boot process */
    /* 0x004 */ u8 unk04[4];
    /* 0x008 */ u8 state;         /* 0..5 */
    /* 0x009 */ u8 dialogOpen;    /* set while `dialog` is shown */
    /* 0x00A */ u8 unk0A[2];
    /* 0x00C */ u8 dialog[0x5E4]; /* embedded dialog object */
    /* 0x5F0 */ u32 frames;       /* frames spent in the current state, saturates at 0xFF */
} AocBoot;

/* Apocalypse keeps the boot block's pointer and the finished flag side by side. */
typedef struct AocBootGlobals {
    /* 0x00 */ AocBoot *boot;
    /* 0x04 */ s32 finished;
} AocBootGlobals;

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void FUN_0027e9c0(void *obj);
#ifdef __cplusplus
}
#endif

#endif
