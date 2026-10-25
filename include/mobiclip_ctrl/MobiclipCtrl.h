/* mobiclip_ctrl/MobiclipCtrl.c and its helper_S4* files: the Mobiclip movie player controller. */
#ifndef MOBICLIP_CTRL_MOBICLIPCTRL_H
#define MOBICLIP_CTRL_MOBICLIPCTRL_H

#include "common.h"

/* A file opened through the 3DS file system: `handle` is the nn file handle with bit 0 set
 * when the file must also be released through FUN_xxx before closing. */
typedef struct S4File {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 handle;
} S4File;

/* The player object (only the parts recovered so far). */
typedef struct S4Player {
    /* 0x000 */ u8 unk000[0x1C0];
    /* 0x1C0 */ u32 handle;
} S4Player;

/* Objects whose layout has not been recovered yet. */
typedef struct S4FsReader S4FsReader;

extern "C" {
u8 *configGetSettings(void);
}

#endif
