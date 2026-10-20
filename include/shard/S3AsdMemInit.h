/* AsdMemSystem (see AsdSDK/Source/Sys/Mem/AsdMemory.h) as the memory init writes it: the block
 * range the system reserves, then two zeroed ExpHeapBase objects each followed by its
 * CriticalSection. */
#ifndef SHARD_S3ASDMEMINIT_H
#define SHARD_S3ASDMEMINIT_H

#include "common.h"

/* nn::fnd::ExpHeapBase as left by its constructor (0x58 bytes). */
typedef struct AsdExpHeapBaseInit {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 field04;
    /* 0x08 */ u32 field08;
    /* 0x0C */ u32 field0C;
    /* 0x10 */ u32 field10;
    /* 0x14 */ u32 field14;
    /* 0x18 */ u32 field18;
    /* 0x1C */ u8 unk1C[0x38];
    /* 0x54 */ u32 field54;
} AsdExpHeapBaseInit;

/* nn::os::CriticalSection as left by its constructor (0xC bytes). */
typedef struct AsdCriticalSectionInit {
    /* 0x00 */ u32 field00;
    /* 0x04 */ u32 field04;
    /* 0x08 */ s32 owner;      /* -1: not owned */
} AsdCriticalSectionInit;

typedef struct AsdMemSystemInit {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 blockBase;      /* what addressBlockAllocate reserved */
    /* 0x0C */ u32 blockSize;
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ u32 mainBase;
    /* 0x18 */ u32 mainSize;
    /* 0x1C */ AsdExpHeapBaseInit mainHeap;
    /* 0x74 */ AsdCriticalSectionInit mainLock;
    /* 0x80 */ u8 unk80[8];
    /* 0x88 */ AsdExpHeapBaseInit extraHeap;
    /* 0xE0 */ AsdCriticalSectionInit extraLock;
    /* 0xEC */ u8 unkEC[0x18];
} AsdMemSystemInit;

#endif
