#ifndef SHARD_FLOATSORTRECORD_H
#define SHARD_FLOATSORTRECORD_H

#include "common.h"

/* Float-keyed entry shared by the record comparators. */
struct FloatSortRecord {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ f32 key;
};

#endif
