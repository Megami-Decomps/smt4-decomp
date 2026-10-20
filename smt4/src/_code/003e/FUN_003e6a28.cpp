#include "common.h"

extern "C" {

struct NameTable;

typedef struct Wrapper003e6a28 {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ NameTable *table;
} Wrapper003e6a28;

s32 nameTableFindValue(NameTable *table, const char *name, u32 *outValue);

/* Passes the wrapper's table on to nameTableFindValue, the function that follows it. */
s32 FUN_003e6a28(Wrapper003e6a28 *wrapper, const char *name, u32 *outValue)
{
    return nameTableFindValue(wrapper->table, name, outValue);
}

} /* extern "C" */
