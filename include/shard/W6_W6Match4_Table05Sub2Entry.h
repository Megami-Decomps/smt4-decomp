#ifndef SHARD_W6_W6MATCH4_TABLE05SUB2ENTRY_H
#define SHARD_W6_W6MATCH4_TABLE05SUB2ENTRY_H

#include "common.h"

struct Table05Sub2Entry {
    u8 first;
    u8 second;
    u8 unk02[2];
};

#ifdef __cplusplus
extern "C" {
#endif

Table05Sub2Entry *dataTable05FindByPriorityAndKey(u8 first, u8 second);

#ifdef __cplusplus
}
#endif

#endif
