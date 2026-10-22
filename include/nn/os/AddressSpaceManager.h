#ifndef NN_OS_ADDRESSSPACEMANAGER_H
#define NN_OS_ADDRESSSPACEMANAGER_H

#include "common.h"

struct AddressSpaceManager;
struct AddressSpaceRegion {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 mappedAddress;
    /* 0x0C */ u32 size;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 backingAddress;
};

#endif
