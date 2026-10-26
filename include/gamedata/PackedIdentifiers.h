#ifndef GAMEDATA_PACKED_IDENTIFIERS_H
#define GAMEDATA_PACKED_IDENTIFIERS_H
#include "common.h"

// Two identifiers and their two-bit states occupy one packed 64-bit record.
struct PackedIdentifiers {
    /* 0x00, bits 0-14 */ u64 firstIdentifier : 15;
    /* 0x01, bits 15-29 */ u64 secondIdentifier : 15;
    /* 0x03, bits 30-31 */ u64 firstState : 2;
    /* 0x04, bits 32-33 */ u64 secondState : 2;
    /* 0x04, bits 34-48 */ u64 resultIdentifier : 15;
    /* 0x06, bits 49-63 */ u64 cost : 15;
};
#endif
