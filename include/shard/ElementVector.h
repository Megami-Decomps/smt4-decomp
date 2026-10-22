#ifndef SHARD_ELEMENTVECTOR_H
#define SHARD_ELEMENTVECTOR_H

#include "common.h"

struct ElementRecord {
    /* 0x00 */ u8 unk00[0x18];
};
struct ElementVector {
    /* 0x00 */ ElementRecord *begin;
    /* 0x04 */ ElementRecord *end;
    /* 0x08 */ ElementRecord *capacityEnd;
};

struct ElementRecord40 {
    /* 0x00 */ u8 unk00[0x28];
};
struct ElementVector40 {
    /* 0x00 */ ElementRecord40 *begin;
    /* 0x04 */ ElementRecord40 *end;
    /* 0x08 */ ElementRecord40 *capacityEnd;
};

#endif
