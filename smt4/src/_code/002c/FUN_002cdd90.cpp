#include "common.h"

extern "C" {

typedef struct ValueTable {
    /* 0x000 */ u8 unk000[0x148];
    /* 0x148 */ u16 values[1];
} ValueTable;

int scrSetResult(int value);
int scrGetArg(int index);
ValueTable *FUN_002b63c0(u16 id);

/* Script command: looks up entry (script argument 1) in the value table of record (argument 0) and passes it to scrSetResult. */
u32 FUN_002cdd90(void)
{
    u16 id = scrGetArg(0);
    int index = scrGetArg(1);

    scrSetResult(FUN_002b63c0(id)->values[index]);
    return 1;
}

} /* extern "C" */
