/* nn::gx library state (the GPU/command-list service wrapper's globals). */
#ifndef S2_NNGX_STATE_H
#define S2_NNGX_STATE_H

#include "common.h"

/* The library's own state block. */
typedef struct NngxState {
    /* 0x00 */ u8 initialized;     /* set once Initialize has run */
    /* 0x01 */ u8 unk01;
    /* 0x02 */ s8 gpuRightFlag;    /* passed to Gpu::AcquireRight */
    /* 0x03 */ u8 nameReady;       /* the module name has been prepared */
    /* 0x04 */ const u16 *name;    /* wide-character module name */
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;          /* copy of unk10 taken at init */
    /* 0x18 */ u8 unk18[4];
    /* 0x1c */ struct NngxWork *work;
} NngxState;

/* Command-list bookkeeping the init zeroes. */
typedef struct NngxWork {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ s32 unk08;          /* -1 */
    /* 0x0c */ u8 unk0c[0x20];
    /* 0x2c */ u32 unk2c[7];
    /* 0x48 */ u8 unk48;
    /* 0x49 */ u8 unk49[3];
    /* 0x4c */ u32 unk4c;
    /* 0x50 */ u8 unk50;
    /* 0x51 */ u8 unk51[7];
    /* 0x58 */ u32 unk58;
    /* 0x5c */ u32 unk5c;
    /* 0x60 */ u8 unk60[4];
    /* 0x64 */ u32 unk64;
    /* 0x68 */ u32 unk68;
    /* 0x6c */ u32 unk6c;
    /* 0x70 */ u8 enabled;         /* set to 1 */
} NngxWork;

#endif
