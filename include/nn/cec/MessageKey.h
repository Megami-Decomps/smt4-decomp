#ifndef NN_CEC_MESSAGEKEY_H
#define NN_CEC_MESSAGEKEY_H

#include "common.h"
#include <stddef.h>

/* The eight-byte identifier stored at offset 0x20 in a CEC message header. */
struct CecMessageKey {
    u8 data[8];
};
typedef char CecMessageKeySize[sizeof(CecMessageKey) == 8 ? 1 : -1];

struct CecMessageKeyHeader {
    u32 unk00;
    u32 messageBytes;
    u8 unk08[0x18];
    CecMessageKey key;
};
typedef char CecMessageKeyHeaderOffsets[
    offsetof(CecMessageKeyHeader, key) == 0x20 &&
    offsetof(CecMessageKeyHeader, messageBytes) == 4 ? 1 : -1];

#endif
