#ifndef SHARD_ELEMENT_VECTOR_12_H
#define SHARD_ELEMENT_VECTOR_12_H
#include "common.h"
struct ElementRecord12 {
    u8 unk00[12]; // 0x00
};
struct ElementVector12 {
    ElementRecord12* begin; // 0x00
    ElementRecord12* end; // 0x04
    ElementRecord12* capacityEnd; // 0x08
};
#endif
