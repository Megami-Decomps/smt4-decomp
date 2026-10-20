/* The block held in g_frameTex: per-job flag bytes. */
#ifndef SHARD_JOBBLOCK43E278_H
#define SHARD_JOBBLOCK43E278_H

#include "common.h"

typedef struct JobBlock43e278 {
    /* 0x0000 */ u8 unk0000[0xE95];
    /* 0x0E95 */ u8 unkE95;
    /* 0x0E96 */ u8 unkE96;
    /* 0x0E97 */ u8 unk0E97[0x91];
    /* 0x0F28 */ u8 unkF28;
    /* 0x0F29 */ u8 unk0F29[0x2];
    /* 0x0F2B */ u8 unkF2B;
    /* 0x0F2C */ u8 unkF2C;
    /* 0x0F2D */ u8 unkF2D;
    /* 0x0F2E */ u8 unk0F2E[0x32];
    /* 0x0F60 */ u8 unkF60;
    /* 0x0F61 */ u8 unk0F61[0x2];
    /* 0x0F63 */ u8 unkF63;
    /* 0x0F64 */ u8 unkF64;
    /* 0x0F65 */ u8 unkF65;
    /* 0x0F66 */ u8 unk0F66[0x33];
    /* 0x0F99 */ u8 unkF99;
    /* 0x0F9A */ u8 unkF9A;
    /* 0x0F9B */ u8 unk0F9B[0x1];
    /* 0x0F9C */ u8 unkF9C;
    /* 0x0F9D */ u8 unkF9D;
    /* 0x0F9E */ u8 unkF9E;
    /* 0x0F9F */ u8 unk0F9F[0x31];
    /* 0x0FD0 */ u32 unkFD0;
    /* 0x0FD4 */ u32 unkFD4;
    /* 0x0FD8 */ u8 unkFD8;
} JobBlock43e278;

extern JobBlock43e278 *g_frameTex;

#endif
