/* nn::os::SharedMemoryBlock: a kernel shared-memory handle mapped into the process. */
#ifndef S2_SHARED_MEMORY_BLOCK_H
#define S2_SHARED_MEMORY_BLOCK_H

#include "common.h"

typedef struct SharedMemoryBlock SharedMemoryBlock;

struct SharedMemoryBlock {
    u8 unk00[8];         /* 0x0 */
    u32 attachedAddress; /* 0x8: nonzero once attached */
    u8 unk0c[4];         /* 0xc */
    u8 readOnly;         /* 0x10 */
    u8 unk11[3];         /* 0x11 */
    s32 handle;          /* 0x14: kernel memory-block handle */
    u8 isMapped;         /* 0x18 */
};

#endif
