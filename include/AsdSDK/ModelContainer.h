#ifndef ASD_MODEL_CONTAINER_H
#define ASD_MODEL_CONTAINER_H
#include "common.h"
#include <stddef.h>
struct AsdModelContainerHeader {
    u8 magic[4]; // 0x00
    union {
        u8 unk04[0x0C]; // 0x04
        struct {
            u8 unk04BeforeAuxiliary[8];
            u32 offset; // 0x0C
        } auxiliary;
    };
    u32 fallbackOffset; // 0x10
    u32 payloadOffset; // 0x14
};
struct AsdModelPayloadHeader {
    u8 signature[8]; // 0x00
    u32 payloadSize; // 0x08
    u8 unk0C[0x74]; // 0x0C
};
typedef char AsdModelContainerLayoutCheck[
    sizeof(AsdModelContainerHeader) == 0x18 &&
    offsetof(AsdModelContainerHeader, auxiliary.offset) == 0xC &&
    offsetof(AsdModelContainerHeader, fallbackOffset) == 0x10 &&
    offsetof(AsdModelContainerHeader, payloadOffset) == 0x14 &&
    sizeof(AsdModelPayloadHeader) == 0x80 ? 1 : -1];
#endif
