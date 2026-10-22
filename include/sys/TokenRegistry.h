#ifndef SYS_TOKEN_REGISTRY_H
#define SYS_TOKEN_REGISTRY_H
#include "common.h"
#include <stddef.h>

struct TokenRegistryEntry {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 subtype;
    /* 0x06 */ u16 flags;
};
struct TokenRegistryTable {
    /* 0x00 */ TokenRegistryEntry* entries;
    /* 0x04 */ u32 capacity;
    /* 0x08 */ u32 count;
};
typedef char TokenRegistryEntryLayoutCheck[sizeof(TokenRegistryEntry) == 8 &&
    offsetof(TokenRegistryEntry, kind) == 4 && offsetof(TokenRegistryEntry, subtype) == 5 ? 1 : -1];
#endif
