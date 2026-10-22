#ifndef SYS_STORAGE_BLOCK_QUERY_H
#define SYS_STORAGE_BLOCK_QUERY_H
#include "common.h"

struct StorageQueryParameters {
    u32 first; // 0x00
    u32 second; // 0x04
};
struct StorageQueryContext {
    StorageQueryParameters parameters; // 0x00
    u8 unk08[0x1C]; // 0x08
    void* buffer; // 0x24
    u32 bufferSize; // 0x28
};
struct StorageQueryRequest {
    StorageQueryParameters parameters; // 0x00
    u8 unk08[9]; // 0x08
    u8 unk11; // 0x11
    u8 unk12[6]; // 0x12
};
typedef char StorageQueryRequestSizeCheck[sizeof(StorageQueryRequest) == 0x18 ? 1 : -1];
#endif
