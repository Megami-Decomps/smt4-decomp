#ifndef NN_OS_MAPPED_MEMORY_BLOCK_H
#define NN_OS_MAPPED_MEMORY_BLOCK_H

#include "nn/os/ThreadLaunch.h"
#include <stddef.h>

struct MappedMemoryBlock : ThreadStackStorage {
    MappedMemoryBlock()
    {
        info.unk00 = 0;
        info.unk04 = 0;
        info.address = 0;
        info.size = 0;
        owned = 0;
        handle = 0;
        allocationOwned = 0;
    }
    ~MappedMemoryBlock();

    /* 0x18 */ u8 allocationOwned;
    /* 0x19 */ u8 unk19[3];
};
typedef char MappedMemoryBlockLayoutCheck[
    sizeof(MappedMemoryBlock) == 0x1c &&
    offsetof(MappedMemoryBlock, allocationOwned) == 0x18 ? 1 : -1];

#endif
