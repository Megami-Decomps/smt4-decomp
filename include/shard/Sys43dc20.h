/* The block at 0x43dc20 (a sprite ref count byte and a pointer to a scene object). */
#ifndef SHARD_SYS43DC20_H
#define SHARD_SYS43DC20_H

#include "common.h"

typedef struct Obj43dc20 {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ int state;
} Obj43dc20;

typedef struct Sys43dc20 {
    /* 0x00 */ u8 unk00[0x1];
    /* 0x01 */ s8 spriteRefCount;
    /* 0x02 */ u8 unk02[0x6];
    /* 0x08 */ Obj43dc20 *obj;
} Sys43dc20;

extern Sys43dc20 g_commonBg;

#endif
