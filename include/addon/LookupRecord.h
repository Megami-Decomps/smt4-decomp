#ifndef AOC_LOOKUP_RECORD_H
#define AOC_LOOKUP_RECORD_H
#include "common.h"

struct Table01Record {
    /* 0x00 */ u8 data[0x20];
};

/* The name record of an id (the add-on's own when present, else the base table's first entry). */
#ifdef __cplusplus
extern "C" {
#endif
struct Table01Record *FUN_00180118(u32 id);
struct Table01Record *FUN_00180114(u32 id);
struct Table01Record *FUN_002bd06c(u32 id);
#ifdef __cplusplus
}
#endif

struct AocLookupRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ Table01Record record;
    /* 0x22 */ u8 unk22[6];
};
#endif
