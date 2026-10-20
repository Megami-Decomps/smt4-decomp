/* NON_MATCHING: the two argument constants are materialised in the order r1, r0 (retail: r0, r1). */
#include "common.h"

extern "C" {

typedef struct UnkTable {
    /* 0x000 */ u8 unk000[0x3F4];
    /* 0x3F4 */ int value;
} UnkTable;

extern UnkTable *g_aocSystem;

int dataTableGetCount(void);
int dataTableGet(int arg0, int arg1);

/* Selects entry (0x23, 2), then returns dataTableGetCount() plus the value at offset 0x3f4 of the global table. */
int FUN_003b5620(void)
{
    dataTableGet(0x23, 2);
    return dataTableGetCount() + g_aocSystem->value;
}

} /* extern "C" */
