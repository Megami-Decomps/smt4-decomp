#ifndef GAMEDATA_CATEGORYVARIANTRECORD_H
#define GAMEDATA_CATEGORYVARIANTRECORD_H
#include "common.h"
struct CategoryVariantRecord {
    u8 category;
    u8 kind;
    u16 variant;
    u8 payload[0x90];
};
typedef char CategoryVariantRecordSizeCheck[sizeof(CategoryVariantRecord) == 0x94 ? 1 : -1];
#endif
