#ifndef SHARD_W6_W6MATCH1_TABLE25RECORD_H
#define SHARD_W6_W6MATCH1_TABLE25RECORD_H

#include "common.h"

struct Table25Record {
    /* 0x00 */ s8 id;
    union {
        /* 0x01 */ u8 unk01[0x1f];
        /* 0x01 */ char archive[0x1f];
    };
};

#ifdef __cplusplus
extern "C" {
#endif

Table25Record* dataTable25Section0FindById(s32 id);

#ifdef __cplusplus
}
#endif

#endif
