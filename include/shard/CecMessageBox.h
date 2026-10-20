/* nn::cec::CTR::MessageBox: a CEC message box object with a virtual read/write interface. */
#ifndef SHARD_CECMESSAGEBOX_H
#define SHARD_CECMESSAGEBOX_H

#include "common.h"

struct MessageBox;
typedef struct MessageBoxVtbl {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void (*read)(struct MessageBox *box, u32 id, int a, int b, u32 *out);
    /* 0x0C */ u8 unk0C[0x18];
    /* 0x24 */ u32 (*remove)(struct MessageBox *box, u32 id, u32 key, int a, int b, int c);
    /* 0x28 */ u8 unk28[8];
    /* 0x30 */ u32 (*writeList)(struct MessageBox *box, void *list, int size, u32 id, int a, int b);
    /* 0x34 */ u32 (*writeListKeyed)(struct MessageBox *box, void *list, int size, u32 *key, u32 id, int a, int b);
} MessageBoxVtbl;

typedef struct MessageBox {
    /* 0x000 */ MessageBoxVtbl *vtbl;
    /* 0x004 */ u32 id;
    /* 0x008 */ u8 unk008[8];
    /* 0x010 */ u8 list[0x1CC];
    /* 0x1DC */ u8 infoA;
    /* 0x1DD */ u8 infoB;
    /* 0x1DE */ u8 infoC;
    /* 0x1DF */ u8 infoD;
} MessageBox;

#endif
