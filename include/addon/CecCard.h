#ifndef ADDON_CECCARD_H
#define ADDON_CECCARD_H
#include "common.h"
#include <stddef.h>

struct CecCardOwner {
    u32 unk00;
    void *data; // 0x04
    void *metadata; // 0x08
    u8 state[1]; // 0x0c: operation-specific state
};
typedef char CecCardOwnerOffsetsCheck[offsetof(CecCardOwner, data) == 4 && offsetof(CecCardOwner, metadata) == 8 && offsetof(CecCardOwner, state) == 0xc ? 1 : -1];
#endif
