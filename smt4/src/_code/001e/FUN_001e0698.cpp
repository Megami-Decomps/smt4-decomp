/* NON_MATCHING: only the literal-pool word differs: retail holds the resolved address 0x32c6c8 of the callback label, this build a relocation against LAB_0032c6c8
 * (writing the address as an integer constant makes the compiler hoist it into a register across both calls). */
#include "common.h"

extern "C" {

/* The completion callback, a local label in retail. */
extern u8 LAB_0032c6c8;
#define REQUEST_CALLBACK (&LAB_0032c6c8)

int FUN_002b7bca(u32 arg0, u32 arg1, int size, u8 *callback);
u32 FUN_00297410(u32 arg);
u32 dataTableGetCount(u32 arg);
u32 dataTableGetEntries(void);
u32 dataTableGet(u32 arg0, u32 arg1);

/* Submits the 0x60-byte request for lookup index (0x16, 0), then for (0x16, 1); returns FUN_00297410(0x16). */
u32 FUN_001e0698(void)
{
    u32 result = FUN_00297410(0x16);
    u32 selected;
    u32 other;

    selected = dataTableGet(0x16, 0);
    other = dataTableGetEntries();
    selected = dataTableGetCount(selected);
    FUN_002b7bca(other, selected, 0x60, REQUEST_CALLBACK);
    selected = dataTableGet(0x16, 1);
    other = dataTableGetEntries();
    selected = dataTableGetCount(selected);
    FUN_002b7bca(other, selected, 0x60, REQUEST_CALLBACK);
    return result;
}

} /* extern "C" */
