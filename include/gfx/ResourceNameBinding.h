#ifndef GFX_RESOURCE_NAME_BINDING_H
#define GFX_RESOURCE_NAME_BINDING_H

#include "common.h"
#include <stddef.h>

struct ResourceNameDictionary {
    /* 0x00 */ u16 count;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ void *nodes;
};
struct ResourceNameBinding {
    /* 0x00 */ u16 *indices;
    /* 0x04 */ u32 capacity;
};
struct ResourceNamedTarget {
    /* 0x00 */ const char *name;
    /* 0x04 */ u16 kind;
};
struct ResourceNameTargets {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ ResourceNamedTarget **targets;
    /* 0x10 */ u32 count;
};
/* A name list: a header word followed by the dictionary nameTableLookupEntry searches. */
struct ResourceNameList {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ResourceNameDictionary dictionary;
};
struct ResourceNameDictionaryOwner {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ ResourceNameList names;
};
typedef char ResourceNameBindingOffsetsCheck[
    offsetof(ResourceNameTargets, targets) == 0xC &&
    offsetof(ResourceNameTargets, count) == 0x10 &&
    offsetof(ResourceNameDictionaryOwner, names.dictionary) == 0x38 &&
    sizeof(ResourceNameBinding) == 8 ? 1 : -1];

#endif
